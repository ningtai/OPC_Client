#pragma once

#include <QObject>
#include <QVector>
#include <QTimer>
#include "OPCGroup.h"
#include "OPCHost.h"
#include "OPCServer.h"
#include "cmycallback.h"

class Generate1 :public QObject
{
	Q_OBJECT
public:
	void receivehostname(QString hostname);
	void receiveservername(QString servername);
	void receiveitemnames(std::vector<std::wstring> itemNames);

private:
	COPCHost* host = nullptr;
	COPCGroup* demoGroup = nullptr;
	COPCServer* opcServer = nullptr;
	QTimer* timer = nullptr;
	QString subhostname;
	std::wstring serverName;
	std::vector<std::wstring> opcItemNames;
	QStringList itemDataList;
	std::vector<std::wstring> subitemNames;

signals:
	void host1finished(std::vector<std::wstring> localServerList);
	void opcItemNamesfinished(std::vector<std::wstring> opcItemNames);
	void itemDataListfinished(QStringList itemDataList);

public slots:
	void updatevalue1();
};

class Generate2 :public QObject
{
	Q_OBJECT
public:
	void receivehostname(QString hostname);
	void receiveservername(QString servername);
	void receiveitemnames(std::vector<std::wstring> itemNames);

private:
	COPCHost* host = nullptr;
	QString subhostname;
	std::wstring serverName;
	COPCServer* opcServer = nullptr;
	std::vector<std::wstring> opcItemNames;
	COPCGroup* demoGroup = nullptr;
	QTimer* timer = nullptr;
	std::vector<std::wstring> subitemNames;
	QStringList itemDataList;

signals:
	void host2finished(std::vector<std::wstring> localServerList);
	void opcItemNamesfinished(std::vector<std::wstring> opcItemNames);
	void itemDataListfinished(QStringList itemDataList);

public slots:
	void updatevalue2();
};
