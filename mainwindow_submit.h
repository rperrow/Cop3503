#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <string>
//Please not that in this file and the other files that there are many includes that are specific to the Qt GUI IDE
//They only work because we downloaded the IDE and its libraries.  Therefore, compiling it on any other machine may return errors
//but the Release folder and the exe it contains will run.

//Please not also that mainwindow_submit.ui is automatically generated. It is included because it corresponds to the design of our
//graphic interface, which we designed ourself.  The layouts are done somewhat visually intially, and customizations are done through code.

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    std::vector<QString> steps;
    int buttoncount;
    int step;

    //for storing the color string of each tile on face, we need an array
    QString white_arr[8];
    QString green_arr[8];
    QString red_arr[8];
    QString blue_arr[8];
    QString orange_arr[8];
    QString yellow_arr[8];

    //for cycling through colors, we need a counter for each button/tile.
    //white
    int white0count;
    int white1count;
    int white2count;
    int white3count;
    int white4count;
    int white5count;
    int white6count;
    int white7count;
    int white8count;

    //red
    int red0count;
    int red1count;
    int red2count;
    int red3count;
    int red4count;
    int red5count;
    int red6count;
    int red7count;
    int red8count;

    //green

    int green0count;
    int green1count;
    int green2count;
    int green3count;
    int green4count;
    int green5count;
    int green6count;
    int green7count;
    int green8count;

    //blue
    int blue0count;
    int blue1count;
    int blue2count;
    int blue3count;
    int blue4count;
    int blue5count;
    int blue6count;
    int blue7count;

    //yellow
    int yellow0count;
    int yellow1count;
    int yellow2count;
    int yellow3count;
    int yellow4count;
    int yellow5count;
    int yellow6count;
    int yellow7count;

    //orange
    int orange0count;
    int orange1count;
    int orange2count;
    int orange3count;
    int orange4count;
    int orange5count;
    int orange6count;
    int orange7count;


    int m_counter;
    ~MainWindow();

private slots:

// all the functions below correspond to pressing a button widget, and the code that follows from that press
    void on_white0_clicked();

    void on_white1_clicked();

    void on_white3_clicked();

    void on_white4_clicked();

    void on_white5_clicked();

    void on_green0_clicked();

    void on_green1_clicked();

    void on_green4_clicked();

    void on_green3_clicked();

    void on_white6_clicked();

    void on_white7_clicked();

    void on_white8_clicked();

    void on_green5_clicked();

    void on_green6_clicked();

    void on_green7_clicked();

    void on_green8_clicked();

    void on_red0_clicked();

    void on_red1_clicked();

    void on_red3_clicked();

    void on_red4_clicked();

    void on_red5_clicked();

    void on_red6_clicked();

    void on_red7_clicked();

    void on_red8_clicked();

    void on_blue0_clicked();

    void on_blue1_clicked();

    void on_blue2_clicked();

    void on_blue3_clicked();

    void on_blue4_clicked();

    void on_blue5_clicked();

    void on_blue6_clicked();

    void on_blue7_clicked();

    void on_orange0_clicked();

    void on_orange1_clicked();

    void on_orange2_clicked();

    void on_orange3_clicked();

    void on_orange4_clicked();

    void on_orange5_clicked();

    void on_orange6_clicked();

    void on_orange7_clicked();

    void on_yellow2_clicked();

    void on_yellow1_clicked();

    void on_yellow0_clicked();

    void on_yellow4_clicked();

    void on_yellow3_clicked();

    void on_yellow7_clicked();

    void on_yellow5_clicked();

    void on_yellow6_clicked();

    void on_SolveAllSteps_clicked();

    void on_CommitCube_clicked();

    void on_HelpButton_clicked();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

