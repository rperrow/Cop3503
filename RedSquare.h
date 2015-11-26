#ifndef REDCUBE_H
#define REDCUBE_H

#include <QWidget>

namespace Ui {
class RedCube;
}

class RedCube : public QWidget
{
    Q_OBJECT

public:
    explicit RedCube(QWidget *parent = 0);
    ~RedCube();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RedCube *ui;
    int m_counter;
};

#endif // REDCUBE_H
