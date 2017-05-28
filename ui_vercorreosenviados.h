/********************************************************************************
** Form generated from reading UI file 'vercorreosenviados.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERCORREOSENVIADOS_H
#define UI_VERCORREOSENVIADOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerCorreosEnviados
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QTextEdit *textEdit_3;
    QLabel *label_7;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VerCorreosEnviados)
    {
        if (VerCorreosEnviados->objectName().isEmpty())
            VerCorreosEnviados->setObjectName(QStringLiteral("VerCorreosEnviados"));
        VerCorreosEnviados->resize(943, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/vercorreos.png"), QSize(), QIcon::Normal, QIcon::Off);
        VerCorreosEnviados->setWindowIcon(icon);
        centralwidget = new QWidget(VerCorreosEnviados);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 50, 471, 51));
        QFont font;
        font.setFamily(QStringLiteral("Saab"));
        font.setPointSize(26);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 140, 221, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(260, 140, 281, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        textEdit->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 220, 211, 31));
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(260, 220, 281, 31));
        textEdit_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 280, 211, 31));
        label_3->setFont(font1);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 310, 211, 31));
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 460, 211, 31));
        label_6->setFont(font1);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setAlignment(Qt::AlignCenter);
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(260, 430, 281, 131));
        textEdit_3->setFont(font2);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(660, 120, 211, 221));
        QFont font3;
        font3.setPointSize(10);
        label_7->setFont(font3);
        label_7->setTextFormat(Qt::PlainText);
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/emailconmovimiento.gif")));
        label_7->setScaledContents(true);
        VerCorreosEnviados->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(VerCorreosEnviados);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        VerCorreosEnviados->setStatusBar(statusbar);

        retranslateUi(VerCorreosEnviados);

        QMetaObject::connectSlotsByName(VerCorreosEnviados);
    } // setupUi

    void retranslateUi(QMainWindow *VerCorreosEnviados)
    {
        VerCorreosEnviados->setWindowTitle(QApplication::translate("VerCorreosEnviados", "Ver Correos", Q_NULLPTR));
        label_5->setText(QApplication::translate("VerCorreosEnviados", "Ver Correos Enviados", Q_NULLPTR));
        label->setText(QApplication::translate("VerCorreosEnviados", "Nombre del Remitente:", Q_NULLPTR));
        label_2->setText(QApplication::translate("VerCorreosEnviados", "Nombre del Destinatario:", Q_NULLPTR));
        label_3->setText(QApplication::translate("VerCorreosEnviados", "Tipo de Encomienda:", Q_NULLPTR));
        label_4->setText(QApplication::translate("VerCorreosEnviados", "Aqu\303\255 va el tipo", Q_NULLPTR));
        label_6->setText(QApplication::translate("VerCorreosEnviados", "Direcci\303\263n:", Q_NULLPTR));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VerCorreosEnviados: public Ui_VerCorreosEnviados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERCORREOSENVIADOS_H
