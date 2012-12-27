#ifndef SERVER_H
#define SERVER_H

#include <QWidget>

class Server : public QWidget
{
Q_OBJECT
public:
    explicit Server(QObject *parent = 0);
    ~Server();

signals:

public slots:

private:
    Ui::Server *ui;
};

#endif // SERVER_H
