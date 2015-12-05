#include "mainwindow.h"
#include <QApplication>
#include  <QFile>
#include  <QTextStream>
#include <QMessageBox>
#include <QLineEdit>
#include <QPalette>
#include <QtWidgets>
#include <QColor>


int main(int argc, char *argv[])
{
    QString filename = "help.txt";
       QFile file(filename);
       if(file.open(QIODevice::ReadWrite|QIODevice::Truncate))
       {
           QTextStream stream(&file);

           stream << "==================================== "<< endl;
           stream << "This is the Help instruction page. "<< endl;
           stream << "Just follow the steps below to solve your cube. "<< endl;
           stream << "==================================== "<< endl;
           stream << "1)Match the center square of each face on your cube to those on the interface.\n"<< endl;
           stream << "2)Using the center colors as a reference, simply click on the surrounding squares to change their colors.\n"<< endl;
           stream << "3)Once you have matched the interface with your own cube, press the Commit Cube Configuration button.\n "<< endl;
           stream << "4)If you recieved an error message when you hit Commit, then check your color configuration to fix mistakes.\n"<< endl;
           stream << "5)Press either Solve One Step to show one step at a time, or Solve All Steps to show all steps at once.\n"<< endl;
           stream << "===================================="<< endl;
       }




    QApplication a(argc, argv);
    MainWindow w;
    w.show();



/*    QString filename2 = "output.txt";
       QFile file2(filename2);
       if(file2.open(QIODevice::ReadWrite|QIODevice::Truncate))
       {
           QTextStream stream(&file2);
           stream <<""<< endl;
       }
       QString filename3 = "input.txt";
          QFile file3(filename3);
          if(file3.open(QIODevice::ReadWrite|QIODevice::Truncate))
          {
              QTextStream stream(&file3);
              stream <<""<< endl;
          }*/
    return a.exec();

}
