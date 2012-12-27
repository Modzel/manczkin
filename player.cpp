#include "player.h"

Player::Player(QObject *parent) :
    QObject(parent)
{
    this->_socket = new QTcpSocket();
    
    _socket->connectToHost("127.0.0.1", 1234);
}
