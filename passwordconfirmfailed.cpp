#include "passwordconfirmfailed.h"
#include "ui_passwordconfirmfailed.h"

passwordconfirmfailed::passwordconfirmfailed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::passwordconfirmfailed)
{
    ui->setupUi(this);
}

passwordconfirmfailed::~passwordconfirmfailed()
{
    delete ui;
}

void passwordconfirmfailed::on_pushButton_clicked()
{
    this->close();
}
