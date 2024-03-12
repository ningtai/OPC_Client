#ifndef CMYCALLBACK_H
#define CMYCALLBACK_H

#include <OPCInclude/OPCClient.h>
#include <OPCInclude/OPCGroup.h>
#include "OPCInclude/OPCItem.h"
#include <iostream>
#include <QObject>
/**
 * Handle async data coming from changes in the OPC group
 */

class CMyCallback : public QObject,public IAsyncDataCallback //QObject要放在前面
{
    Q_OBJECT
public:
    CMyCallback(QObject *parent = nullptr); // Declaration
    void OnDataChange(COPCGroup &group, COPCItemDataMap &changes);
    ~CMyCallback();

public:
    OPCItemData* data = nullptr;
    COPCItem* item = nullptr;

signals:
    void valuechanged(OPCItemData* data);

}; // CMyCallback

#endif // CMYCALLBACK_H
