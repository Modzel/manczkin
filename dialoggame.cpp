#include "dialoggame.h"
#include "player.h"
#include "ui_dialoggame.h"

DialogGame::DialogGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGame)
{
    ui->setupUi(this);


    this->_scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(this->_scene);

    _deck = new Deck();

    this->_scene->addItem(this->_deck);
    this->_player = new Player(this);


}

DialogGame::~DialogGame()
{
    delete ui;
}

void DialogGame::changeEvent(QEvent *e)
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


