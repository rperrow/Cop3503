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
           stream << "6)Orient the cube so that the face with the red center tile faces you, and the face with the white center tile faces up.\n"<< endl;
           stream << "7)See the section below for instructions details\n"<< endl;
           stream << "===================================="<< endl;
           stream << "Further Instructions.\n"<< endl;
           stream << "===================================="<< endl;
           stream << "**All moves are relative to the side facing you**\n"<< endl;
           stream << "CW = Clockwise\n"<< endl;
           stream << "CCW = Counter Clockwise\n"<< endl;
           stream << "R-Turn the right side CW 90 degrees\n"<< endl;
           stream << "Ri-Turn the right side CCW 90 degrees\n"<< endl;
           stream << "L-Turn the left side CW 90 degrees\n"<< endl;
           stream << "Li-Turn the left side CCW 90 degrees\n"<< endl;
           stream << "F-Turn the front side CW 90 degrees\n"<< endl;
           stream << "Fi-Turn the front side CCW 90 degrees\n"<< endl;
           stream << "U-Turn the upper side CW 90 degrees\n"<< endl;
           stream << "Ui-Turn the upper side CCW 90 degrees\n"<< endl;
           stream << "D-Turn the bottom side CW 90 degrees\n"<< endl;
           stream << "Di-Turn the bottom side CCW 90 degrees\n"<< endl;
           stream << "Step1Move-Fi,U,Li,Ui\n"<< endl;
           stream << "Step2Move-Ri,Di,R,D\n"<< endl;
           stream << "Step3aMove-U,R,Ui,Ri,Ui,Fi,U,F\n"<< endl;
           stream << "Step3bMove-Ui,Fi,U,F,U,R,Ui,Ri\n"<< endl;
           stream << "Step4Move-F,R,U,Ri\n"<< endl;
           stream << "Step5Move-R,U,Ri,U,R,U,U,Ri\n"<< endl;
           stream << "Step6Move-U,R,Ui,Li,U,Ri,Ui,L\n"<< endl;
           stream << "SpinCW-Rotate the Cube CW 90 degrees (with respect to its z-axis)\n"<< endl;
           stream << "SpinCCW-Rotate the Cube CCW 90 degrees (with respect to its z-axis)\n"<< endl;
           stream << "RotateCW-Rotate the Cube CW 90 degrees (with respect to its x-axis)\n"<< endl;
           stream << "[move]x(n)-Perform [move] 'n' number of times. This multiplier can be applied to moves above.\n"<< endl;
           stream << "===================================="<< endl;
       }
/*
       QString filename_1 = "input.txt";
          QFile file_1(filename_1);
          if(file_1.open(QIODevice::ReadWrite|QIODevice::Truncate))
          {
              QTextStream stream(&file_1);
              stream << ""<< endl;
           }
          QString filename_2 = "output.txt";
             QFile file_2(filename_2);
             if(file_2.open(QIODevice::ReadWrite|QIODevice::Truncate))
             {
                 QTextStream stream(&file_2);
                 stream << ""<< endl;
              }
*/
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
