/********************************************************************************
** Form generated from reading UI file 'enviarcorreo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIARCORREO_H
#define UI_ENVIARCORREO_H

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

class Ui_EnviarCorreo
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EnviarCorreo)
    {
        if (EnviarCorreo->objectName().isEmpty())
            EnviarCorreo->setObjectName(QStringLiteral("EnviarCorreo"));
        EnviarCorreo->resize(800, 600);
        menubar = new QMenuBar(EnviarCorreo);
        menubar->setObjectName(QStringLiteral("menubar"));
        EnviarCorreo->setMenuBar(menubar);
        centralwidget = new QWidget(EnviarCorreo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        EnviarCorreo->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(EnviarCorreo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        EnviarCorreo->setStatusBar(statusbar);

        retranslateUi(EnviarCorreo);

        QMetaObject::connectSlotsByName(EnviarCorreo);
    } // setupUi

    void retranslateUi(QMainWindow *EnviarCorreo)
    {
        EnviarCorreo->setWindowTitle(QApplication::translate("EnviarCorreo", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EnviarCorreo: public Ui_EnviarCorreo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIARCORREO_H
