#include "mainwindow.h"
#include "ui_mainwindow.h"
#include  <QFile>
#include  <QTextStream>
#include <QMessageBox>
#include <QLineEdit>
#include <QPalette>
#include <QtWidgets>
#include <QColor>






MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("Solve(Display One Step");

    ui->pushButton_2->setText("Solve(Display All Steps");

    ui->Randomize->setText("Randomize");


    connect(ui->Randomize,SIGNAL(clicked(bool)),ui->Orange_3,SLOT(objectNameChanged()));





    m_counter = 0;




}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pushButton_3_clicked()
{
    QFile file("Data.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());

    QTextStream in(&file);

    ui->textBrowser->setText(in.readAll());
}



void MainWindow::on_pushButton_clicked()
{


    ui->pushButton->setAutoFillBackground(true);

    if(m_counter ==0)
        ui->pushButton->setStyleSheet("background-color: red; color: rgb(255,255,255)");
    if(m_counter== 1)
        ui->pushButton->setStyleSheet("background-color: yellow; color: black");
    if(m_counter== 2)
        ui->pushButton->setStyleSheet("background-color: blue; color: rgb(255,255,255)");
    if(m_counter== 3)
        ui->pushButton->setStyleSheet("background-color: green; color: rgb(255,255,255)");
    if(m_counter== 4)
        ui->pushButton->setStyleSheet("background-color: orange; color: rgb(255,255,255)");
    if(m_counter== 5)
        ui->pushButton->setStyleSheet("background-color: white; color: black");
    m_counter++;

    if(m_counter == 6)
    {
       m_counter = 0;
    }

}




void MainWindow::on_Green2_clicked()
{
    ui->Green2->setAutoFillBackground(true);

    if(m_counter ==0)
        ui->Green2->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 5px solid black");
    if(m_counter== 1)
        ui->Green2->setStyleSheet("background-color: yellow; color: black; border: 5px solid black");
    if(m_counter== 2)
        ui->Green2->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 5px solid black");
    if(m_counter== 3)
        ui->Green2->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 5px solid black");
    if(m_counter== 4)
        ui->Green2->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 5px solid black");
    if(m_counter== 5)
        ui->Green2->setStyleSheet("background-color: white; color: black; border: 5px solid black");
    m_counter++;

    if(m_counter == 6)
    {
       m_counter = 0;
    }
}
