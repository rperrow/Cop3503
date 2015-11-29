#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    m_counter = 0;

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

    if(white0count ==0)
        ui->white0->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 4px solid black");
    if(white0count== 1)
        ui->white0->setStyleSheet("background-color: yellow; color: black; border: 4px solid black");
    if(white0count== 2)
        ui->white0->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 4px solid black");
    if(white0count== 3)
        ui->white0->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 4px solid black");
    if(white0count== 4)
        ui->white0->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 4px solid black");
    if(white0count== 5)
        ui->white0->setStyleSheet("background-color: white; color: black; border: 4px solid black");
    white0count++;

    if(white0count == 6)
    {
       white0count = 0;
    }
}

void MainWindow::on_white1_clicked()
{
    ui->white1->setAutoFillBackground(true);

    if(white1count ==0)
        ui->white1->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 4px solid black");
    if(white1count== 1)
        ui->white1->setStyleSheet("background-color: yellow; color: black; border: 4px solid black");
    if(white1count== 2)
        ui->white1->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 4px solid black");
    if(white1count== 3)
        ui->white1->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 4px solid black");
    if(white1count== 4)
        ui->white1->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 4px solid black");
    if(white1count== 5)
        ui->white1->setStyleSheet("background-color: white; color: black; border: 4px solid black");
    white1count++;

    if(white1count == 6)
    {
       white1count = 0;
    }
}

void MainWindow::on_white3_clicked()
{

        ui->white3->setAutoFillBackground(true);

        if(white2count ==0)
            ui->white3->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
        if(white2count== 1)
            ui->white3->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
        if(white2count== 2)
            ui->white3->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
        if(white2count== 3)
            ui->white3->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
        if(white2count== 4)
            ui->white3->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
        if(white2count== 5)
            ui->white3->setStyleSheet("background-color: white; color: black; border: 3px solid black");
        white2count++;

        if(white2count == 6)
        {
           white2count = 0;
        }

}

void MainWindow::on_white4_clicked()
{
    ui->white4->setAutoFillBackground(true);

    if(white3count ==0)
        ui->white4->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(white3count== 1)
        ui->white4->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(white3count== 2)
        ui->white4->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(white3count== 3)
        ui->white4->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(white3count== 4)
        ui->white4->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(white3count== 5)
        ui->white4->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    white3count++;

    if(white3count == 6)
    {
       white3count = 0;
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

void MainWindow::on_white6_clicked()
{
    ui->white6->setAutoFillBackground(true);

    if(white8count ==0)
        ui->white6->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(white8count== 1)
        ui->white6->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(white8count== 2)
        ui->white6->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(white8count== 3)
        ui->white6->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(white8count== 4)
        ui->white6->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(white8count== 5)
        ui->white6->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    white8count++;

    if(white8count == 6)
    {
       white8count = 0;
    }

}


void MainWindow::on_white7_clicked()
{
    ui->white7->setAutoFillBackground(true);

    if(white6count ==0)
        ui->white7->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(white6count== 1)
        ui->white7->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(white6count== 2)
        ui->white7->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(white6count== 3)
        ui->white7->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(white6count== 4)
        ui->white7->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(white6count== 5)
        ui->white7->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    white6count++;

    if(white6count == 6)
    {
       white6count = 0;
    }
}

void MainWindow::on_white8_clicked()
{
    ui->white8->setAutoFillBackground(true);

    if(white7count ==0)
        ui->white8->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(white7count== 1)
        ui->white8->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(white7count== 2)
        ui->white8->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(white7count== 3)
        ui->white8->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(white7count== 4)
        ui->white8->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(white7count== 5)
        ui->white8->setStyleSheet("background-color: white; color: black; border: 3px solid black");
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

    if(green0count ==0)
        ui->green0->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(green0count== 1)
        ui->green0->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(green0count== 2)
        ui->green0->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(green0count== 3)
        ui->green0->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(green0count== 4)
        ui->green0->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(green0count== 5)
        ui->green0->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    green0count++;

    if(green0count == 6)
    {
       green0count = 0;
    }
}

void MainWindow::on_green1_clicked()
{
    ui->green1->setAutoFillBackground(true);

    if(green1count ==0)
        ui->green1->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(green1count== 1)
        ui->green1->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(green1count== 2)
        ui->green1->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(green1count== 3)
        ui->green1->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(green1count== 4)
        ui->green1->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(green1count== 5)
        ui->green1->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    green1count++;

    if(green1count == 6)
    {
       green1count = 0;
    }
}


void MainWindow::on_green3_clicked()
{
    ui->green3->setAutoFillBackground(true);

    if(green3count ==0)
        ui->green3->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(green3count== 1)
        ui->green3->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(green3count== 2)
        ui->green3->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(green3count== 3)
        ui->green3->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(green3count== 4)
        ui->green3->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(green3count== 5)
        ui->green3->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    green3count++;

    if(green3count == 6)
    {
       green3count = 0;
    }
}

void MainWindow::on_green4_clicked()
{
    ui->green4->setAutoFillBackground(true);

    if(green4count ==0)
        ui->green4->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(green4count== 1)
        ui->green4->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(green4count== 2)
        ui->green4->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(green4count== 3)
        ui->green4->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(green4count== 4)
        ui->green4->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(green4count== 5)
        ui->green4->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    green4count++;

    if(green4count == 6)
    {
       green4count = 0;
    }
}



void MainWindow::on_green5_clicked()
{
    ui->green5->setAutoFillBackground(true);

    if(green5count==0)
        ui->green5->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(green5count== 1)
        ui->green5->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(green5count== 2)
        ui->green5->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(green5count== 3)
        ui->green5->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(green5count== 4)
        ui->green5->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(green5count== 5)
        ui->green5->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    green5count++;

    if(green5count == 6)
    {
       green5count = 0;
    }
}

void MainWindow::on_green6_clicked()
{
    ui->green6->setAutoFillBackground(true);

    if(green6count ==0)
        ui->green6->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(green6count== 1)
        ui->green6->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(green6count== 2)
        ui->green6->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(green6count== 3)
        ui->green6->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(green6count== 4)
        ui->green6->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(green6count== 5)
        ui->green6->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    green6count++;

    if(green6count == 6)
    {
       green6count = 0;
    }
}

void MainWindow::on_green7_clicked()
{
    ui->green7->setAutoFillBackground(true);

    if(green7count ==0)
        ui->green7->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(green7count== 1)
        ui->green7->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(green7count== 2)
        ui->green7->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(green7count== 3)
        ui->green7->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(green7count== 4)
        ui->green7->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(green7count== 5)
        ui->green7->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    green7count++;

    if(green7count == 6)
    {
       green7count = 0;
    }
}

void MainWindow::on_green8_clicked()
{
    ui->green8->setAutoFillBackground(true);

    if(green8count ==0)
        ui->green8->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(green8count== 1)
        ui->green8->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(green8count== 2)
        ui->green8->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(green8count== 3)
        ui->green8->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(green8count== 4)
        ui->green8->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(green8count== 5)
        ui->green8->setStyleSheet("background-color: white; color: black; border: 3px solid black");
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

    if(red0count ==0)
        ui->red0->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(red0count== 1)
        ui->red0->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(red0count== 2)
        ui->red0->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(red0count== 3)
        ui->red0->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(red0count== 4)
        ui->red0->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(red0count== 5)
        ui->red0->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    red0count++;

    if(red0count == 6)
    {
       red0count = 0;
    }
}



void MainWindow::on_red1_clicked()
{
    ui->red1->setAutoFillBackground(true);

    if(red1count ==0)
        ui->red1->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(red1count== 1)
        ui->red1->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(red1count== 2)
        ui->red1->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(red1count== 3)
        ui->red1->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(red1count== 4)
        ui->red1->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(red1count== 5)
        ui->red1->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    red1count++;

    if(red1count == 6)
    {
       red1count = 0;
    }
}

void MainWindow::on_red3_clicked()
{
    ui->red1->setAutoFillBackground(true);

    if(red2count ==0)
        ui->red3->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(red2count== 1)
        ui->red3->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(red2count== 2)
        ui->red3->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(red2count== 3)
        ui->red3->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(red2count== 4)
        ui->red3->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(red2count== 5)
        ui->red3->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    red2count++;

    if(red2count == 6)
    {
       red2count = 0;
    }
}

void MainWindow::on_red4_clicked()
{
    ui->red1->setAutoFillBackground(true);

    if(red3count ==0)
        ui->red4->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(red3count== 1)
        ui->red4->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(red3count== 2)
        ui->red4->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(red3count== 3)
        ui->red4->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(red3count== 4)
        ui->red4->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(red3count== 5)
        ui->red4->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    red3count++;

    if(red3count == 6)
    {
       red3count = 0;
    }
}

void MainWindow::on_red5_clicked()
{
    ui->red5->setAutoFillBackground(true);

    if(red4count ==0)
        ui->red5->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(red4count== 1)
        ui->red5->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(red4count== 2)
        ui->red5->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(red4count== 3)
        ui->red5->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(red4count== 4)
        ui->red5->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(red4count== 5)
        ui->red5->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    red4count++;

    if(red4count == 6)
    {
       red4count = 0;
    }
}



void MainWindow::on_red6_clicked()
{
    ui->red6->setAutoFillBackground(true);

    if(red5count ==0)
        ui->red6->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(red5count== 1)
        ui->red6->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(red5count== 2)
        ui->red6->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(red5count== 3)
        ui->red6->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(red5count== 4)
        ui->red6->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(red5count== 5)
        ui->red6->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    red5count++;

    if(red5count == 6)
    {
       red5count = 0;
    }
}

void MainWindow::on_red7_clicked()
{
    ui->red7->setAutoFillBackground(true);

    if(red6count ==0)
        ui->red7->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(red6count== 1)
        ui->red7->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(red6count== 2)
        ui->red7->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(red6count== 3)
        ui->red7->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(red6count== 4)
        ui->red7->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(red6count== 5)
        ui->red7->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    red6count++;

    if(red6count == 6)
    {
       red6count = 0;
    }
}

void MainWindow::on_red8_clicked()
{
    ui->red8->setAutoFillBackground(true);

    if(red7count ==0)
        ui->red8->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(red7count== 1)
        ui->red8->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(red7count== 2)
        ui->red8->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(red7count== 3)
        ui->red8->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(red7count== 4)
        ui->red8->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(red7count== 5)
        ui->red8->setStyleSheet("background-color: white; color: black; border: 3px solid black");
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

    if(blue0count ==0)
        ui->blue0->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(blue0count== 1)
        ui->blue0->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(blue0count== 2)
        ui->blue0->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(blue0count== 3)
        ui->blue0->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(blue0count== 4)
        ui->blue0->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(blue0count== 5)
        ui->blue0->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    blue0count++;

    if(blue0count == 6)
    {
       blue0count = 0;
    }
}

void MainWindow::on_blue1_clicked()
{
    ui->blue1->setAutoFillBackground(true);

    if(blue1count ==0)
        ui->blue1->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(blue1count== 1)
        ui->blue1->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(blue1count== 2)
        ui->blue1->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(blue1count== 3)
        ui->blue1->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(blue1count== 4)
        ui->blue1->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(blue1count== 5)
        ui->blue1->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    blue1count++;

    if(blue1count == 6)
    {
       blue1count = 0;
    }
}



void MainWindow::on_blue2_clicked()
{
    ui->blue2->setAutoFillBackground(true);

    if(blue2count ==0)
        ui->blue2->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(blue2count== 1)
        ui->blue2->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(blue2count== 2)
        ui->blue2->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(blue2count== 3)
        ui->blue2->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(blue2count== 4)
        ui->blue2->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(blue2count== 5)
        ui->blue2->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    blue2count++;

    if(blue2count == 6)
    {
       blue2count = 0;
    }
}

void MainWindow::on_blue3_clicked()
{
    ui->blue3->setAutoFillBackground(true);

    if(blue3count ==0)
        ui->blue3->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(blue3count== 1)
        ui->blue3->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(blue3count== 2)
        ui->blue3->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(blue3count== 3)
        ui->blue3->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(blue3count== 4)
        ui->blue3->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(blue3count== 5)
        ui->blue3->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    blue3count++;

    if(blue3count == 6)
    {
       blue3count = 0;
    }
}

void MainWindow::on_blue4_clicked()
{
    ui->blue4->setAutoFillBackground(true);

    if(blue4count ==0)
        ui->blue4->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(blue4count== 1)
        ui->blue4->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(blue4count== 2)
        ui->blue4->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(blue4count== 3)
        ui->blue4->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(blue4count== 4)
        ui->blue4->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(blue4count== 5)
        ui->blue4->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    blue4count++;

    if(blue4count == 6)
    {
       blue4count = 0;
    }
}

void MainWindow::on_blue5_clicked()
{
    ui->blue5->setAutoFillBackground(true);

    if(blue5count ==0)
        ui->blue5->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(blue5count== 1)
        ui->blue5->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(blue5count== 2)
        ui->blue5->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(blue5count== 3)
        ui->blue5->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(blue5count== 4)
        ui->blue5->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(blue5count== 5)
        ui->blue5->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    blue5count++;

    if(blue5count == 6)
    {
       blue5count = 0;
    }
}

void MainWindow::on_blue6_clicked()
{
    ui->blue6->setAutoFillBackground(true);

    if(blue6count ==0)
        ui->blue6->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(blue6count== 1)
        ui->blue6->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(blue6count== 2)
        ui->blue6->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(blue6count== 3)
        ui->blue6->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(blue6count== 4)
        ui->blue6->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(blue6count== 5)
        ui->blue6->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    blue6count++;

    if(blue6count == 6)
    {
       blue6count = 0;
    }
}

void MainWindow::on_blue7_clicked()
{
    ui->blue7->setAutoFillBackground(true);

    if(blue7count ==0)
        ui->blue7->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(blue7count== 1)
        ui->blue7->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(blue7count== 2)
        ui->blue7->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(blue7count== 3)
        ui->blue7->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(blue7count== 4)
        ui->blue7->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(blue7count== 5)
        ui->blue7->setStyleSheet("background-color: white; color: black; border: 3px solid black");
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

    if(orange0count ==0)
        ui->orange0->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(orange0count== 1)
        ui->orange0->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(orange0count== 2)
        ui->orange0->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(orange0count== 3)
        ui->orange0->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(orange0count== 4)
        ui->orange0->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(orange0count== 5)
        ui->orange0->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    orange0count++;

    if(orange0count == 6)
    {
       orange0count = 0;
    }
}

void MainWindow::on_orange1_clicked()
{
    ui->orange1->setAutoFillBackground(true);

    if(orange1count ==0)
        ui->orange1->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(orange1count== 1)
        ui->orange1->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(orange1count== 2)
        ui->orange1->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(orange1count== 3)
        ui->orange1->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(orange1count== 4)
        ui->orange1->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(orange1count== 5)
        ui->orange1->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    orange1count++;

    if(orange1count == 6)
    {
       orange1count = 0;
    }
}

void MainWindow::on_orange2_clicked()
{
    ui->orange2->setAutoFillBackground(true);

    if(orange2count ==0)
        ui->orange2->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(orange2count== 1)
        ui->orange2->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(orange2count== 2)
        ui->orange2->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(orange2count== 3)
        ui->orange2->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(orange2count== 4)
        ui->orange2->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(orange2count== 5)
        ui->orange2->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    orange2count++;

    if(orange2count == 6)
    {
       orange2count = 0;
    }
}

void MainWindow::on_orange3_clicked()
{
    ui->orange3->setAutoFillBackground(true);

    if(orange3count ==0)
        ui->orange3->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(orange3count== 1)
        ui->orange3->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(orange3count== 2)
        ui->orange3->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(orange3count== 3)
        ui->orange3->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(orange3count== 4)
        ui->orange3->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(orange3count== 5)
        ui->orange3->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    orange3count++;

    if(orange3count == 6)
    {
       orange3count = 0;
    }
}

void MainWindow::on_orange4_clicked()
{
    ui->orange4->setAutoFillBackground(true);

    if(orange4count ==0)
        ui->orange4->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(orange4count== 1)
        ui->orange4->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(orange4count== 2)
        ui->orange4->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(orange4count== 3)
        ui->orange4->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(orange4count== 4)
        ui->orange4->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(orange4count== 5)
        ui->orange4->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    orange4count++;

    if(orange4count == 6)
    {
       orange4count = 0;
    }
}

void MainWindow::on_orange5_clicked()
{
    ui->orange5->setAutoFillBackground(true);

    if(orange5count ==0)
        ui->orange5->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(orange5count== 1)
        ui->orange5->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(orange5count== 2)
        ui->orange5->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(orange5count== 3)
        ui->orange5->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(orange5count== 4)
        ui->orange5->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(orange5count== 5)
        ui->orange5->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    orange5count++;

    if(orange5count == 6)
    {
       orange5count = 0;
    }
}

void MainWindow::on_orange6_clicked()
{
    ui->orange6->setAutoFillBackground(true);

    if(orange6count ==0)
        ui->orange6->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(orange6count== 1)
        ui->orange6->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(orange6count== 2)
        ui->orange6->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(orange6count== 3)
        ui->orange6->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(orange6count== 4)
        ui->orange6->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(orange6count== 5)
        ui->orange6->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    orange6count++;

    if(orange6count == 6)
    {
       orange6count = 0;
    }
}

void MainWindow::on_orange7_clicked()
{
    ui->orange7->setAutoFillBackground(true);

    if(orange7count ==0)
        ui->orange7->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(orange7count== 1)
        ui->orange7->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(orange7count== 2)
        ui->orange7->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(orange7count== 3)
        ui->orange7->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(orange7count== 4)
        ui->orange7->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(orange7count== 5)
        ui->orange7->setStyleSheet("background-color: white; color: black; border: 3px solid black");
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

    if(yellow0count ==0)
        ui->yellow0->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(yellow0count== 1)
        ui->yellow0->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(yellow0count== 2)
        ui->yellow0->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(yellow0count== 3)
        ui->yellow0->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(yellow0count== 4)
        ui->yellow0->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(yellow0count== 5)
        ui->yellow0->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    yellow0count++;

    if(yellow0count == 6)
    {
       yellow0count = 0;
    }
}


void MainWindow::on_yellow1_clicked()
{
    ui->yellow1->setAutoFillBackground(true);

    if(yellow1count ==0)
        ui->yellow1->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(yellow1count== 1)
        ui->yellow1->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(yellow1count== 2)
        ui->yellow1->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(yellow1count== 3)
        ui->yellow1->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(yellow1count== 4)
        ui->yellow1->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(yellow1count== 5)
        ui->yellow1->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    yellow1count++;

    if(yellow1count == 6)
    {
       yellow1count = 0;
    }
}


void MainWindow::on_yellow2_clicked()
{
    ui->yellow2->setAutoFillBackground(true);

    if(yellow2count ==0)
        ui->yellow2->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(yellow2count== 1)
        ui->yellow2->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(yellow2count== 2)
        ui->yellow2->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(yellow2count== 3)
        ui->yellow2->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(yellow2count== 4)
        ui->yellow2->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(yellow2count== 5)
        ui->yellow2->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    yellow2count++;

    if(yellow2count == 6)
    {
       yellow2count = 0;
    }
}



void MainWindow::on_yellow3_clicked()
{
    ui->yellow3->setAutoFillBackground(true);

    if(yellow3count ==0)
        ui->yellow3->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(yellow3count== 1)
        ui->yellow3->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(yellow3count== 2)
        ui->yellow3->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(yellow3count== 3)
        ui->yellow3->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(yellow3count== 4)
        ui->yellow3->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(yellow3count== 5)
        ui->yellow3->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    yellow3count++;

    if(yellow3count == 6)
    {
       yellow3count = 0;
    }
}


void MainWindow::on_yellow4_clicked()
{
    ui->yellow4->setAutoFillBackground(true);

    if(yellow4count ==0)
        ui->yellow4->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(yellow4count== 1)
        ui->yellow4->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(yellow4count== 2)
        ui->yellow4->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(yellow4count== 3)
        ui->yellow4->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(yellow4count== 4)
        ui->yellow4->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(yellow4count== 5)
        ui->yellow4->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    yellow4count++;

    if(yellow4count == 6)
    {
       yellow4count = 0;
    }
}


void MainWindow::on_yellow5_clicked()
{
    ui->yellow5->setAutoFillBackground(true);

    if(yellow5count ==0)
        ui->yellow5->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(yellow5count== 1)
        ui->yellow5->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(yellow5count== 2)
        ui->yellow5->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(yellow5count== 3)
        ui->yellow5->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(yellow5count== 4)
        ui->yellow5->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(yellow5count== 5)
        ui->yellow5->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    yellow5count++;

    if(yellow5count == 6)
    {
       yellow5count = 0;
    }
}

void MainWindow::on_yellow6_clicked()
{
    ui->yellow6->setAutoFillBackground(true);

    if(yellow6count ==0)
        ui->yellow6->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(yellow6count== 1)
        ui->yellow6->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(yellow6count== 2)
        ui->yellow6->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(yellow6count== 3)
        ui->yellow6->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(yellow6count== 4)
        ui->yellow6->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(yellow6count== 5)
        ui->yellow6->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    yellow6count++;

    if(yellow6count == 6)
    {
       yellow6count = 0;
    }
}

void MainWindow::on_yellow7_clicked()
{
    ui->yellow7->setAutoFillBackground(true);

    if(yellow7count ==0)
        ui->yellow7->setStyleSheet("background-color: red; color: rgb(255,255,255); border: 3px solid black");
    if(yellow7count== 1)
        ui->yellow7->setStyleSheet("background-color: yellow; color: black; border: 3px solid black");
    if(yellow7count== 2)
        ui->yellow7->setStyleSheet("background-color: blue; color: rgb(255,255,255); border: 3px solid black");
    if(yellow7count== 3)
        ui->yellow7->setStyleSheet("background-color: green; color: rgb(255,255,255); border: 3px solid black");
    if(yellow7count== 4)
        ui->yellow7->setStyleSheet("background-color: orange; color: rgb(255,255,255); border: 3px solid black");
    if(yellow7count== 5)
        ui->yellow7->setStyleSheet("background-color: white; color: black; border: 3px solid black");
    yellow7count++;

    if(yellow7count == 6)
    {
       yellow7count = 0;
    }
}



