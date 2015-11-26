#include "orangesquare.h"
#include "ui_orangesquare.h"

OrangeSquare::OrangeSquare(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OrangeSquare)
{
    ui->setupUi(this);
    m_counter = 0;
}

OrangeSquare::~OrangeSquare()
{
    delete ui;
}


void OrangeSquare::on_pushButton_clicked()
{
    ui->pushButton->setAutoFillBackground(true);

    if(m_counter ==0)
        ui->pushButton->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 5px solid black");
    if(m_counter== 1)
        ui->pushButton->setStyleSheet("background-color: yellow; color: black; border: 5px solid black");
    if(m_counter== 2)
        ui->pushButton->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 5px solid black");
    if(m_counter== 3)
        ui->pushButton->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 5px solid black");
    if(m_counter== 4)
        ui->pushButton->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 5px solid black");
    if(m_counter== 5)
        ui->pushButton->setStyleSheet("background-color: white; color: black; border: 5px solid black");

    m_counter++;

    if(m_counter == 6)
    {
       m_counter = 0;
    }
}
