#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QTimer>
#include <QThread>
#include "mythread.h"

/**
* @brief Ui interface initialization 
*/
OpcWidget::OpcWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle(QString("OPC客户端"));
    ui->IP1->setText("192.168.1.122");
    ui->IP2->setText("192.168.1.123");

    //创建子线程对象
    t1 = new QThread;
    t2 = new QThread;

    //创建子线程1的任务类
    Generate1* gen = new Generate1;
    gen->moveToThread(t1);
    t1->start();

    //创建子线程2的任务类
    Generate2* gen1 = new Generate2;
    gen1->moveToThread(t2);
    t2->start();

    //连接主线程中的信号和子线程1中的槽函数
    connect(this, &OpcWidget::transmithost1, gen, &Generate1::receivehostname);
    connect(this, &OpcWidget::transmitserver1, gen, &Generate1::receiveservername);
    connect(this, &OpcWidget::transmititemNames, gen, &Generate1::receiveitemnames);

    //连接主线程中的信号和子线程2中的槽函数
    connect(this, &OpcWidget::transmithost2, gen1, &Generate2::receivehostname);
    connect(this, &OpcWidget::transmitserver2, gen1, &Generate2::receiveservername);
    connect(this, &OpcWidget::transmititemNames2, gen1, &Generate2::receiveitemnames);


    //连接子线程1中的信号和主线程中的槽函数
    connect(gen, &Generate1::host1finished, this, [=](std::vector<std::wstring> localServerList) {
        QList<QStandardItem*> list;
        QString text = ui->IP1->text();
        auto item = new QStandardItem(text);
        for (int i = 0; i < localServerList.size(); i++)
        {
            QString serverText = QString::fromStdWString(localServerList[i]);
            item->appendRow(new QStandardItem(serverText));
        }
        list.push_back(item);
        model.appendRow(list);
        ui->servertreeView->setModel(&model);
    });

    connect(gen, &Generate1::opcItemNamesfinished, this, [=](std::vector<std::wstring> opcItemNames) {
        ui->opcItemlist->clear();
        for (int i = 0; i < opcItemNames.size(); i++)
        {
            ui->opcItemlist->addItem(QString::fromStdWString(opcItemNames[i]));
        }
    });

    connect(gen, &Generate1::itemDataListfinished, this, [=](QStringList itemDataList) {
        ui->ItemValue_1->clear();
        ui->ItemValue_1->addItems(itemDataList);
    });

    //连接子线程2中的信号和主线程中的槽函数
    connect(gen1, &Generate2::host2finished, this, [=](std::vector<std::wstring> localServerList) {
        QList<QStandardItem*> list;
        QString text = ui->IP2->text();
        auto item = new QStandardItem(text);
        for (int i = 0; i < localServerList.size(); i++)
        {
            QString serverText = QString::fromStdWString(localServerList[i]);
            item->appendRow(new QStandardItem(serverText));
        }
        list.push_back(item);
        model.appendRow(list);
        ui->servertreeView->setModel(&model);
    });

    connect(gen1, &Generate2::opcItemNamesfinished, this, [=](std::vector<std::wstring> opcItemNames) {
        ui->opcItemlist->clear();
        for (int i = 0; i < opcItemNames.size(); i++)
        {
            ui->opcItemlist->addItem(QString::fromStdWString(opcItemNames[i]));
        }
    });

    connect(gen1, &Generate2::itemDataListfinished, this, [=](QStringList itemDataList) {
        ui->ItemValue_2->clear();
        ui->ItemValue_2->addItems(itemDataList);
    });

    //关闭窗口时退出子线程1
    connect(this, &OpcWidget::destroyed, this,[=]() {
        t1->quit();
        t1->wait();
        t1->deleteLater();
    });
    //关闭窗口时退出子线程2
    connect(this, &OpcWidget::destroyed, this,[=]() {
        t2->quit();
        t2->wait();
        t2->deleteLater();
    });
    
    //输出调试信息
    qDebug() << "主线程的线程地址" << QThread::currentThread();
}

/**
* @brief Close the ui to release memory
*/
OpcWidget::~OpcWidget()
{
    disconnect(this, 0, 0, 0);//断开所有信号
    delete ui;
}

/**
* @brief Connect the host of IP1
*/
void OpcWidget::on_connectbt1_clicked()
{
    if (connectflag1 == true)
    {
        QMessageBox::information(this, "提示", "服务器1已连接！"); 
        return;
    }

    //清空opcItemlist、ItemValue_1中的数据，清除实时刷新项目中存储的值
    ui->opcItemlist->clear();
    ui->ItemValue_1->clear();
    itemNames1.clear();

    //将IP框中的字符串传到子线程
    emit transmithost1(ui->IP1->text());

    //第一次进入将标志位置1
    connectflag1 = true;
}

/**
* @brief Connect the host of IP2
*/
void OpcWidget::on_connectbt2_clicked()
{
    if (connectflag2 == true)
    {
        QMessageBox::information(this, "提示", "服务器2已连接！");
        return;
    }

    //清空opcItemlist、ItemValue_2中的数据，清除实时刷新项目中存储的值
    ui->opcItemlist->clear();
    ui->ItemValue_2->clear();
    itemNames2.clear();

    //将IP框中的字符串传到子线程
    emit transmithost2(ui->IP2->text());

    //第一次进入将标志位置1
    connectflag2 = true;
}
/**
* @brief DoubleClient the index of servertreeView to connect the opcserver of corresponding host and make the 
*        opcItemNames appear on the opcItemlist
*/
void OpcWidget::on_servertreeView_doubleClicked(const QModelIndex& index)
{
    //判断双击节点是否是父节点,若是则返回，不执行后续的槽函数
    if (index.isValid()) 
    {
        if (ui->servertreeView->model()->hasChildren(index)) 
        {
            return;
        }
    }

    //清空opcItemlist、ItemValue_1和ItemValue_2中的数据
    ui->opcItemlist->clear();

    //获取双击的服务器名字
    QString itemText;
    if (index.isValid())
    {
        QVariant itemData = index.data(Qt::DisplayRole);
        itemText = itemData.toString();

        QModelIndex parentIndex = index.parent();
        if (parentIndex.isValid())
        {
            QVariant parentData = parentIndex.data(Qt::DisplayRole);
            parentText = parentData.toString();

            qDebug() << "Parent item has text: " << parentText;
            qDebug() << "Double-clicked on item with text: " << itemText;
        }
        else
        {
            qDebug() << "Double-clicked on top-level item with text: " << itemText;
        }
    }

    if (itemText != "Ttx.OpcDaTunnel.1")
    {
        QMessageBox::information(this, "提示", "服务器无效");
        return;
    }

    //根据双击节点的父节点名来将信号传给对应的子线程
    if (parentText == ui->IP1->text())
    {
        emit transmitserver1(itemText);
    }

    if (parentText == ui->IP2->text())
    {
        emit transmitserver2(itemText);
    }
}
/**
* @brief DoubleClick the item of the opcItemNames,by this way,you can add 
*        the item of the opcItemNames to the timer for real-time updates
*/
void OpcWidget::on_opcItemlist_itemDoubleClicked(QListWidgetItem *item)
{
    std::wstring wstrItems = item->text().toStdWString(); 
    if (parentText == ui->IP1->text())
    {
        if(itemNames1.end() == std::find(itemNames1.begin(), itemNames1.end(), wstrItems))//如果没有监视项，则添加
        {
            itemNames1.push_back(wstrItems);
        }
        emit transmititemNames(itemNames1);
    }
    if (parentText == ui->IP2->text())
    {
        if (itemNames2.end() == std::find(itemNames2.begin(), itemNames2.end(), wstrItems))//如果没有监视项，则添加
        {
            itemNames2.push_back(wstrItems);
        }
        emit transmititemNames2(itemNames2);
    }
}