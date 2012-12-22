#include "gameserver.h"

GameServer::GameServer(QObject *parent)  :
        QObject(parent)
{
    _server = new QTcpServer(this);

    connect(_server, SIGNAL(newConnection()), this, SLOT(newConnection()));

    if(!_server->listen(QHostAddress::Any, 1234)){
        qDebug() << "Serwer nie ruszyl";
    }

    else{
        qDebug() << "Serwer ruszyl  :)";
    }

}

void GameServer::newConnection(){
    QTcpSocket *socket = _server->nextPendingConnection();
    GameClient *gameClient = new GameClient(this, socket);
    connectedPlayers.push_front(gameClient);
    socket->write("Witaj na serwerze manczkina. Chuj Ci w cyce ;*\r\n");
    socket->flush();

    socket->waitForBytesWritten(3000);
}
