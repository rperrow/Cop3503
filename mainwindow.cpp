#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    m_counter = 0;

}

MainWindow::~MainWindow()
{
    delete ui;
}



//create functions for white square buttons
void MainWindow::on_white0_clicked()
{
    ui->white0->setAutoFillBackground(true);

    if(m_counter ==0)
        ui->white0->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 4px solid black");
    if(m_counter== 1)
        ui->white0->setStyleSheet("background-color: yellow; color: black; border: 4px solid black");
    if(m_counter== 2)
        ui->white0->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 4px solid black");
    if(m_counter== 3)
        ui->white0->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 4px solid black");
    if(m_counter== 4)
        ui->white0->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 4px solid black");
    if(m_counter== 5)
        ui->white0->setStyleSheet("background-color: white; color: black; border: 4px solid black");
    m_counter++;

    if(m_counter == 6)
    {
       m_counter = 0;
    }
}

void MainWindow::on_white1_clicked()
{
    ui->white1->setAutoFillBackground(true);

    if(m_counter ==0)
        ui->white1->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 4px solid black");
    if(m_counter== 1)
        ui->white1->setStyleSheet("background-color: yellow; color: black; border: 4px solid black");
    if(m_counter== 2)
        ui->white1->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 4px solid black");
    if(m_counter== 3)
        ui->white1->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 4px solid black");
    if(m_counter== 4)
        ui->white1->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 4px solid black");
    if(m_counter== 5)
        ui->white1->setStyleSheet("background-color: white; color: black; border: 4px solid black");
    m_counter++;

    if(m_counter == 6)
    {
       m_counter = 0;
    }
}

void MainWindow::on_white3_clicked()
{

        ui->white3->setAutoFillBackground(true);

        if(m_counter ==0)
            ui->white3->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        if(m_counter== 1)
            ui->white3->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        if(m_counter== 2)
            ui->white3->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        if(m_counter== 3)
            ui->white3->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        if(m_counter== 4)
            ui->white3->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        if(m_counter== 5)
            ui->white3->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        m_counter++;

        if(m_counter == 6)
        {
           m_counter = 0;
        }

}

void MainWindow::on_white4_clicked()
{
    ui->white4->setAutoFillBackground(true);

    if(m_counter ==0)
        ui->white4->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(m_counter== 1)
        ui->white4->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(m_counter== 2)
        ui->white4->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(m_counter== 3)
        ui->white4->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(m_counter== 4)
        ui->white4->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(m_counter== 5)
        ui->white4->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    m_counter++;

    if(m_counter == 6)
    {
       m_counter = 0;
    }
}

void MainWindow::on_white5_clicked()
{
    ui->white5->setAutoFillBackground(true);

    if(m_counter ==0)
        ui->white5->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(m_counter== 1)
        ui->white5->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(m_counter== 2)
        ui->white5->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(m_counter== 3)
        ui->white5->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(m_counter== 4)
        ui->white5->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(m_counter== 5)
        ui->white5->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    m_counter++;

    if(m_counter == 6)
    {
       m_counter = 0;
    }
    
}
