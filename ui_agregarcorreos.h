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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agregarcorreos
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label_4;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_6;
    QTextEdit *textEdit_3;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *agregarcorreos)
    {
        if (agregarcorreos->objectName().isEmpty())
            agregarcorreos->setObjectName(QStringLiteral("agregarcorreos"));
        agregarcorreos->resize(800, 600);
        centralwidget = new QWidget(agregarcorreos);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 30, 471, 51));
        QFont font;
        font.setFamily(QStringLiteral("Saab"));
        font.setPointSize(26);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 120, 221, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 170, 221, 31));
        label_3->setFont(font1);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(150, 120, 241, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        textEdit->setFont(font2);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(150, 170, 241, 31));
        textEdit_2->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 230, 221, 31));
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(150, 270, 241, 91));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(30, 10, 101, 21));
        radioButton->setFont(font2);
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(30, 50, 101, 31));
        radioButton_2->setFont(font2);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 390, 221, 31));
        label_6->setFont(font1);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setAlignment(Qt::AlignCenter);
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(150, 390, 241, 31));
        textEdit_3->setFont(font2);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 440, 161, 51));
        pushButton->setFont(font2);
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
        label_5->setText(QApplication::translate("agregarcorreos", "Agregar Correo", Q_NULLPTR));
        label_2->setText(QApplication::translate("agregarcorreos", "De:", Q_NULLPTR));
        label_3->setText(QApplication::translate("agregarcorreos", "A:", Q_NULLPTR));
        label_4->setText(QApplication::translate("agregarcorreos", "Tipo de Encomienda:", Q_NULLPTR));
        groupBox->setTitle(QString());
        radioButton->setText(QApplication::translate("agregarcorreos", "Carta", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("agregarcorreos", "Paquete", Q_NULLPTR));
        label_6->setText(QApplication::translate("agregarcorreos", "Peso:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("agregarcorreos", "Enviar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class agregarcorreos: public Ui_agregarcorreos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARCORREOS_H
