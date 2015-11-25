#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    int m_counter;//added
    ~MainWindow();

signals:
    void counterReached();

private slots:
    void on_pushButton_3_clicked();



    //void on_Orange_5_objectNameChanged(const QString &objectName);

    void on_pushButton_clicked();

    void on_Green2_clicked();

private:
    Ui::MainWindow *ui;
};



#endif // MAINWINDOW_H
