/********************************************************************************
** Form generated from reading UI file 'loginandregis.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINANDREGIS_H
#define UI_LOGINANDREGIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginandregis
{
public:
    QGroupBox *regis;
    QPushButton *butrg;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *userg;
    QLabel *label_2;
    QLineEdit *passrg;
    QLabel *label_3;
    QLineEdit *phonerg;
    QGroupBox *login;
    QPushButton *butlg;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *uselg;
    QLabel *label_5;
    QLineEdit *passlg;

    void setupUi(QWidget *loginandregis)
    {
        if (loginandregis->objectName().isEmpty())
            loginandregis->setObjectName(QString::fromUtf8("loginandregis"));
        loginandregis->resize(731, 337);
        loginandregis->setStyleSheet(QString::fromUtf8("#loginandregis {\n"
"\n"
"	background-color:rgb(0, 85, 255);\n"
"\n"
"}"));
        regis = new QGroupBox(loginandregis);
        regis->setObjectName(QString::fromUtf8("regis"));
        regis->setGeometry(QRect(20, 50, 411, 251));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        regis->setFont(font);
        regis->setStyleSheet(QString::fromUtf8("#regis {\n"
"\n"
"	background:rgb(255, 85, 0);\n"
"	\n"
"}"));
        butrg = new QPushButton(regis);
        butrg->setObjectName(QString::fromUtf8("butrg"));
        butrg->setGeometry(QRect(140, 210, 131, 31));
        butrg->setFont(font);
        butrg->setStyleSheet(QString::fromUtf8("#butrg {\n"
"	\n"
"	color: rgb(0, 0, 255);\n"
"\n"
"}\n"
""));
        widget = new QWidget(regis);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 40, 381, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        userg = new QLineEdit(widget);
        userg->setObjectName(QString::fromUtf8("userg"));

        verticalLayout->addWidget(userg);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        passrg = new QLineEdit(widget);
        passrg->setObjectName(QString::fromUtf8("passrg"));
        QFont font1;
        font1.setStyleStrategy(QFont::PreferAntialias);
        passrg->setFont(font1);
        passrg->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passrg);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        phonerg = new QLineEdit(widget);
        phonerg->setObjectName(QString::fromUtf8("phonerg"));

        verticalLayout->addWidget(phonerg);

        login = new QGroupBox(loginandregis);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(470, 60, 231, 221));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        login->setFont(font2);
        login->setStyleSheet(QString::fromUtf8("#login {\n"
"\n"
"	background:rgb(255, 85, 0);\n"
"	\n"
"	\n"
"}"));
        butlg = new QPushButton(login);
        butlg->setObjectName(QString::fromUtf8("butlg"));
        butlg->setGeometry(QRect(50, 170, 131, 31));
        butlg->setFont(font);
        layoutWidget = new QWidget(login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 211, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        uselg = new QLineEdit(layoutWidget);
        uselg->setObjectName(QString::fromUtf8("uselg"));

        verticalLayout_2->addWidget(uselg);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        passlg = new QLineEdit(layoutWidget);
        passlg->setObjectName(QString::fromUtf8("passlg"));
        passlg->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(passlg);


        retranslateUi(loginandregis);

        QMetaObject::connectSlotsByName(loginandregis);
    } // setupUi

    void retranslateUi(QWidget *loginandregis)
    {
        loginandregis->setWindowTitle(QCoreApplication::translate("loginandregis", "Form", nullptr));
        regis->setTitle(QCoreApplication::translate("loginandregis", "please registration this is your first time ", nullptr));
        butrg->setText(QCoreApplication::translate("loginandregis", "registration", nullptr));
        label->setText(QCoreApplication::translate("loginandregis", "use name", nullptr));
        label_2->setText(QCoreApplication::translate("loginandregis", "password", nullptr));
        label_3->setText(QCoreApplication::translate("loginandregis", "phone number", nullptr));
        login->setTitle(QCoreApplication::translate("loginandregis", "please login to connect chat", nullptr));
        butlg->setText(QCoreApplication::translate("loginandregis", "login", nullptr));
        label_4->setText(QCoreApplication::translate("loginandregis", "use name", nullptr));
        label_5->setText(QCoreApplication::translate("loginandregis", "password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginandregis: public Ui_loginandregis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINANDREGIS_H
