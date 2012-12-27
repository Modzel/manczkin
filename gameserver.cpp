#include "gameserver.h"

GameServer::GameServer(QObject *parent) :
    QTcpServer(parent)
{


}

void GameServer::StartServer(){

    if(!this->listen(QHostAddress::Any, 1234)){
        qDebug() << ":((((((((((";

    }
    qDebug() << "Serwerek dziala pizdeczki";
}

void GameServer::incomingConnection(int socketDescriptor){
    qDebug() << socketDescriptor << "Connected";

    Thread *thread = new Thread(socketDescriptor, this);
    this->connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    thread->start();
}
