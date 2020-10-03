/********************************************************************************
** Form generated from reading UI file 'failedtologin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAILEDTOLOGIN_H
#define UI_FAILEDTOLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_failedToLogin
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *failedToLogin)
    {
        if (failedToLogin->objectName().isEmpty())
            failedToLogin->setObjectName(QString::fromUtf8("failedToLogin"));
        failedToLogin->resize(396, 165);
        label_2 = new QLabel(failedToLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 60, 140, 32));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label = new QLabel(failedToLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 308, 32));
        label->setFont(font);
        pushButton = new QPushButton(failedToLogin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 120, 93, 28));

        retranslateUi(failedToLogin);

        QMetaObject::connectSlotsByName(failedToLogin);
    } // setupUi

    void retranslateUi(QDialog *failedToLogin)
    {
        failedToLogin->setWindowTitle(QCoreApplication::translate("failedToLogin", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("failedToLogin", "\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("failedToLogin", "\350\257\245\347\224\250\346\210\267\344\270\215\345\255\230\345\234\250\346\210\226\345\257\206\347\240\201\351\224\231\350\257\257", nullptr));
        pushButton->setText(QCoreApplication::translate("failedToLogin", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class failedToLogin: public Ui_failedToLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAILEDTOLOGIN_H
