#include <qt_windows.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCodec>
#define TR(str)   (QString::fromLocal8Bit(str))  //解决中文乱码


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(TR("用户登录demo"));
    manager = new QNetworkAccessManager(this);
    connect(manager,SIGNAL(finished(QNetworkReply *)),this,SLOT(finishedSlot(QNetworkReply *)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::finishedSlot(QNetworkReply *reply)
{
    QVariant statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);

    QVariant redirectionTargetUrl = reply->attribute(QNetworkRequest::RedirectionTargetAttribute);

    if (reply->error())
    {
        qDebug() << TR("ERROR") << endl;
    }
    else
    {
        //解析reply中携带的json
        QByteArray byte_array = reply->readAll();
        qDebug()<<byte_array<<endl;
        QJsonParseError json_error;
        QJsonDocument parse_document = QJsonDocument::fromJson(byte_array, &json_error);
        if (json_error.error == QJsonParseError::NoError)
        {
            if (parse_document.isObject())
            {
                QJsonObject obj = parse_document.object();
                if (obj.contains("code"))
                {
                    QJsonValue code_vaule = obj.take("code");
                    QString str = code_vaule.toString().replace("\"","");
                    int code_vaule_int = str.toInt();

                    if (code_vaule_int == 200)
                    {
                        setWindowTitle(TR("登录成功"));
                        Sleep(500);
                        this->close();

                    }
                    else
                    {
                        setWindowTitle(TR("登录失败，请检查密码是否有误"));
                        Sleep(500);
                        ui->lineEditUser->clear();
                        ui->lineEditPassword->clear();
                    }
                }
            }
        }
    }
    reply->deleteLater();
}

void MainWindow::on_pushButton_clicked()
{
    /*
    QUrl url("http://rap2.taobao.org:38080/app/mock/261948/user/login");//rap的login接口
    ui->lineEditPassword->setStyleSheet("color:black");
    ui->lineEditUser->setStyleSheet("color:black");
    if(!ui->lineEditUser->text().isEmpty()&&!ui->lineEditPassword->text().isEmpty())
    {
        QString str1 = ui->lineEditUser->text();
        QString str2 = ui->lineEditPassword->text();

        QString str = QString("username=%1&password=%2").arg(str1.data(),str2.data());
        QByteArray append(str.toUtf8());
        int length = append.length();

        QNetworkRequest request ;
        request.setUrl(QUrl(url));
        request.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");
        request.setHeader(QNetworkRequest::ContentLengthHeader,length);

        reply = manager->post(request,append);
    }

    else
    {
        if(ui->lineEditUser->text().isEmpty())
        {
            ui->lineEditUser->setPlaceholderText(TR("用户名不能为空!"));
            Sleep(500);
            return;
        }
        if(ui->lineEditPassword->text().isEmpty())
        {
            ui->lineEditPassword->setPlaceholderText(TR("密码不能为空"));
            Sleep(500);
            return;
        }
    }
    */

    QUrl url("http://121.41.229.179:8081/virtualUser/delete/1111");
    reply = manager->get(QNetworkRequest(url));

}

void MainWindow::on_pushButtonregister_clicked()
{
    new_win = new new_window();
    new_win->show();
}
