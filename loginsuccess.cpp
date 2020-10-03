#include "loginsuccess.h"
#include "ui_loginsuccess.h"
#define TR(str)   (QString::fromLocal8Bit(str))  //解决中文乱码


LoginSuccess::LoginSuccess(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginSuccess)
{
    ui->setupUi(this);
    setWindowTitle(TR("登陆成功"));
}

LoginSuccess::~LoginSuccess()
{
    delete ui;
}
