#ifndef FAILEDTOLOGIN_H
#define FAILEDTOLOGIN_H

#include <QDialog>

namespace Ui {
class failedToLogin;
}

class failedToLogin : public QDialog
{
    Q_OBJECT

public:
    explicit failedToLogin(QWidget *parent = nullptr);
    ~failedToLogin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::failedToLogin *ui;
};

#endif // FAILEDTOLOGIN_H
