#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include "new_window.h"
#include "loginsuccess.h"
#include "failedtologin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void finishedSlot(QNetworkReply *);
    void on_pushButton_clicked();

    void on_pushButtonregister_clicked();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    new_window *new_win;
    LoginSuccess *logs;
    failedToLogin *fl;
    test *t;
};
#endif // MAINWINDOW_H
