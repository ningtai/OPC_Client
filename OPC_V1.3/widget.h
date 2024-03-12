#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <sys\timeb.h>
#include <QListWidgetItem>
#include <QMessageBox>
#include <iostream>
#include <map>
#include <QStandardItem>
#include <QStandardItemModel>
#include "OPCGroup.h"
#include "OPCHost.h"
#include "OPCServer.h"
#include "cmycallback.h"
#pragma execution_character_set("UTF-8")

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE


class OpcWidget : public QWidget
{
    Q_OBJECT
public:
    OpcWidget(QWidget *parent = nullptr);
    ~OpcWidget();

private slots:
    void on_connectbt1_clicked();

    void on_connectbt2_clicked();

    void on_servertreeView_doubleClicked(const QModelIndex& index);

    void on_opcItemlist_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::Widget *ui;
    vector<std::wstring> itemNames1;
    vector<std::wstring> itemNames2;
    bool connectflag1 = false;
    bool connectflag2 = false;
    QStandardItemModel model;
    QString parentText;
    QThread* t1;
    QThread* t2;
signals:
    void transmithost1(QString hostName);
    void transmitserver1(QString serverName);
    void transmititemNames(std::vector<std::wstring> itemNames);

    void transmithost2(QString hostName);
    void transmitserver2(QString serverName);
    void transmititemNames2(std::vector<std::wstring> itemNames);
};
#endif 
