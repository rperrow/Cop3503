#ifndef BLUESQUARE_H
#define BLUESQUARE_H

#include <QWidget>

namespace Ui {
class BlueSquare;
}

class BlueSquare : public QWidget
{
    Q_OBJECT

public:
    explicit BlueSquare(QWidget *parent = 0);
    std::string getColor();
    void setColor(std::string);


    ~BlueSquare();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BlueSquare *ui;
    int m_counter;
    std::string color;
};

#endif // BLUESQUARE_H
