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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Usuarios
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QListWidget *listWidgetPersonas;
    QWidget *tab_2;
    QLabel *label_6;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *lblId;
    QLabel *lblnombre;
    QLabel *lblDireccion;
    QLabel *lblSexo;
    QLabel *lblCorreosE;
    QLabel *lblCorreosR;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_15;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
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
        tabWidget->setGeometry(QRect(10, 10, 781, 624));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 50, 661, 261));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setFamily(QStringLiteral("Saab"));
        font.setPointSize(26);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_5);

        listWidgetPersonas = new QListWidget(widget);
        listWidgetPersonas->setObjectName(QStringLiteral("listWidgetPersonas"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        listWidgetPersonas->setFont(font1);

        verticalLayout_3->addWidget(listWidgetPersonas);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 40, 471, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font2.setPointSize(12);
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 120, 221, 31));
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(220, 120, 161, 31));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 120, 151, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(12);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QStringLiteral("vercorreos.png"));
        widget1 = new QWidget(tab_2);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(340, 250, 411, 191));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblId = new QLabel(widget1);
        lblId->setObjectName(QStringLiteral("lblId"));
        lblId->setFont(font2);

        verticalLayout->addWidget(lblId);

        lblnombre = new QLabel(widget1);
        lblnombre->setObjectName(QStringLiteral("lblnombre"));
        lblnombre->setFont(font2);

        verticalLayout->addWidget(lblnombre);

        lblDireccion = new QLabel(widget1);
        lblDireccion->setObjectName(QStringLiteral("lblDireccion"));
        lblDireccion->setFont(font2);

        verticalLayout->addWidget(lblDireccion);

        lblSexo = new QLabel(widget1);
        lblSexo->setObjectName(QStringLiteral("lblSexo"));
        lblSexo->setFont(font2);

        verticalLayout->addWidget(lblSexo);

        lblCorreosE = new QLabel(widget1);
        lblCorreosE->setObjectName(QStringLiteral("lblCorreosE"));
        lblCorreosE->setFont(font2);

        verticalLayout->addWidget(lblCorreosE);

        lblCorreosR = new QLabel(widget1);
        lblCorreosR->setObjectName(QStringLiteral("lblCorreosR"));
        lblCorreosR->setFont(font2);

        verticalLayout->addWidget(lblCorreosR);

        widget2 = new QWidget(tab_2);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(160, 250, 181, 191));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(widget2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font2);

        verticalLayout_2->addWidget(label_15);

        label_3 = new QLabel(widget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        verticalLayout_2->addWidget(label_4);

        label_7 = new QLabel(widget2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(widget2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(widget2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);

        verticalLayout_2->addWidget(label_9);

        tabWidget->addTab(tab_2, QString());
        Usuarios->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Usuarios);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Usuarios->setStatusBar(statusbar);

        retranslateUi(Usuarios);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Usuarios);
    } // setupUi

    void retranslateUi(QMainWindow *Usuarios)
    {
        Usuarios->setWindowTitle(QApplication::translate("Usuarios", "Usuarios", Q_NULLPTR));
        label_5->setText(QApplication::translate("Usuarios", "Ver Usuarios Registrados", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Usuarios", "Ver Usuarios", Q_NULLPTR));
        label_6->setText(QApplication::translate("Usuarios", "Ver Registros de Usuarios", Q_NULLPTR));
        label_2->setText(QApplication::translate("Usuarios", "Ingrese su ID:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Usuarios", "Buscar", Q_NULLPTR));
        lblId->setText(QApplication::translate("Usuarios", "TextLabel", Q_NULLPTR));
        lblnombre->setText(QApplication::translate("Usuarios", "TextLabel", Q_NULLPTR));
        lblDireccion->setText(QApplication::translate("Usuarios", "TextLabel", Q_NULLPTR));
        lblSexo->setText(QApplication::translate("Usuarios", "TextLabel", Q_NULLPTR));
        lblCorreosE->setText(QApplication::translate("Usuarios", "TextLabel", Q_NULLPTR));
        lblCorreosR->setText(QApplication::translate("Usuarios", "TextLabel", Q_NULLPTR));
        label_15->setText(QApplication::translate("Usuarios", "ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("Usuarios", "NOMBRE", Q_NULLPTR));
        label_4->setText(QApplication::translate("Usuarios", "DIRECCION", Q_NULLPTR));
        label_7->setText(QApplication::translate("Usuarios", "SEXO", Q_NULLPTR));
        label_8->setText(QApplication::translate("Usuarios", "CORREOS ENVIADOS", Q_NULLPTR));
        label_9->setText(QApplication::translate("Usuarios", "CORREOS RECIBIDOS", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Usuarios", "Ver Registros de Usuarios", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Usuarios: public Ui_Usuarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USUARIOS_H
