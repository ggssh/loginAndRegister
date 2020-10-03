/********************************************************************************
** Form generated from reading UI file 'passwordconfirmfailed.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDCONFIRMFAILED_H
#define UI_PASSWORDCONFIRMFAILED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_passwordconfirmfailed
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *passwordconfirmfailed)
    {
        if (passwordconfirmfailed->objectName().isEmpty())
            passwordconfirmfailed->setObjectName(QString::fromUtf8("passwordconfirmfailed"));
        passwordconfirmfailed->resize(361, 132);
        pushButton = new QPushButton(passwordconfirmfailed);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 100, 93, 28));
        label = new QLabel(passwordconfirmfailed);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 30, 231, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(passwordconfirmfailed);

        QMetaObject::connectSlotsByName(passwordconfirmfailed);
    } // setupUi

    void retranslateUi(QDialog *passwordconfirmfailed)
    {
        passwordconfirmfailed->setWindowTitle(QCoreApplication::translate("passwordconfirmfailed", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("passwordconfirmfailed", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("passwordconfirmfailed", "\346\211\200\345\241\253\344\277\241\346\201\257\344\270\215\345\256\214\346\225\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class passwordconfirmfailed: public Ui_passwordconfirmfailed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDCONFIRMFAILED_H
