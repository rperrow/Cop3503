#ifndef CUBE_H
#define CUBE_H

#include <QWidget>

namespace Ui {
class Cube;
}

class Cube : public QWidget
{
    Q_OBJECT

public:
    explicit Cube(QWidget *parent = 0);
    ~Cube();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Cube *ui;
    int m_counter;
};

#endif // CUBE_H
