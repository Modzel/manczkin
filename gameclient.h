#ifndef GAMECLIENT_H
#define GAMECLIENT_H

#include <QTcpSocket>
#include <QDebug>

class GameClient : public QObject
{
Q_OBJECT
public:
    QTcpSocket *_socket;
    int _socketDescriptor;
    explicit GameClient(int id, QObject *parent = 0);

signals:
    void error(QTcpSocket::SocketError socketError);
public slots:

    void readyRead();
    void disconnected();

private:

};

#endif // GAMECLIENT_H
