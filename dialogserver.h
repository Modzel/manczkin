#ifndef DIALOGSERVER_H
#define DIALOGSERVER_H

#include <QDialog>
#include "gameserver.h"

namespace Ui {
    class DialogServer;
}

class DialogServer : public QDialog {
    Q_OBJECT
public:
    DialogServer(QWidget *parent = 0);
    ~DialogServer();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::DialogServer *ui;
    GameServer *gameServer;

private slots:
    void on_textBrowser_textChanged();
};

#endif // DIALOGSERVER_H
