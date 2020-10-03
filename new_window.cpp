#include <qt_windows.h>
#include "new_window.h"
#include "ui_new_window.h"
#define TR(str)   (QString::fromLocal8Bit(str))  //解决中文乱码


new_window::new_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::new_window)
{
    ui->setupUi(this);
    setWindowTitle(TR("用户注册demo"));

    manager = new QNetworkAccessManager(this);
    connect(manager,SIGNAL(finished(QNetworkReply *)),this,SLOT(finishedSlot(QNetworkReply *)));
}

new_window::~new_window()
{
    delete ui;
}

void new_window::on_pushButtonregister_clicked()
{
    QUrl url("http://rap2.taobao.org:38080/app/mock/261948/register/register");
    QString str1,str2,str3;

    if(!ui->lineEdituser->text().isEmpty()&&!ui->lineEditpassword->text().isEmpty()
          &&!ui->lineEditphone->text().isEmpty()&&!ui->lineEditpasswordconfirm->text().isEmpty())
    {
          if(ui->lineEditpassword->text() != ui->lineEditpasswordconfirm->text())
          {
               ui->lineEditpasswordconfirm->clear();
               ui->lineEditpasswordconfirm->setPlaceholderText(TR("两次密码输入不符，请重新输入"));
               return;
          }

          str1 = ui->lineEdituser->text();
          str2 = ui->lineEditpassword->text();
          str3 = ui->lineEditphone->text();

          QString str;
          str = QString("username=%1&password=%2&ensurePassword=%3&phone=%4").arg(str1.data(),str2.data(),str2.data(),str3.data());

          if(!ui->comboBoxsex->currentText().isEmpty())
          {
              QString str4 = QString("&sex=%1").arg(ui->comboBoxsex->currentText().data());
              str.append(str4);
          }

          if(!ui->lineEditemail->text().isEmpty())
          {
              QString str5 = QString("&email=%1").arg(ui->lineEditemail->text().data());
              str.append(str5);
          }
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
        pwcf = new passwordconfirmfailed();
        pwcf->show();
        return;
    }


}

void new_window::finishedSlot(QNetworkReply *reply)
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
                        setWindowTitle(TR("注册成功,请登录账号"));
                        Sleep(500);
                        this->close();
                    }
                    else
                    {
                        setWindowTitle(TR("注册失败"));
                        Sleep(500);
                        ui->lineEditemail->clear();
                        ui->lineEdituser->clear();
                        ui->lineEditpassword->clear();
                        ui->lineEditpasswordconfirm->clear();
                        ui->lineEditphone->clear();
                    }
                }
            }
        }
    }

  /*
      if(reply->error() == QNetworkReply::NoError)
    {


        if(statusCode == 200)//状态码为200说明注册成功
        {
            setWindowTitle(TR("注册成功,请登录账号"));
            Sleep(500);
            this->close();
        }
    }
    */

    reply->deleteLater();
}
