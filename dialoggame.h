#ifndef DIALOGGAME_H
#define DIALOGGAME_H

#include <QDialog>
#include "deck.h"
#include "player.h"

namespace Ui {
    class DialogGame;
}

class DialogGame : public QDialog {
    Q_OBJECT
public:
    DialogGame(QWidget *parent = 0);
    ~DialogGame();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::DialogGame *ui;
    QGraphicsScene *_scene;
    Deck *_deck;
    Player *_player;

private slots:
};

#endif // DIALOGGAME_H
