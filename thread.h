#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>

class Thread : public QThread
{
Q_OBJECT
public:
    QTcpSocket *_socket;
    int _socketDescriptor;
    explicit Thread(int id, QObject *parent = 0);
    void run();

signals:
    void error(QTcpSocket::SocketError socketError);
public slots:

    void readyRead();
    void disconnected();

private:

};

#endif // THREAD_H
