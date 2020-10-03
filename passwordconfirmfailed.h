#ifndef PASSWORDCONFIRMFAILED_H
#define PASSWORDCONFIRMFAILED_H

#include <QDialog>

namespace Ui {
class passwordconfirmfailed;
}

class passwordconfirmfailed : public QDialog
{
    Q_OBJECT

public:
    explicit passwordconfirmfailed(QWidget *parent = nullptr);
    ~passwordconfirmfailed();

private slots:
    void on_pushButton_clicked();

private:
    Ui::passwordconfirmfailed *ui;
};

#endif // PASSWORDCONFIRMFAILED_H
