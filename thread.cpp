#include "thread.h"

Thread::Thread(int id, QObject *parent) :
    QThread(parent)
{
    this->_socketDescriptor = id;
}

void Thread::run(){

    qDebug()<< this->_socketDescriptor  << "Watek dziala bicz";
    this->_socket = new QTcpSocket();
    if(!this->_socket->setSocketDescriptor(this->_socketDescriptor)){
        emit error(this->_socket->error());
        return;
    }

   this->connect(this->_socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
   this->connect(this->_socket, SIGNAL(disconnected()), this, SLOT(disconnected()));

   qDebug()<< this->_socketDescriptor << "Jestem na serwerku.. hmhmhmh.. huhuhuhuu";

    exec();
}

void Thread::readyRead(){
    QByteArray Data = this->_socket->readAll();

    qDebug() << this->_socketDescriptor << "8==========>";

    this->_socket->write(Data);
}

void Thread::disconnected(){
    this->_socket->deleteLater();
    exit(0);
}
