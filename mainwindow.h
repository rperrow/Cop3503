#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    std::string white_arr[8];
    std::string Blue_arr[8];
    std::string orange[8];
    std::string yellow[8];
    std::string green[8];
    std::string red[8];


    int m_counter;
    ~MainWindow();

private slots:


    void on_white0_clicked();

    void on_white1_clicked();

    void on_white3_clicked();

    void on_white4_clicked();

    void on_white5_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
