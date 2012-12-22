#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gameserver.h"
#include "gameclient.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_host_clicked()
{
    GameServer gameServer;
}

void MainWindow::on_join_clicked()
{

}

void MainWindow::on_quit_clicked()
{
    exit(0);
}
