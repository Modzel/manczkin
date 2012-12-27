#include "deck.h"

Deck::Deck()
{
    this->_isPressed = false;
    this->_imageDeck = new QImage();
    this->_imageDeck->load("drzwi.png");
    this->_rectDeck = _imageDeck->rect();
    this->_imageCard = new QImage();
    this->_imageCard->load("karta1.jpg");
    this->_rectCard = _imageCard->rect();

    setFlag(ItemIsMovable);
}

void Deck::mousePressEvent(QGraphicsSceneMouseEvent *event){
    this->_isPressed = true;
    update();
    QGraphicsItem::mousePressEvent(event);
}

void Deck::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){
    //this->_isPressed = false;
    //update();
}

void Deck::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){

    painter->drawImage(0, 0, *_imageDeck);
    if(this->_isPressed){
        painter->drawImage(-200, -300, *_imageCard);
        this->_isPressed = false;
    }
}

QRectF Deck::boundingRect() const{

}
