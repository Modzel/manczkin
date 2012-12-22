#include "gameclient.h"

GameClient::GameClient(QObject *parent, QTcpSocket *socket) :
    QObject(parent)
{
    this->_socket = socket;
    this->_socket->write("JESTEM PODLACZONY");
    this->_socket->waitForBytesWritten();
}

void GameClient::endConnection(){
    this->_socket->close();
}
