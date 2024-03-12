/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *IP1;
    QPushButton *connectbt1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *IP2;
    QPushButton *connectbt2;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QTreeView *servertreeView;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QListWidget *opcItemlist;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QListWidget *ItemValue_1;
    QLabel *label_5;
    QListWidget *ItemValue_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setEnabled(true);
        Widget->resize(729, 938);
        Widget->setMinimumSize(QSize(561, 521));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_3 = new QWidget(Widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        IP1 = new QLineEdit(widget_3);
        IP1->setObjectName(QString::fromUtf8("IP1"));

        horizontalLayout->addWidget(IP1);

        connectbt1 = new QPushButton(widget_3);
        connectbt1->setObjectName(QString::fromUtf8("connectbt1"));

        horizontalLayout->addWidget(connectbt1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        IP2 = new QLineEdit(widget_3);
        IP2->setObjectName(QString::fromUtf8("IP2"));

        horizontalLayout_2->addWidget(IP2);

        connectbt2 = new QPushButton(widget_3);
        connectbt2->setObjectName(QString::fromUtf8("connectbt2"));

        horizontalLayout_2->addWidget(connectbt2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_5->addWidget(widget_3);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(61, 16));

        verticalLayout_3->addWidget(label_2);

        servertreeView = new QTreeView(widget);
        servertreeView->setObjectName(QString::fromUtf8("servertreeView"));
        servertreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        servertreeView->header()->setVisible(false);

        verticalLayout_3->addWidget(servertreeView);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(54, 16));

        verticalLayout_4->addWidget(label_3);

        opcItemlist = new QListWidget(widget);
        opcItemlist->setObjectName(QString::fromUtf8("opcItemlist"));

        verticalLayout_4->addWidget(opcItemlist);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_5->addWidget(widget);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        ItemValue_1 = new QListWidget(widget_2);
        ItemValue_1->setObjectName(QString::fromUtf8("ItemValue_1"));
        ItemValue_1->setAutoScrollMargin(1);

        verticalLayout_2->addWidget(ItemValue_1);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        ItemValue_2 = new QListWidget(widget_2);
        ItemValue_2->setObjectName(QString::fromUtf8("ItemValue_2"));
        ItemValue_2->setAutoScrollMargin(1);

        verticalLayout_2->addWidget(ItemValue_2);


        verticalLayout_5->addWidget(widget_2);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\2501:", nullptr));
        connectbt1->setText(QCoreApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\2502:", nullptr));
        connectbt2->setText(QCoreApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250\345\210\227\350\241\250", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\351\241\271\347\233\256\345\210\227\350\241\250", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\2501\347\233\221\350\247\206\346\225\260\346\215\256", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\2502\347\233\221\350\247\206\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
