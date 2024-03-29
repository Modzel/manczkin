#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialogserver.h"
#include "dialoggame.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    DialogServer *dialogServer;
    DialogGame *dialogGame;

private slots:
    void on_actionHostServer_triggered(bool checked);
    void on_quit_clicked();
    void on_join_clicked();
    void on_host_clicked();
};

#endif // MAINWINDOW_H
