#ifndef LOGINSUCCESS_H
#define LOGINSUCCESS_H

#include <QWidget>

namespace Ui {
class LoginSuccess;
}

class LoginSuccess : public QWidget
{
    Q_OBJECT

public:
    explicit LoginSuccess(QWidget *parent = nullptr);
    ~LoginSuccess();

private:
    Ui::LoginSuccess *ui;
};

#endif // LOGINSUCCESS_H
