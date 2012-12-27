#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QString>
#include <QTcpSocket>
#include <QDebug>

class Player : public QObject
{
Q_OBJECT
public:
    explicit Player(QObject *parent = 0);
    bool _turn;
    int _level;
    QString _name;
    QTcpSocket *_socket;


signals:

public slots:

};

#endif // PLAYER_H
