#include "failedtologin.h"
#include "ui_failedtologin.h"

failedToLogin::failedToLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::failedToLogin)
{
    ui->setupUi(this);
}

failedToLogin::~failedToLogin()
{
    delete ui;
}

void failedToLogin::on_pushButton_clicked()
{
    this->close();
}
