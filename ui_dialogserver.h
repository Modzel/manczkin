/********************************************************************************
** Form generated from reading UI file 'dialogserver.ui'
**
** Created: Sun Dec 23 17:50:59 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSERVER_H
#define UI_DIALOGSERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DialogServer
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *DialogServer)
    {
        if (DialogServer->objectName().isEmpty())
            DialogServer->setObjectName(QString::fromUtf8("DialogServer"));
        DialogServer->resize(400, 300);
        textBrowser = new QTextBrowser(DialogServer);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(80, 40, 256, 192));

        retranslateUi(DialogServer);

        QMetaObject::connectSlotsByName(DialogServer);
    } // setupUi

    void retranslateUi(QDialog *DialogServer)
    {
        DialogServer->setWindowTitle(QApplication::translate("DialogServer", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogServer: public Ui_DialogServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSERVER_H
