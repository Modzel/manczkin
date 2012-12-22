#ifndef GAMESERVER_H
#define GAMESERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include "gameclient.h"
#include <QList>

class GameServer : public QObject
{
    Q_OBJECT
public:
    explicit GameServer(QObject *parent = 0);


public slots:
    void newConnection();

private:
    QTcpServer *_server;
    QTcpSocket *_socket;
    QList<GameClient *>  connectedPlayers;

};

#endif // GAMESERVER_H
