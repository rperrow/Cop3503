#ifndef ORANGESQUARE_H
#define ORANGESQUARE_H

#include <QWidget>

namespace Ui {
class OrangeSquare;
}

class OrangeSquare : public QWidget
{
    Q_OBJECT

public:
    explicit OrangeSquare(QWidget *parent = 0);
    ~OrangeSquare();

private slots:
    void on_pushButton_clicked();

private:
    Ui::OrangeSquare *ui;
    int m_counter;
};

#endif // ORANGESQUARE_H
