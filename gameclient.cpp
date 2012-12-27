#include "gameclient.h"

GameClient::GameClient(int id, QObject *parent) :
        QObject(parent)
{
    this->_socketDescriptor = id;
}



void GameClient::readyRead(){
    QByteArray Data = this->_socket->readAll();

    qDebug() << this->_socketDescriptor << "8==========>";

    this->_socket->write(Data);
}

void GameClient::disconnected(){
    this->_socket->deleteLater();
    exit(0);
}
