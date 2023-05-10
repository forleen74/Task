/********************************************************************************
** Form generated from reading UI file 'example.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLE_H
#define UI_EXAMPLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Example
{
public:
    QAction *action_2;
    QAction *action_3;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Example)
    {
        if (Example->objectName().isEmpty())
            Example->setObjectName(QString::fromUtf8("Example"));
        Example->resize(400, 300);
        action_2 = new QAction(Example);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(Example);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        centralWidget = new QWidget(Example);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Example->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Example);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Example->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Example);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Example->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Example);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Example->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addSeparator();
        menu->addAction(action_2);
        menu->addAction(action_3);

        retranslateUi(Example);

        QMetaObject::connectSlotsByName(Example);
    } // setupUi

    void retranslateUi(QMainWindow *Example)
    {
        Example->setWindowTitle(QApplication::translate("Example", "Example", 0, QApplication::UnicodeUTF8));
        action_2->setText(QApplication::translate("Example", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", 0, QApplication::UnicodeUTF8));
        action_3->setText(QApplication::translate("Example", "\320\241\320\270\320\275\320\270\320\271", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("Example", "\320\246\320\262\320\265\321\202", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Example: public Ui_Example {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLE_H
