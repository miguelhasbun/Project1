/********************************************************************************
** Form generated from reading UI file 'usuarios.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USUARIOS_H
#define UI_USUARIOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Usuarios
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_5;
    QWidget *tab_2;
    QLabel *label_6;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Usuarios)
    {
        if (Usuarios->objectName().isEmpty())
            Usuarios->setObjectName(QStringLiteral("Usuarios"));
        Usuarios->resize(800, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/user_group_users_accounts_contacts-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        Usuarios->setWindowIcon(icon);
        centralwidget = new QWidget(Usuarios);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 801, 601));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 170, 611, 161));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 50, 471, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Saab"));
        font1.setPointSize(26);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 40, 471, 51));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 120, 221, 31));
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(220, 120, 161, 31));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 120, 151, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QStringLiteral("vercorreos.png"));
        tabWidget->addTab(tab_2, QString());
        Usuarios->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Usuarios);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Usuarios->setStatusBar(statusbar);

        retranslateUi(Usuarios);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Usuarios);
    } // setupUi

    void retranslateUi(QMainWindow *Usuarios)
    {
        Usuarios->setWindowTitle(QApplication::translate("Usuarios", "Usuarios", Q_NULLPTR));
        label->setText(QApplication::translate("Usuarios", "Aqu\303\255 se mostrar\303\241n la lista de usuarios que ya est\303\241n registrados", Q_NULLPTR));
        label_5->setText(QApplication::translate("Usuarios", "Ver Usuarios Registrados", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Usuarios", "Ver Usuarios", Q_NULLPTR));
        label_6->setText(QApplication::translate("Usuarios", "Ver Registros de Usuarios", Q_NULLPTR));
        label_2->setText(QApplication::translate("Usuarios", "Ingrese su ID:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Usuarios", "Buscar", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Usuarios", "Ver Registros de Usuarios", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Usuarios: public Ui_Usuarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USUARIOS_H
