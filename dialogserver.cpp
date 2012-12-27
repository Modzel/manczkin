#include "dialogserver.h"
#include "ui_dialogserver.h"

DialogServer::DialogServer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogServer)
{
    ui->setupUi(this);
    gameServer = new GameServer(this);
    gameServer->StartServer();
}

DialogServer::~DialogServer()
{
    delete ui;
}

void DialogServer::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}


