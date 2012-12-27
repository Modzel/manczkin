/********************************************************************************
** Form generated from reading UI file 'dialoggame.ui'
**
** Created: Thu Dec 27 10:09:56 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGGAME_H
#define UI_DIALOGGAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DialogGame
{
public:
    QGraphicsView *graphicsView;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *DialogGame)
    {
        if (DialogGame->objectName().isEmpty())
            DialogGame->setObjectName(QString::fromUtf8("DialogGame"));
        DialogGame->resize(1024, 600);
        graphicsView = new QGraphicsView(DialogGame);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 700, 600));
        graphicsView->setMinimumSize(QSize(600, 600));
        textBrowser = new QTextBrowser(DialogGame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(720, 0, 256, 192));

        retranslateUi(DialogGame);

        QMetaObject::connectSlotsByName(DialogGame);
    } // setupUi

    void retranslateUi(QDialog *DialogGame)
    {
        DialogGame->setWindowTitle(QApplication::translate("DialogGame", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogGame: public Ui_DialogGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGAME_H
