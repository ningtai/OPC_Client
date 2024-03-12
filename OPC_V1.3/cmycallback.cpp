#include "cmycallback.h"


CMyCallback::CMyCallback(QObject *parent)
{

}
CMyCallback::~CMyCallback()
{
    delete data;
    delete item;
}
/**
* @brief This function is called once the opc data changes
*/
void CMyCallback::OnDataChange(COPCGroup &group, COPCItemDataMap &changes)
{
    //printf("group '%ws', item(s) changed:\n", group.getName().c_str());
    //POSITION pos = changes.GetStartPosition();
    //if (pos)//while
    //{
    //    //OPCHANDLE handle = changes.GetKeyAt(pos);
    //    data = changes.GetNextValue(pos);
    //    emit valuechanged(data);
    //    if (data)
    //    {
    //        item = data->item();// retrieve original item pointer from item data..
    //        if (item)
    //        {
    //            std::wcout << "mydata----->" << item->getName();
    //            std::cout << ", async read quality:" << data->wQuality << ", value:" << data->vDataValue.iVal << std::endl;
    //        }
    //    } // if
    //}// while
}

