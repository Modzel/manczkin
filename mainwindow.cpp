#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    dialogServer = new DialogServer(this);
    dialogServer->show();


}

void MainWindow::on_join_clicked()
{
    dialogGame = new DialogGame(this);
    dialogGame->show();
}

void MainWindow::on_quit_clicked()
{
    exit(0);
}

void MainWindow::on_actionHostServer_triggered(bool checked)
{
    if(checked){
    dialogServer = new DialogServer(this);
    dialogServer->show();
    }
}
