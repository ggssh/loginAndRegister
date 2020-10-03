/********************************************************************************
** Form generated from reading UI file 'new_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_WINDOW_H
#define UI_NEW_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_new_window
{
public:
    QPushButton *pushButtonregister;
    QLineEdit *lineEdituser;
    QLineEdit *lineEditpassword;
    QLineEdit *lineEditpasswordconfirm;
    QLineEdit *lineEditemail;
    QLineEdit *lineEditphone;
    QLabel *labeluser;
    QLabel *labelpassword;
    QLabel *labelpasswordconfirm;
    QLabel *labelemail;
    QLabel *labelsex;
    QComboBox *comboBoxsex;
    QLabel *labelphone;

    void setupUi(QWidget *new_window)
    {
        if (new_window->objectName().isEmpty())
            new_window->setObjectName(QString::fromUtf8("new_window"));
        new_window->resize(419, 200);
        pushButtonregister = new QPushButton(new_window);
        pushButtonregister->setObjectName(QString::fromUtf8("pushButtonregister"));
        pushButtonregister->setGeometry(QRect(340, 160, 71, 28));
        lineEdituser = new QLineEdit(new_window);
        lineEdituser->setObjectName(QString::fromUtf8("lineEdituser"));
        lineEdituser->setGeometry(QRect(90, 10, 231, 21));
        lineEditpassword = new QLineEdit(new_window);
        lineEditpassword->setObjectName(QString::fromUtf8("lineEditpassword"));
        lineEditpassword->setGeometry(QRect(90, 70, 231, 21));
        lineEditpassword->setMaxLength(16);
        lineEditpassword->setEchoMode(QLineEdit::Password);
        lineEditpasswordconfirm = new QLineEdit(new_window);
        lineEditpasswordconfirm->setObjectName(QString::fromUtf8("lineEditpasswordconfirm"));
        lineEditpasswordconfirm->setGeometry(QRect(90, 100, 231, 21));
        lineEditpasswordconfirm->setMaxLength(16);
        lineEditpasswordconfirm->setEchoMode(QLineEdit::Password);
        lineEditemail = new QLineEdit(new_window);
        lineEditemail->setObjectName(QString::fromUtf8("lineEditemail"));
        lineEditemail->setGeometry(QRect(90, 130, 231, 21));
        lineEditphone = new QLineEdit(new_window);
        lineEditphone->setObjectName(QString::fromUtf8("lineEditphone"));
        lineEditphone->setGeometry(QRect(90, 160, 231, 21));
        lineEditphone->setMaxLength(11);
        labeluser = new QLabel(new_window);
        labeluser->setObjectName(QString::fromUtf8("labeluser"));
        labeluser->setGeometry(QRect(20, 10, 45, 16));
        labelpassword = new QLabel(new_window);
        labelpassword->setObjectName(QString::fromUtf8("labelpassword"));
        labelpassword->setGeometry(QRect(20, 70, 41, 16));
        labelpasswordconfirm = new QLabel(new_window);
        labelpasswordconfirm->setObjectName(QString::fromUtf8("labelpasswordconfirm"));
        labelpasswordconfirm->setGeometry(QRect(20, 100, 72, 15));
        labelemail = new QLabel(new_window);
        labelemail->setObjectName(QString::fromUtf8("labelemail"));
        labelemail->setGeometry(QRect(20, 130, 72, 15));
        labelsex = new QLabel(new_window);
        labelsex->setObjectName(QString::fromUtf8("labelsex"));
        labelsex->setGeometry(QRect(20, 40, 72, 15));
        comboBoxsex = new QComboBox(new_window);
        comboBoxsex->addItem(QString());
        comboBoxsex->addItem(QString());
        comboBoxsex->addItem(QString());
        comboBoxsex->setObjectName(QString::fromUtf8("comboBoxsex"));
        comboBoxsex->setGeometry(QRect(90, 40, 87, 22));
        labelphone = new QLabel(new_window);
        labelphone->setObjectName(QString::fromUtf8("labelphone"));
        labelphone->setGeometry(QRect(20, 160, 72, 15));

        retranslateUi(new_window);

        QMetaObject::connectSlotsByName(new_window);
    } // setupUi

    void retranslateUi(QWidget *new_window)
    {
        new_window->setWindowTitle(QCoreApplication::translate("new_window", "Form", nullptr));
        pushButtonregister->setText(QCoreApplication::translate("new_window", "\346\263\250\345\206\214", nullptr));
        lineEdituser->setPlaceholderText(QCoreApplication::translate("new_window", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\347\224\250\346\210\267\345\220\215\357\274\210\345\277\205\345\241\253\357\274\211", nullptr));
        lineEditpassword->setPlaceholderText(QCoreApplication::translate("new_window", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201\357\274\210\345\277\205\345\241\253\357\274\211", nullptr));
        lineEditpasswordconfirm->setPlaceholderText(QCoreApplication::translate("new_window", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201\357\274\210\345\277\205\345\241\253\357\274\211", nullptr));
        lineEditemail->setPlaceholderText(QCoreApplication::translate("new_window", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\347\224\265\345\255\220\351\202\256\347\256\261\357\274\210\351\200\211\345\241\253\357\274\211", nullptr));
        lineEditphone->setPlaceholderText(QCoreApplication::translate("new_window", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\347\224\265\350\257\235\345\217\267\347\240\201\357\274\210\345\277\205\345\241\253\357\274\211", nullptr));
        labeluser->setText(QCoreApplication::translate("new_window", "\347\224\250\346\210\267\345\220\215(\345\277\205\345\241\253\357\274\211", nullptr));
        labelpassword->setText(QCoreApplication::translate("new_window", "\345\257\206\347\240\201", nullptr));
        labelpasswordconfirm->setText(QCoreApplication::translate("new_window", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        labelemail->setText(QCoreApplication::translate("new_window", "email", nullptr));
        labelsex->setText(QCoreApplication::translate("new_window", "\346\200\247\345\210\253", nullptr));
        comboBoxsex->setItemText(0, QCoreApplication::translate("new_window", "\347\224\267", nullptr));
        comboBoxsex->setItemText(1, QCoreApplication::translate("new_window", "\345\245\263", nullptr));
        comboBoxsex->setItemText(2, QCoreApplication::translate("new_window", "\347\247\230\345\257\206", nullptr));

        labelphone->setText(QCoreApplication::translate("new_window", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_window: public Ui_new_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_WINDOW_H
