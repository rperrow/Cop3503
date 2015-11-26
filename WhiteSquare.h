#ifndef WHITECUBE_H
#define WHITECUBE_H

#include <QWidget>

namespace Ui {
class WhiteCube;
}

class WhiteCube : public QWidget
{
    Q_OBJECT

public:
    explicit WhiteCube(QWidget *parent = 0);
    ~WhiteCube();

private slots:
    void on_pushButton_clicked();

private:
    Ui::WhiteCube *ui;
    int m_counter;
};

#endif // WHITECUBE_H
