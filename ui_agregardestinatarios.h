/********************************************************************************
** Form generated from reading UI file 'agregardestinatarios.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARDESTINATARIOS_H
#define UI_AGREGARDESTINATARIOS_H

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

class Ui_agregardestinatarios
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_4;
    QTextEdit *textEdit_3;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_7;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *agregardestinatarios)
    {
        if (agregardestinatarios->objectName().isEmpty())
            agregardestinatarios->setObjectName(QStringLiteral("agregardestinatarios"));
        agregardestinatarios->resize(800, 657);
        QIcon icon;
        icon.addFile(QStringLiteral(":/people.png"), QSize(), QIcon::Normal, QIcon::Off);
        agregardestinatarios->setWindowIcon(icon);
        centralwidget = new QWidget(agregardestinatarios);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 80, 381, 51));
        QFont font;
        font.setFamily(QStringLiteral("Saab"));
        font.setPointSize(26);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 150, 31, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        label->setFont(font1);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(150, 150, 251, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        textEdit->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 220, 91, 41));
        label_2->setFont(font1);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(150, 220, 251, 41));
        textEdit_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 410, 91, 41));
        label_3->setFont(font1);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(140, 430, 261, 91));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(80, 20, 111, 21));
        radioButton->setFont(font2);
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(80, 50, 111, 21));
        radioButton_2->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 290, 101, 41));
        label_4->setFont(font1);
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(150, 300, 251, 111));
        textEdit_3->setFont(font2);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 550, 291, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(14);
        pushButton->setFont(font3);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(450, 170, 281, 271));
        QFont font4;
        font4.setPointSize(10);
        label_6->setFont(font4);
        label_6->setTextFormat(Qt::PlainText);
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/siluetamujer.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(420, 170, 281, 271));
        label_7->setFont(font4);
        label_7->setTextFormat(Qt::PlainText);
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/siluetahombre.png")));
        label_7->setScaledContents(true);
        agregardestinatarios->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(agregardestinatarios);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        agregardestinatarios->setStatusBar(statusbar);

        retranslateUi(agregardestinatarios);

        QMetaObject::connectSlotsByName(agregardestinatarios);
    } // setupUi

    void retranslateUi(QMainWindow *agregardestinatarios)
    {
        agregardestinatarios->setWindowTitle(QApplication::translate("agregardestinatarios", "Agregar Persona", Q_NULLPTR));
        label_5->setText(QApplication::translate("agregardestinatarios", "Agregar Persona", Q_NULLPTR));
        label->setText(QApplication::translate("agregardestinatarios", "Id:", Q_NULLPTR));
        label_2->setText(QApplication::translate("agregardestinatarios", "Nombre:", Q_NULLPTR));
        label_3->setText(QApplication::translate("agregardestinatarios", "Sexo:", Q_NULLPTR));
        groupBox->setTitle(QString());
        radioButton->setText(QApplication::translate("agregardestinatarios", "Masculino", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("agregardestinatarios", "Femenino", Q_NULLPTR));
        label_4->setText(QApplication::translate("agregardestinatarios", "Direcci\303\263n:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("agregardestinatarios", "Agregar", Q_NULLPTR));
        label_6->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class agregardestinatarios: public Ui_agregardestinatarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARDESTINATARIOS_H
