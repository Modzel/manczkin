#ifndef GAMESERVER_H
#define GAMESERVER_H

#include <QTcpServer>
#include <QDebug>
#include "thread.h"

class GameServer : public QTcpServer
{
Q_OBJECT
public:
    explicit GameServer(QObject *parent = 0);
    void StartServer();
    void incomingConnection(int socketDescriptor);
signals:

public slots:

};

#endif // GAMESERVER_H
