/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *makemes;
    QPushButton *butsend;
    QTextBrowser *spacechat;
    QLabel *label;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(532, 320);
        Form->setStyleSheet(QString::fromUtf8("#Form {\n"
"\n"
"background-color: rgb(85, 170, 255);\n"
"\n"
"}\n"
""));
        layoutWidget = new QWidget(Form);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 262, 511, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        makemes = new QLineEdit(layoutWidget);
        makemes->setObjectName(QString::fromUtf8("makemes"));

        horizontalLayout->addWidget(makemes);

        butsend = new QPushButton(layoutWidget);
        butsend->setObjectName(QString::fromUtf8("butsend"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        butsend->setFont(font);

        horizontalLayout->addWidget(butsend);

        spacechat = new QTextBrowser(Form);
        spacechat->setObjectName(QString::fromUtf8("spacechat"));
        spacechat->setGeometry(QRect(10, 60, 511, 192));
        spacechat->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 371, 21));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        butsend->setText(QCoreApplication::translate("Form", "SEND", nullptr));
        label->setText(QCoreApplication::translate("Form", "welcom to this chat app by team 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
