#ifndef NEW_WINDOW_H
#define NEW_WINDOW_H

#include <QWidget>
#include <QtNetwork>
#include <passwordconfirmfailed.h>
namespace Ui {
class new_window;
}

class new_window : public QWidget
{
    Q_OBJECT

public:
    explicit new_window(QWidget *parent = nullptr);
    ~new_window();

private slots:
    void on_pushButtonregister_clicked();
    void finishedSlot(QNetworkReply *);

private:
    Ui::new_window *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    passwordconfirmfailed *pwcf;
};

#endif // NEW_WINDOW_H
