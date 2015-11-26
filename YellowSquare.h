#ifndef YELLOWSQUARE_H
#define YELLOWSQUARE_H

#include <QWidget>

namespace Ui {
class YellowSquare;
}

class YellowSquare : public QWidget
{
    Q_OBJECT

public:
    explicit YellowSquare(QWidget *parent = 0);
    ~YellowSquare();

private slots:
    void on_pushButton_clicked();

private:
    Ui::YellowSquare *ui;
    int m_counter;
};

#endif // YELLOWSQUARE_H
