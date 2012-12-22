#ifndef GAMECLIENT_H
#define GAMECLIENT_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>

class GameClient : public QObject
{
Q_OBJECT
public:
    explicit GameClient(QObject *parent = 0, QTcpSocket *socket = 0);
    QTcpSocket  *_socket;
    void endConnection();

signals:


public slots:

};

#endif // GAMECLIENT_H
