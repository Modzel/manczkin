#ifndef DECK_H
#define DECK_H
#include <QImage>
#include <QPainter>
#include <QGraphicsItem>
#include <QDebug>

class Deck : public QGraphicsItem
{
public:
    Deck();

    QImage  *_imageDeck;
    QImage  *_imageCard;
    QRect   _rectDeck;
    QRect   _rectCard;
    QRectF boundingRect() const;
    bool _isPressed;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

};

#endif // DECK_H
