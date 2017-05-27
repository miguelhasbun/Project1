/********************************************************************************
** Form generated from reading UI file 'agregarcorreos.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARCORREOS_H
#define UI_AGREGARCORREOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agregarcorreos
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *agregarcorreos)
    {
        if (agregarcorreos->objectName().isEmpty())
            agregarcorreos->setObjectName(QStringLiteral("agregarcorreos"));
        agregarcorreos->resize(800, 600);
        menubar = new QMenuBar(agregarcorreos);
        menubar->setObjectName(QStringLiteral("menubar"));
        agregarcorreos->setMenuBar(menubar);
        centralwidget = new QWidget(agregarcorreos);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        agregarcorreos->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(agregarcorreos);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        agregarcorreos->setStatusBar(statusbar);

        retranslateUi(agregarcorreos);

        QMetaObject::connectSlotsByName(agregarcorreos);
    } // setupUi

    void retranslateUi(QMainWindow *agregarcorreos)
    {
        agregarcorreos->setWindowTitle(QApplication::translate("agregarcorreos", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class agregarcorreos: public Ui_agregarcorreos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARCORREOS_H
