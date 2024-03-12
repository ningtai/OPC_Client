#include <QDebug>
#include <QThread>
#include <QVector>
#include "mythread.h"
#include "widget.h"

void Generate1::receivehostname(QString hostName)
{
	qDebug() << "子线程的线程地址" << QThread::currentThread();
	subhostname = hostName;
	//根据输入的IP创建host并获取host中已经存在的服务器
	COPCClient::init();
	host = COPCClient::makeHost(COPCHost::S2WS(subhostname.toStdString()));
	std::vector<CLSID> localClassIdList;
	std::vector<std::wstring> localServerList;
	host->getListOfDAServers(CATID_OPCDAServer20, localServerList, localClassIdList);
	//把服务器名称传给主线程
	emit host1finished(localServerList);
}

void Generate1::receiveservername(QString servername)
{
	qDebug() << "子线程的线程地址" << QThread::currentThread();
	serverName = servername.toStdWString();
	opcServer = host->connectDAServer(serverName);
	qDebug() << "connect the server of host1";
	ServerStatus status = { {0} };
	const char* serverStateMsg[] = { "unknown", "running", "failed", "co-config", "suspended", "test", "comm-fault" };
	do
	{
		Sleep(100);
		opcServer->getStatus(status);
		printf("server state is %s, vendor is '%ws'\r\n", serverStateMsg[status.dwServerState],
			status.vendorInfo.c_str());
	} while (status.dwServerState != OPC_STATUS_RUNNING);
	opcServer->getItemNames(opcItemNames);
	emit opcItemNamesfinished(opcItemNames);
	unsigned long refreshRate;
	demoGroup = opcServer->makeGroup(L"DemoGroup", true, 1000, refreshRate, 0.0);
	qDebug() << "create the demoGroup of the server";
	timer = new QTimer;
	timer->setInterval(1000);
	connect(timer, &QTimer::timeout, this, &Generate1::updatevalue1);
}

void Generate1::receiveitemnames(std::vector<std::wstring> itemNames)
{
	timer->stop();
	qDebug() << "子线程的线程地址" << QThread::currentThread();
	subitemNames = itemNames;
	timer->start();
}

void Generate1::updatevalue1()
{
	itemDataList.clear();
	for (int i = 0; i < subitemNames.size(); i++)
	{
		std::wstring itemName = subitemNames[i];
		COPCItem* readWritableItem = demoGroup->addItem(itemName, true);
		OPCItemData data;
		readWritableItem->readSync(data, OPC_DS_DEVICE);
		QString qstr = QString::fromStdWString(serverName) + ": " + QString::fromStdWString(readWritableItem->getName().c_str()) + ", async read quality: " +
			QString::number(data.wQuality, 10) + ", value: " + QString::number(data.vDataValue.fltVal);
		qDebug() << qstr;
		itemDataList.append(qstr);
	}
	emit itemDataListfinished(itemDataList);
}

void Generate2::receivehostname(QString hostname)
{
	qDebug() << "子线程的线程地址" << QThread::currentThread();
	subhostname = hostname;
	//根据输入的IP创建host并获取host中已经存在的服务器
	COPCClient::init();
	host = COPCClient::makeHost(COPCHost::S2WS(subhostname.toStdString()));
	std::vector<CLSID> localClassIdList;
	std::vector<std::wstring> localServerList;
	host->getListOfDAServers(CATID_OPCDAServer20, localServerList, localClassIdList);
	//把服务器名称传给主线程
	emit host2finished(localServerList);
}

void Generate2::receiveservername(QString servername)
{
	qDebug() << "子线程的线程地址" << QThread::currentThread();
	serverName = servername.toStdWString();
	opcServer = host->connectDAServer(serverName);
	qDebug() << "connect the server of host2";
	ServerStatus status = { {0} };
	const char* serverStateMsg[] = { "unknown", "running", "failed", "co-config", "suspended", "test", "comm-fault" };
	do
	{
		Sleep(100);
		opcServer->getStatus(status);
		printf("server state is %s, vendor is '%ws'\r\n", serverStateMsg[status.dwServerState],
			status.vendorInfo.c_str());
	} while (status.dwServerState != OPC_STATUS_RUNNING);
	opcServer->getItemNames(opcItemNames);
	emit opcItemNamesfinished(opcItemNames);
	unsigned long refreshRate;
	demoGroup = opcServer->makeGroup(L"DemoGroup", true, 1000, refreshRate, 0.0);
	qDebug() << "create the demoGroup of the server";
	timer = new QTimer;
	timer->setInterval(1000);
	connect(timer, &QTimer::timeout, this, &Generate2::updatevalue2);

}

void Generate2::receiveitemnames(std::vector<std::wstring> itemNames)
{
	timer->stop();
	qDebug() << "子线程的线程地址" << QThread::currentThread();
	subitemNames = itemNames;
	timer->start();
}

void Generate2::updatevalue2()
{
	itemDataList.clear();
	for (int i = 0; i < subitemNames.size(); i++)
	{
		std::wstring itemName = subitemNames[i];
		COPCItem* readWritableItem = demoGroup->addItem(itemName, true);
		OPCItemData data;
		readWritableItem->readSync(data, OPC_DS_DEVICE);
		QString qstr = QString::fromStdWString(serverName) + ": " + QString::fromStdWString(readWritableItem->getName().c_str()) + ", async read quality: " +
			QString::number(data.wQuality, 10) + ", value: " + QString::number(data.vDataValue.fltVal);
		qDebug() << qstr;
		itemDataList.append(qstr);
	}
	emit itemDataListfinished(itemDataList);
}



