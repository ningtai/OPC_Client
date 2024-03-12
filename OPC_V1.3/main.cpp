#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qRegisterMetaType<vector<COPCItem*>>("vector<COPCItem*>");
    qRegisterMetaType<wstring>("wstring");
    qRegisterMetaType<vector<std::wstring>>("vector<std::wstring>");
    qRegisterMetaType<std::vector<std::wstring>>("std::vector<std::wstring>");
    OpcWidget w;
    w.show();
    return a.exec();
}
