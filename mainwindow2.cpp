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
  //  m_counter = 0;
    for(int i=0;i<8;i++){
         white_arr[i]="white";
    }
    for(int i=0;i<8;i++){
         green_arr[i]="green";
    }
    for(int i=0;i<8;i++){
         red_arr[i]="red";
    }
    for(int i=0;i<8;i++){
         blue_arr[i]="blue";
    }
    for(int i=0;i<8;i++){
         orange_arr[i]="orange";
    }
    for(int i=0;i<8;i++){
         yellow_arr[i]="yellow";
    }
    //white
     white0count = 0;
     white1count = 0;
     white2count = 0;
     white3count = 0;
     white4count = 0;
     white5count = 0;
     white6count = 0;
     white7count = 0;
     white8count = 0;

    //red
     red0count = 1;
     red1count = 1;
     red2count = 1;
     red3count = 1;
     red4count = 1;
     red5count = 1;
     red6count = 1;
     red7count = 1;
     red8count = 1;

    //green

     green0count = 4;
     green1count = 4;
     green2count = 4;
     green3count = 4;
     green4count = 4;
     green5count = 4;
     green6count = 4;
     green7count = 4;
     green8count = 4;


     //blue
      blue0count = 3;
      blue1count = 3;
      blue2count = 3;
      blue3count = 3;
      blue4count = 3;
      blue5count = 3;
      blue6count = 3;
      blue7count = 3;

     //yellow
      yellow0count = 2;
      yellow1count = 2;
      yellow2count = 2;
      yellow3count = 2;
      yellow4count = 2;
      yellow5count = 2;
      yellow6count = 2;
      yellow7count = 2;

     //orange
      orange0count = 5;
      orange1count = 5;
      orange2count = 5;
      orange3count = 5;
      orange4count = 5;
      orange5count = 5;
      orange6count = 5;
      orange7count = 5;

}

MainWindow::~MainWindow()
{
    delete ui;
}



//create functions for white square buttons

void MainWindow::on_white0_clicked()
{
    ui->white0->setAutoFillBackground(true);

    if(white0count ==0){
        ui->white0->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 4px solid black");
        white_arr[0]="red";
    }
    if(white0count==1){
        ui->white0->setStyleSheet("background-color: yellow; color: black; border: 4px solid black");
        white_arr[0]="yellow";
    }
    if(white0count==2){
        ui->white0->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 4px solid black");
        white_arr[0]="blue";
    }
    if(white0count==3){
        ui->white0->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 4px solid black");
        white_arr[0]="green";
    }
    if(white0count==4){
        ui->white0->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 4px solid black");
        white_arr[0]="orange";
    }
    if(white0count==5){
        ui->white0->setStyleSheet("background-color: white; color: black; border: 4px solid black");
        white_arr[0]="white";
    }
    white0count++;

    if(white0count == 6)
    {
       white0count = 0;
    }
}

void MainWindow::on_white1_clicked()
{
    ui->white1->setAutoFillBackground(true);

    if(white1count ==0){
        ui->white1->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 4px solid black");
        white_arr[1]="red";
    }
    if(white1count==1){
        ui->white1->setStyleSheet("background-color: yellow; color: black; border: 4px solid black");
        white_arr[1]="yellow";
    }
    if(white1count==2){
        ui->white1->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 4px solid black");
        white_arr[1]="blue";
    }
    if(white1count==3){
        ui->white1->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 4px solid black");
        white_arr[1]="green";
    }
    if(white1count==4){
        ui->white1->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 4px solid black");
        white_arr[1]="orange";
    }
    if(white1count==5){
        ui->white1->setStyleSheet("background-color: white; color: black; border: 4px solid black");
        white_arr[1]="white";
    }
    white1count++;

    if(white1count == 6)
    {
       white1count = 0;
    }
}

void MainWindow::on_white3_clicked()
{

        ui->white3->setAutoFillBackground(true);

        if(white2count ==0){
            ui->white3->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
            white_arr[2]="red";
        }
        if(white2count==1){
            ui->white3->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
            white_arr[2]="yellow";
        }
        if(white2count==2){
            ui->white3->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
            white_arr[2]="blue";
        }
        if(white2count==3){
            ui->white3->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
            white_arr[2]="green";
        }
        if(white2count==4){
            ui->white3->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
            white_arr[2]="orange";
        }
        if(white2count==5){
            ui->white3->setStyleSheet("background-color: white; color: black; border: 3px solid black");
            white_arr[2]="white";
        }
        white2count++;

        if(white2count == 6)
        {
           white2count = 0;
        }

}

void MainWindow::on_white4_clicked()
{
    ui->white4->setAutoFillBackground(true);

    if(white3count ==0){
        ui->white4->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        white_arr[3]="red";
    }
    if(white3count==1){
        ui->white4->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        white_arr[3]="yellow";
    }
    if(white3count==2){
        ui->white4->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        white_arr[3]="blue";
    }
    if(white3count==3){
        ui->white4->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        white_arr[3]="green";
    }
    if(white3count==4){
        ui->white4->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        white_arr[3]="orange";
    }
    if(white3count==5){
        ui->white4->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        white_arr[3]="white";
    }
    white3count++;

    if(white3count == 6)
    {
       white3count = 0;
    }
}

void MainWindow::on_white5_clicked()
{
    ui->white5->setAutoFillBackground(true);

    if(m_counter ==0){
        ui->white5->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        white_arr[4]="red";
    }
    if(m_counter==1){
        ui->white5->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        white_arr[4]="yellow";
    }
    if(m_counter==2){
        ui->white5->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        white_arr[4]="blue";
    }
    if(m_counter==3){
        ui->white5->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        white_arr[4]="green";
    }
    if(m_counter==4){
        ui->white5->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        white_arr[4]="orange";
    }
    if(m_counter==5){
        ui->white5->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        white_arr[4]="white";
    }
    m_counter++;

    if(m_counter == 6)
    {
       m_counter = 0;
    }

}

void MainWindow::on_white6_clicked()
{
    ui->white6->setAutoFillBackground(true);

    if(white8count ==0){
        ui->white6->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        white_arr[5]="red";
    }
    if(white8count==1){
        ui->white6->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        white_arr[5]="yellow";
    }
    if(white8count==2){
        ui->white6->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        white_arr[5]="blue";
    }
    if(white8count==3){
        ui->white6->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        white_arr[5]="green";
    }
    if(white8count==4){
        ui->white6->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        white_arr[5]="orange";
    }
    if(white8count==5){
        ui->white6->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        white_arr[5]="white";
    }
    white8count++;

    if(white8count == 6)
    {
       white8count = 0;
    }

}


void MainWindow::on_white7_clicked()
{
    ui->white7->setAutoFillBackground(true);

    if(white6count ==0){
        ui->white7->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        white_arr[6]="red";
    }
    if(white6count==1){
        ui->white7->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        white_arr[6]="yellow";
    }
    if(white6count==2){
        ui->white7->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        white_arr[6]="blue";
    }
    if(white6count==3){
        ui->white7->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        white_arr[6]="green";
    }
    if(white6count==4){
        ui->white7->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        white_arr[6]="orange";
    }
    if(white6count==5){
        ui->white7->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        white_arr[6]="white";
    }
    white6count++;

    if(white6count == 6)
    {
       white6count = 0;
    }
}

void MainWindow::on_white8_clicked()
{
    ui->white8->setAutoFillBackground(true);

    if(white7count ==0){
        ui->white8->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        white_arr[7]="red";
    }
    if(white7count==1){
        ui->white8->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        white_arr[7]="yellow";
    }
    if(white7count==2){
        ui->white8->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        white_arr[7]="blue";
    }
    if(white7count==3){
        ui->white8->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        white_arr[7]="green";
    }
    if(white7count==4){
        ui->white8->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        white_arr[7]="orange";
    }
    if(white7count==5){
        ui->white8->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        white_arr[7]="white";
    }
    white7count++;

    if(white7count == 6)
    {
       white7count = 0;
    }
}


/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/


//Create functions for Green Buttons
void MainWindow::on_green0_clicked()
{
    ui->green0->setAutoFillBackground(true);

    if(green0count ==0){
        ui->green0->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        green_arr[0]="red";
    }
    if(green0count==1){
        ui->green0->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        green_arr[0]="yellow";
    }
    if(green0count==2){
        ui->green0->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        green_arr[0]="blue";
    }
    if(green0count==3){
        ui->green0->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        green_arr[0]="green";
    }
    if(green0count==4){
        ui->green0->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        green_arr[0]="orange";
    }
    if(green0count==5){
        ui->green0->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        green_arr[0]="white";
    }
    green0count++;

    if(green0count == 6)
    {
       green0count = 0;
    }
}

void MainWindow::on_green1_clicked()
{
    ui->green1->setAutoFillBackground(true);

    if(green1count ==0){
        ui->green1->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        green_arr[1]="red";
    }
    if(green1count==1){
        ui->green1->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        green_arr[1]="yellow";
    }
    if(green1count==2){
        ui->green1->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        green_arr[1]="blue";
    }
    if(green1count==3){
        ui->green1->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        green_arr[1]="green";
    }
    if(green1count==4){
        ui->green1->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        green_arr[1]="orange";
    }
    if(green1count==5){
        ui->green1->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        green_arr[1]="white";
    }
    green1count++;

    if(green1count == 6)
    {
       green1count = 0;
    }
}


void MainWindow::on_green3_clicked()
{
    ui->green3->setAutoFillBackground(true);

    if(green3count ==0){
        ui->green3->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        green_arr[2]="red";
    }
    if(green3count==1){
        ui->green3->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        green_arr[2]="yellow";
    }
    if(green3count==2){
        ui->green3->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        green_arr[2]="blue";
    }
    if(green3count==3){
        ui->green3->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        green_arr[2]="green";
    }
    if(green3count==4){
        ui->green3->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        green_arr[2]="orange";
    }
    if(green3count==5){
        ui->green3->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        green_arr[2]="white";
    }
    green3count++;

    if(green3count == 6)
    {
       green3count = 0;
    }
}

void MainWindow::on_green4_clicked()
{
    ui->green4->setAutoFillBackground(true);

    if(green4count ==0){
        ui->green4->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        green_arr[3]="red";
    }
    if(green4count==1){
        ui->green4->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        green_arr[3]="yellow";
    }
    if(green4count==2){
        ui->green4->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        green_arr[3]="blue";
    }
    if(green4count==3){
        ui->green4->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        green_arr[3]="green";
    }
    if(green4count==4){
        ui->green4->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        green_arr[3]="orange";
    }
    if(green4count==5){
        ui->green4->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        green_arr[3]="white";
    }
    green4count++;

    if(green4count == 6)
    {
       green4count = 0;
    }
}



void MainWindow::on_green5_clicked()
{
    ui->green5->setAutoFillBackground(true);

    if(green5count==0){
        ui->green5->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        green_arr[4]="red";
    }
    if(green5count==1){
        ui->green5->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        green_arr[4]="yellow";
    }
    if(green5count==2){
        ui->green5->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        green_arr[4]="blue";
    }
    if(green5count==3){
        ui->green5->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        green_arr[4]="green";
    }
    if(green5count==4){
        ui->green5->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        green_arr[4]="orange";
    }
    if(green5count==5){
        ui->green5->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        green_arr[4]="white";
    }
    green5count++;

    if(green5count == 6)
    {
       green5count = 0;
    }
}

void MainWindow::on_green6_clicked()
{
    ui->green6->setAutoFillBackground(true);

    if(green6count ==0){
        ui->green6->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        green_arr[5]="red";
    }
    if(green6count==1){
        ui->green6->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        green_arr[5]="yellow";
    }
    if(green6count==2){
        ui->green6->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        green_arr[5]="blue";
    }
    if(green6count==3){
        ui->green6->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        green_arr[5]="green";
    }
    if(green6count==4){
        ui->green6->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        green_arr[5]="orange";
    }
    if(green6count==5){
        ui->green6->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        green_arr[5]="white";
    }
    green6count++;

    if(green6count == 6)
    {
       green6count = 0;
    }
}

void MainWindow::on_green7_clicked()
{
    ui->green7->setAutoFillBackground(true);

    if(green7count ==0){
        ui->green7->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        green_arr[6]="red";
    }
    if(green7count==1){
        ui->green7->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        green_arr[6]="yellow";
    }
    if(green7count==2){
        ui->green7->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        green_arr[6]="blue";
    }
    if(green7count==3){
        ui->green7->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        green_arr[6]="green";
    }
    if(green7count==4){
        ui->green7->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        green_arr[6]="orange";
    }
    if(green7count==5){
        ui->green7->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        green_arr[6]="white";
    }
    green7count++;

    if(green7count == 6)
    {
       green7count = 0;
    }
}

void MainWindow::on_green8_clicked()
{
    ui->green8->setAutoFillBackground(true);

    if(green8count ==0){
        ui->green8->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        green_arr[7]="red";
    }
    if(green8count==1){
        ui->green8->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        green_arr[7]="yellow";
    }
    if(green8count==2){
        ui->green8->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        green_arr[7]="blue";
    }
    if(green8count==3){
        ui->green8->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        green_arr[7]="green";
    }
    if(green8count==4){
        ui->green8->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        green_arr[7]="orange";
    }
    if(green8count==5){
        ui->green8->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        green_arr[7]="white";
    }
    m_counter++;

    if(m_counter == 6)
    {
       m_counter = 0;
    }
}

/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/

// create functions for red buttons
void MainWindow::on_red0_clicked()
{
    ui->red0->setAutoFillBackground(true);

    if(red0count ==0){
        ui->red0->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        red_arr[0]="red";
    }
    if(red0count==1){
        ui->red0->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        red_arr[0]="yellow";
    }
    if(red0count==2){
        ui->red0->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        red_arr[0]="blue";
    }
    if(red0count==3){
        ui->red0->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        red_arr[0]="green";
    }
    if(red0count==4){
        ui->red0->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        red_arr[0]="orange";
    }
    if(red0count==5){
        ui->red0->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        red_arr[0]="white";
    }
    red0count++;

    if(red0count == 6)
    {
       red0count = 0;
    }
}



void MainWindow::on_red1_clicked()
{
    ui->red1->setAutoFillBackground(true);

    if(red1count ==0){
        ui->red1->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        red_arr[1]="red";
    }
    if(red1count==1){
        ui->red1->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        red_arr[1]="yellow";
    }
    if(red1count==2){
        ui->red1->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        red_arr[1]="blue";
    }
    if(red1count==3){
        ui->red1->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        red_arr[1]="green";
    }
    if(red1count==4){
        ui->red1->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        red_arr[1]="orange";
    }
    if(red1count==5){
        ui->red1->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        red_arr[1]="white";
    }
    red1count++;

    if(red1count == 6)
    {
       red1count = 0;
    }
}

void MainWindow::on_red3_clicked()
{
    ui->red1->setAutoFillBackground(true);

    if(red2count ==0){
        ui->red3->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        red_arr[2]="red";
    }
    if(red2count==1){
        ui->red3->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        red_arr[2]="yellow";
    }
    if(red2count==2){
        ui->red3->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        red_arr[2]="blue";
    }
    if(red2count==3){
        ui->red3->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        red_arr[2]="green";
    }
    if(red2count==4){
        ui->red3->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        red_arr[2]="orange";
    }
    if(red2count==5){
        ui->red3->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        red_arr[2]="white";
    }
    red2count++;

    if(red2count == 6)
    {
       red2count = 0;
    }
}

void MainWindow::on_red4_clicked()
{
    ui->red1->setAutoFillBackground(true);

    if(red3count ==0){
        ui->red4->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        red_arr[3]="red";
    }
    if(red3count==1){
        ui->red4->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        red_arr[3]="yellow";
    }
    if(red3count==2){
        ui->red4->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        red_arr[3]="blue";
    }
    if(red3count==3){
        ui->red4->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        red_arr[3]="green";
    }
    if(red3count==4){
        ui->red4->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        red_arr[3]="orange";
    }
    if(red3count==5){
        ui->red4->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        red_arr[3]="white";
    }
    red3count++;

    if(red3count == 6)
    {
       red3count = 0;
    }
}

void MainWindow::on_red5_clicked()
{
    ui->red5->setAutoFillBackground(true);

    if(red4count ==0){
        ui->red5->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        red_arr[4]="red";
    }
    if(red4count==1){
        ui->red5->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        red_arr[4]="yellow";
    }
    if(red4count==2){
        ui->red5->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        red_arr[4]="blue";
    }
    if(red4count==3){
        ui->red5->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        red_arr[4]="green";
    }
    if(red4count==4){
        ui->red5->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        red_arr[4]="orange";
    }
    if(red4count==5){
        ui->red5->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        red_arr[4]="white";
    }
    red4count++;

    if(red4count == 6)
    {
       red4count = 0;
    }
}



void MainWindow::on_red6_clicked()
{
    ui->red6->setAutoFillBackground(true);

    if(red5count ==0){
        ui->red6->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        red_arr[5]="red";
    }
    if(red5count==1){
        ui->red6->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        red_arr[5]="yellow";
    }
    if(red5count==2){
        ui->red6->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        red_arr[5]="blue";
    }
    if(red5count==3){
        ui->red6->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        red_arr[5]="green";
    }
    if(red5count==4){
        ui->red6->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        red_arr[5]="orange";
    }
    if(red5count==5){
        ui->red6->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        red_arr[5]="white";
    }
    red5count++;

    if(red5count == 6)
    {
       red5count = 0;
    }
}

void MainWindow::on_red7_clicked()
{
    ui->red7->setAutoFillBackground(true);

    if(red6count ==0){
        ui->red7->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        red_arr[6]="red";
    }
    if(red6count==1){
        ui->red7->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        red_arr[6]="yellow";
    }
    if(red6count==2){
        ui->red7->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        red_arr[6]="blue";
    }
    if(red6count==3){
        ui->red7->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        red_arr[6]="green";
    }
    if(red6count==4){
        ui->red7->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        red_arr[6]="orange";
    }
    if(red6count==5){
        ui->red7->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        red_arr[6]="white";
    }
    red6count++;

    if(red6count == 6)
    {
       red6count = 0;
    }
}

void MainWindow::on_red8_clicked()
{
    ui->red8->setAutoFillBackground(true);

    if(red7count ==0){
        ui->red8->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        red_arr[7]="red";
    }
    if(red7count==1){
        ui->red8->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        red_arr[7]="yellow";
    }
    if(red7count==2){
        ui->red8->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        red_arr[7]="blue";
    }
    if(red7count==3){
        ui->red8->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        red_arr[7]="green";
    }
    if(red7count==4){
        ui->red8->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        red_arr[7]="orange";
    }
    if(red7count==5){
        ui->red8->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        red_arr[7]="white";
    }
    red7count++;

    if(red7count == 6)
    {
       red7count = 0;
    }
}


/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/

//create functions for blue buttons
void MainWindow::on_blue0_clicked()
{
    ui->blue0->setAutoFillBackground(true);

    if(blue0count ==0){
        ui->blue0->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[0]="red";
    }
    if(blue0count==1){
        ui->blue0->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        blue_arr[0]="yellow";
    }
    if(blue0count==2){
        ui->blue0->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[0]="blue";
    }
    if(blue0count==3){
        ui->blue0->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[0]="green";
    }
    if(blue0count==4){
        ui->blue0->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[0]="orange";
    }
    if(blue0count==5){
        ui->blue0->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        blue_arr[0]="white";
    }
    blue0count++;

    if(blue0count == 6)
    {
       blue0count = 0;
    }
}

void MainWindow::on_blue1_clicked()
{
    ui->blue1->setAutoFillBackground(true);

    if(blue1count ==0){
        ui->blue1->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[1]="red";
    }
    if(blue1count==1){
        ui->blue1->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        blue_arr[1]="yellow";
    }
    if(blue1count==2){
        ui->blue1->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[1]="blue";
    }
    if(blue1count==3){
        ui->blue1->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[1]="green";
    }
    if(blue1count==4){
        ui->blue1->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[1]="orange";
    }
    if(blue1count==5){
        ui->blue1->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        blue_arr[1]="white";
    }
    blue1count++;

    if(blue1count == 6)
    {
       blue1count = 0;
    }
}



void MainWindow::on_blue2_clicked()
{
    ui->blue2->setAutoFillBackground(true);

    if(blue2count ==0){
        ui->blue2->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[2]="red";
    }
    if(blue2count==1){
        ui->blue2->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        blue_arr[2]="yellow";
    }
    if(blue2count==2){
        ui->blue2->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[2]="blue";
    }
    if(blue2count==3){
        ui->blue2->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[2]="green";
    }
    if(blue2count==4){
        ui->blue2->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[2]="orange";
    }
    if(blue2count==5){
        ui->blue2->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        blue_arr[2]="white";
    }
    blue2count++;

    if(blue2count == 6)
    {
       blue2count = 0;
    }
}

void MainWindow::on_blue3_clicked()
{
    ui->blue3->setAutoFillBackground(true);

    if(blue3count ==0){
        ui->blue3->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[3]="red";
    }
    if(blue3count==1){
        ui->blue3->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        blue_arr[3]="yellow";
    }
    if(blue3count==2){
        ui->blue3->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[3]="blue";
    }
    if(blue3count==3){
        ui->blue3->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[3]="green";
    }
    if(blue3count==4){
        ui->blue3->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[3]="orange";
    }
    if(blue3count==5){
        ui->blue3->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        blue_arr[3]="white";
    }
    blue3count++;

    if(blue3count == 6)
    {
       blue3count = 0;
    }
}

void MainWindow::on_blue4_clicked()
{
    ui->blue4->setAutoFillBackground(true);

    if(blue4count ==0){
        ui->blue4->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[4]="red";
    }
    if(blue4count==1){
        ui->blue4->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        blue_arr[4]="yellow";
    }
    if(blue4count==2){
        ui->blue4->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[4]="blue";
    }
    if(blue4count==3){
        ui->blue4->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[4]="green";
    }
    if(blue4count==4){
        ui->blue4->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[4]="orange";
    }
    if(blue4count==5){
        ui->blue4->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        blue_arr[4]="white";
    }
    blue4count++;

    if(blue4count == 6)
    {
       blue4count = 0;
    }
}

void MainWindow::on_blue5_clicked()
{
    ui->blue5->setAutoFillBackground(true);

    if(blue5count ==0){
        ui->blue5->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[5]="red";
    }
    if(blue5count==1){
        ui->blue5->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        blue_arr[5]="yellow";
    }
    if(blue5count==2){
        ui->blue5->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[5]="blue";
    }
    if(blue5count==3){
        ui->blue5->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[5]="green";
    }
    if(blue5count==4){
        ui->blue5->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[5]="orange";
    }
    if(blue5count==5){
        ui->blue5->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        blue_arr[5]="white";
    }
    blue5count++;

    if(blue5count == 6)
    {
       blue5count = 0;
    }
}

void MainWindow::on_blue6_clicked()
{
    ui->blue6->setAutoFillBackground(true);

    if(blue6count ==0){
        ui->blue6->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[6]="red";
    }
    if(blue6count==1){
        ui->blue6->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        blue_arr[6]="yellow";
    }
    if(blue6count==2){
        ui->blue6->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[6]="blue";
    }
    if(blue6count==3){
        ui->blue6->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[6]="green";
    }
    if(blue6count==4){
        ui->blue6->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[6]="orange";
    }
    if(blue6count==5){
        ui->blue6->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        blue_arr[6]="white";
    }
    blue6count++;

    if(blue6count == 6)
    {
       blue6count = 0;
    }
}

void MainWindow::on_blue7_clicked()
{
    ui->blue7->setAutoFillBackground(true);

    if(blue7count ==0){
        ui->blue7->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[7]="red";
    }
    if(blue7count==1){
        ui->blue7->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        blue_arr[7]="yellow";
    }
    if(blue7count==2){
        ui->blue7->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[7]="blue";
    }
    if(blue7count==3){
        ui->blue7->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[7]="green";
    }
    if(blue7count==4){
        ui->blue7->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        blue_arr[7]="orange";
    }
    if(blue7count==5){
        ui->blue7->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        blue_arr[7]="white";
    }
    blue7count++;

    if(blue7count == 6)
    {
       blue7count = 0;
    }
}

/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/

//create functions for orange buttons

void MainWindow::on_orange0_clicked()
{
    ui->orange0->setAutoFillBackground(true);

    if(orange0count ==0){
        ui->orange0->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[0]="red";
    }
    if(orange0count==1){
        ui->orange0->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        orange_arr[0]="yellow";
    }
    if(orange0count==2){
        ui->orange0->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[0]="blue";
    }
    if(orange0count==3){
        ui->orange0->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[0]="green";
    }
    if(orange0count==4){
        ui->orange0->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[0]="orange";
    }
    if(orange0count==5){
        ui->orange0->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        orange_arr[0]="white";
    }
    orange0count++;

    if(orange0count == 6)
    {
       orange0count = 0;
    }
}

void MainWindow::on_orange1_clicked()
{
    ui->orange1->setAutoFillBackground(true);

    if(orange1count ==0){
        ui->orange1->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[1]="red";
    }
    if(orange1count==1){
        ui->orange1->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        orange_arr[1]="yellow";
    }
    if(orange1count==2){
        ui->orange1->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[1]="blue";
    }
    if(orange1count==3){
        ui->orange1->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[1]="green";
    }
    if(orange1count==4){
        ui->orange1->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[1]="orange";
    }
    if(orange1count==5){
        ui->orange1->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        orange_arr[1]="white";
    }
    orange1count++;

    if(orange1count == 6)
    {
       orange1count = 0;
    }
}

void MainWindow::on_orange2_clicked()
{
    ui->orange2->setAutoFillBackground(true);

    if(orange2count ==0){
        ui->orange2->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[2]="red";
    }
    if(orange2count==1){
        ui->orange2->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        orange_arr[2]="yellow";
    }
    if(orange2count==2){
        ui->orange2->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[2]="blue";
    }
    if(orange2count==3){
        ui->orange2->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[2]="green";
    }
    if(orange2count==4){
        ui->orange2->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[2]="orange";
    }
    if(orange2count==5){
        ui->orange2->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        orange_arr[2]="white";
    }
    orange2count++;

    if(orange2count == 6)
    {
       orange2count = 0;
    }
}

void MainWindow::on_orange3_clicked()
{
    ui->orange3->setAutoFillBackground(true);

    if(orange3count ==0){
        ui->orange3->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[3]="red";
    }
    if(orange3count==1){
        ui->orange3->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        orange_arr[3]="yellow";
    }
    if(orange3count==2){
        ui->orange3->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[3]="blue";
    }
    if(orange3count==3){
        ui->orange3->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[3]="green";
    }
    if(orange3count==4){
        ui->orange3->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[3]="orange";
    }
    if(orange3count==5){
        ui->orange3->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        orange_arr[3]="white";
    }
    orange3count++;

    if(orange3count == 6)
    {
       orange3count = 0;
    }
}

void MainWindow::on_orange4_clicked()
{
    ui->orange4->setAutoFillBackground(true);

    if(orange4count ==0){
        ui->orange4->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[4]="red";
    }
    if(orange4count==1){
        ui->orange4->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        orange_arr[4]="yellow";
    }
    if(orange4count==2){
        ui->orange4->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[4]="blue";
    }
    if(orange4count==3){
        ui->orange4->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[4]="green";
    }
    if(orange4count==4){
        ui->orange4->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[4]="orange";
    }
    if(orange4count==5){
        ui->orange4->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        orange_arr[4]="white";
    }
    orange4count++;

    if(orange4count == 6)
    {
       orange4count = 0;
    }
}

void MainWindow::on_orange5_clicked()
{
    ui->orange5->setAutoFillBackground(true);

    if(orange5count ==0){
        ui->orange5->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[5]="red";
    }
    if(orange5count==1){
        ui->orange5->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        orange_arr[5]="yellow";
    }
    if(orange5count==2){
        ui->orange5->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[5]="blue";
    }
    if(orange5count==3){
        ui->orange5->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[5]="green";
    }
    if(orange5count==4){
        ui->orange5->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[5]="orange";
    }
    if(orange5count==5){
        ui->orange5->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        orange_arr[5]="white";
    }
    orange5count++;

    if(orange5count == 6)
    {
       orange5count = 0;
    }
}

void MainWindow::on_orange6_clicked()
{
    ui->orange6->setAutoFillBackground(true);

    if(orange6count ==0){
        ui->orange6->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[6]="red";
    }
    if(orange6count==1){
        ui->orange6->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        orange_arr[6]="yellow";
    }
    if(orange6count==2){
        ui->orange6->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[6]="blue";
    }
    if(orange6count==3){
        ui->orange6->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[6]="green";
    }
    if(orange6count==4){
        ui->orange6->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[6]="orange";
    }
    if(orange6count==5){
        ui->orange6->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        orange_arr[6]="white";
    }
    orange6count++;

    if(orange6count == 6)
    {
       orange6count = 0;
    }
}

void MainWindow::on_orange7_clicked()
{
    ui->orange7->setAutoFillBackground(true);

    if(orange7count ==0){
        ui->orange7->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[7]="red";
    }
    if(orange7count==1){
        ui->orange7->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        orange_arr[7]="yellow";
    }
    if(orange7count==2){
        ui->orange7->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[7]="blue";
    }
    if(orange7count==3){
        ui->orange7->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[7]="green";
    }
    if(orange7count==4){
        ui->orange7->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        orange_arr[7]="orange";
    }
    if(orange7count==5){
        ui->orange7->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        orange_arr[7]="white";
    }
    orange7count++;

    if(orange7count == 6)
    {
       orange7count = 0;
    }
}

/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/
/**********************************************************************************************************************************************************************/

//create functions for yellow buttons


void MainWindow::on_yellow0_clicked()
{
    ui->yellow0->setAutoFillBackground(true);

    if(yellow0count ==0){
        ui->yellow0->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[0]="red";
    }
    if(yellow0count==1){
        ui->yellow0->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        yellow_arr[0]="yellow";
    }
    if(yellow0count==2){
        ui->yellow0->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[0]="blue";
    }
    if(yellow0count==3){
        ui->yellow0->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[0]="green";
    }
    if(yellow0count==4){
        ui->yellow0->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[0]="orange";
    }
    if(yellow0count==5){
        ui->yellow0->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        yellow_arr[0]="white";
    }
    yellow0count++;

    if(yellow0count == 6)
    {
       yellow0count = 0;
    }
}


void MainWindow::on_yellow1_clicked()
{
    ui->yellow1->setAutoFillBackground(true);

    if(yellow1count ==0){
        ui->yellow1->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[1]="red";
    }
    if(yellow1count==1){
        ui->yellow1->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        yellow_arr[1]="yellow";
    }
    if(yellow1count==2){
        ui->yellow1->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[1]="blue";
    }
    if(yellow1count==3){
        ui->yellow1->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[1]="green";
    }
    if(yellow1count==4){
        ui->yellow1->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[1]="orange";
    }
    if(yellow1count==5){
        ui->yellow1->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        yellow_arr[1]="white";
    }
    yellow1count++;

    if(yellow1count == 6)
    {
       yellow1count = 0;
    }
}


void MainWindow::on_yellow2_clicked()
{
    ui->yellow2->setAutoFillBackground(true);

    if(yellow2count ==0){
        ui->yellow2->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[2]="red";
    }
    if(yellow2count==1){
        ui->yellow2->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        yellow_arr[2]="yellow";
    }
    if(yellow2count==2){
        ui->yellow2->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[2]="blue";
    }
    if(yellow2count==3){
        ui->yellow2->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[2]="green";
    }
    if(yellow2count==4){
        ui->yellow2->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[2]="orange";
    }
    if(yellow2count==5){
        ui->yellow2->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        yellow_arr[2]="white";
    }
    yellow2count++;

    if(yellow2count == 6)
    {
       yellow2count = 0;
    }
}



void MainWindow::on_yellow3_clicked()
{
    ui->yellow3->setAutoFillBackground(true);

    if(yellow3count ==0){
        ui->yellow3->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[3]="red";
    }
    if(yellow3count==1){
        ui->yellow3->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        yellow_arr[3]="yellow";
    }
    if(yellow3count==2){
        ui->yellow3->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[3]="blue";
    }
    if(yellow3count==3){
        ui->yellow3->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[3]="green";
    }
    if(yellow3count==4){
        ui->yellow3->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[3]="orange";
    }
    if(yellow3count==5){
        ui->yellow3->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        yellow_arr[3]="white";
    }
    yellow3count++;

    if(yellow3count == 6)
    {
       yellow3count = 0;
    }
}


void MainWindow::on_yellow4_clicked()
{
    ui->yellow4->setAutoFillBackground(true);

    if(yellow4count ==0){
        ui->yellow4->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[4]="red";
    }
    if(yellow4count==1){
        ui->yellow4->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        yellow_arr[4]="yellow";
    }
    if(yellow4count==2){
        ui->yellow4->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[4]="blue";
    }
    if(yellow4count==3){
        ui->yellow4->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[4]="green";
    }
    if(yellow4count==4){
        ui->yellow4->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[4]="orange";
    }
    if(yellow4count==5){
        ui->yellow4->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        yellow_arr[4]="white";
    }
    yellow4count++;

    if(yellow4count == 6)
    {
       yellow4count = 0;
    }
}


void MainWindow::on_yellow5_clicked()
{
    ui->yellow5->setAutoFillBackground(true);

    if(yellow5count ==0){
        ui->yellow5->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[5]="red";
    }
    if(yellow5count==1){
        ui->yellow5->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        yellow_arr[5]="yellow";
    }
    if(yellow5count==2){
        ui->yellow5->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[5]="blue";
    }
    if(yellow5count==3){
        ui->yellow5->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[5]="green";
    }
    if(yellow5count==4){
        ui->yellow5->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[5]="orange";
    }
    if(yellow5count==5){
        ui->yellow5->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        yellow_arr[5]="white";
    }
    yellow5count++;

    if(yellow5count == 6)
    {
       yellow5count = 0;
    }
}

void MainWindow::on_yellow6_clicked()
{
    ui->yellow6->setAutoFillBackground(true);

    if(yellow6count ==0){
        ui->yellow6->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[6]="red";
    }
    if(yellow6count==1){
        ui->yellow6->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        yellow_arr[6]="yellow";
    }
    if(yellow6count==2){
        ui->yellow6->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[6]="blue";
    }
    if(yellow6count==3){
        ui->yellow6->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[6]="green";
    }
    if(yellow6count==4){
        ui->yellow6->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[6]="orange";
    }
    if(yellow6count==5){
        ui->yellow6->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        yellow_arr[6]="white";
    }
    yellow6count++;

    if(yellow6count == 6)
    {
       yellow6count = 0;
    }
}

void MainWindow::on_yellow7_clicked()
{
    ui->yellow7->setAutoFillBackground(true);

    if(yellow7count ==0){
        ui->yellow7->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[7]="red";
    }
    if(yellow7count==1){
        ui->yellow7->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        yellow_arr[7]="yellow";
    }
    if(yellow7count==2){
        ui->yellow7->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[7]="blue";
    }
    if(yellow7count==3){
        ui->yellow7->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[7]="green";
    }
    if(yellow7count==4){
        ui->yellow7->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        yellow_arr[7]="orange";
    }
    if(yellow7count==5){
        ui->yellow7->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        yellow_arr[7]="white";
    }
    yellow7count++;

    if(yellow7count == 6)
    {
       yellow7count = 0;
    }
}




void MainWindow::on_SolveAllSteps_clicked()
{
    QFile file("output.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());

    QTextStream in(&file);

    ui->textBrowser->setText(in.readAll());
}

void MainWindow::on_CommitCube_clicked()
{
    //this method is not finished, it is a generic start on how to output the array colors to a text file

    QString filename = "output.txt";
    QFile file(filename);
    if(file.open(QIODevice::ReadWrite|QIODevice::Truncate))
    {
        QTextStream stream(&file);

        for(int i=0;i<8;i++){
            stream << white_arr[i]<<",";
        }
      //  stream <<endl;
        for(int i=0;i<8;i++){
            stream << green_arr[i]<<",";
        }
      // stream <<endl;
        for(int i=0;i<8;i++){
            stream << red_arr[i]<<",";
        }
      //  stream <<endl;
        for(int i=0;i<8;i++){
            stream << blue_arr[i]<<",";
        }
      //  stream <<endl;
        for(int i=0;i<8;i++){
            stream << orange_arr[i]<<",";
        }
      //  stream <<endl;
        for(int i=0;i<8;i++){
            stream << yellow_arr[i]<<",";
        }

    }

}

void MainWindow::on_SolveOneStep_clicked()
{

}



void MainWindow::on_HelpButton_clicked()
{
    QFile file("help.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());

    QTextStream in(&file);

    ui->textBrowser->setText(in.readAll());
}
