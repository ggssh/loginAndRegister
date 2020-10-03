/********************************************************************************
** Form generated from reading UI file 'loginsuccess.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSUCCESS_H
#define UI_LOGINSUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginSuccess
{
public:
    QLabel *label;

    void setupUi(QWidget *LoginSuccess)
    {
        if (LoginSuccess->objectName().isEmpty())
            LoginSuccess->setObjectName(QString::fromUtf8("LoginSuccess"));
        LoginSuccess->resize(346, 167);
        label = new QLabel(LoginSuccess);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 60, 152, 52));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(LoginSuccess);

        QMetaObject::connectSlotsByName(LoginSuccess);
    } // setupUi

    void retranslateUi(QWidget *LoginSuccess)
    {
        LoginSuccess->setWindowTitle(QCoreApplication::translate("LoginSuccess", "Form", nullptr));
        label->setText(QCoreApplication::translate("LoginSuccess", "\347\231\273\351\231\206\346\210\220\345\212\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginSuccess: public Ui_LoginSuccess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSUCCESS_H
