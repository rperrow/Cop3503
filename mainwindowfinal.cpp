#include "mainwindow.h"
#include "ui_mainwindow.h"
#include  <QFile>
#include  <QTextStream>
#include <QMessageBox>
#include <QLineEdit>
#include <QPalette>
#include <QtWidgets>
#include <QColor>

/////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include"RCSolver.h"

using namespace std;

vector<QString> steps;


Corner::Corner(Tile t1, Tile t2, Tile t3){
    tile1 = t1;
    tile2 = t2;
    tile3 = t3;
}
Tile Corner::getTile1(){
    return tile1;
}
Tile Corner::getTile2(){
    return tile2;
}
Tile Corner::getTile3(){
    return tile3;
}
Side::Side(Tile t1, Tile t2){
    tile1 = t1;
    tile2 = t2;
}
Tile Side::getTile1(){
    return tile1;
}
Tile Side::getTile2(){
    return tile2;
}
Tile::Tile(){
    color = "";
}
Tile::Tile(string c){
    color = c;
}
string Tile::getColor(){
    return color;
}
Cube::Cube(){
cubeArr = NULL;
}
Cube::Cube(Face top, Face front, Face right, Face back, Face left, Face down){
cubeArr = new Face[6];
cubeArr[0] = top;
cubeArr[1] = front;
cubeArr[2] = right;
cubeArr[3] = back;
cubeArr[4] = left;
cubeArr[5] = down;
}
vector<string> Cube::getVector(){
return solutionVector;
}
void Cube::spinF(){
Tile temp0; Tile temp1; Tile temp2;
temp0 = cubeArr[0].getFace()[2][0];
temp1 = cubeArr[0].getFace()[2][1];
temp2 = cubeArr[0].getFace()[2][2];
cubeArr[0].getFace()[2][0] = cubeArr[4].getFace()[2][2];
cubeArr[0].getFace()[2][1] = cubeArr[4].getFace()[1][2];
cubeArr[0].getFace()[2][2] = cubeArr[4].getFace()[0][2];
cubeArr[4].getFace()[0][2] = cubeArr[5].getFace()[0][0];
cubeArr[4].getFace()[1][2] = cubeArr[5].getFace()[0][1];
cubeArr[4].getFace()[2][2] = cubeArr[5].getFace()[0][2];
cubeArr[5].getFace()[0][0] = cubeArr[2].getFace()[2][0];
cubeArr[5].getFace()[0][1] = cubeArr[2].getFace()[1][0];
cubeArr[5].getFace()[0][2] = cubeArr[2].getFace()[0][0];
cubeArr[2].getFace()[0][0] = temp0;
cubeArr[2].getFace()[1][0] = temp1;
cubeArr[2].getFace()[2][0] = temp2;
cubeArr[1].rotate();
solutionVector.push_back("F");
}
void Cube::spinFi(){
Tile temp0; Tile temp1; Tile temp2;
temp0 = cubeArr[0].getFace()[2][0];
temp1 = cubeArr[0].getFace()[2][1];
temp2 = cubeArr[0].getFace()[2][2];
cubeArr[0].getFace()[2][0] = cubeArr[2].getFace()[0][0];
cubeArr[0].getFace()[2][1] = cubeArr[2].getFace()[1][0];
cubeArr[0].getFace()[2][2] = cubeArr[2].getFace()[2][0];
cubeArr[2].getFace()[0][0] = cubeArr[5].getFace()[0][2];
cubeArr[2].getFace()[1][0] = cubeArr[5].getFace()[0][1];
cubeArr[2].getFace()[2][0] = cubeArr[5].getFace()[0][0];
cubeArr[5].getFace()[0][0] = cubeArr[4].getFace()[0][2];
cubeArr[5].getFace()[0][1] = cubeArr[4].getFace()[1][2];
cubeArr[5].getFace()[0][2] = cubeArr[4].getFace()[2][2];
/*cubeArr[4].getFace()[0][2] = temp0;
cubeArr[4].getFace()[1][2] = temp1;
cubeArr[4].getFace()[2][2] = temp2;*/
//edit
cubeArr[4].getFace()[0][2] = temp2;
cubeArr[4].getFace()[1][2] = temp1;
cubeArr[4].getFace()[2][2] = temp0;
cubeArr[1].rotateI();
solutionVector.push_back("Fi");
}
void Cube::spinR(){
Tile temp0; Tile temp1; Tile temp2;
temp0 = cubeArr[0].getFace()[0][2];
temp1 = cubeArr[0].getFace()[1][2];
temp2 = cubeArr[0].getFace()[2][2];
cubeArr[0].getFace()[0][2] = cubeArr[1].getFace()[0][2];
cubeArr[0].getFace()[1][2] = cubeArr[1].getFace()[1][2];
cubeArr[0].getFace()[2][2] = cubeArr[1].getFace()[2][2];
cubeArr[1].getFace()[0][2] = cubeArr[5].getFace()[0][2];
cubeArr[1].getFace()[1][2] = cubeArr[5].getFace()[1][2];
cubeArr[1].getFace()[2][2] = cubeArr[5].getFace()[2][2];
cubeArr[5].getFace()[0][2] = cubeArr[3].getFace()[2][0];
cubeArr[5].getFace()[1][2] = cubeArr[3].getFace()[1][0];
cubeArr[5].getFace()[2][2] = cubeArr[3].getFace()[0][0];
cubeArr[3].getFace()[2][0] = temp0;
cubeArr[3].getFace()[1][0] = temp1;
cubeArr[3].getFace()[0][0] = temp2;
cubeArr[2].rotate();
solutionVector.push_back("R");
}
void Cube::spinRi(){
Tile temp0; Tile temp1; Tile temp2;
temp0 = cubeArr[0].getFace()[0][2];
temp1 = cubeArr[0].getFace()[1][2];
temp2 = cubeArr[0].getFace()[2][2];
cubeArr[0].getFace()[0][2] = cubeArr[3].getFace()[2][0];
cubeArr[0].getFace()[1][2] = cubeArr[3].getFace()[1][0];
cubeArr[0].getFace()[2][2] = cubeArr[3].getFace()[0][0];
cubeArr[3].getFace()[2][0] = cubeArr[5].getFace()[0][2];
cubeArr[3].getFace()[1][0] = cubeArr[5].getFace()[1][2];
cubeArr[3].getFace()[0][0] = cubeArr[5].getFace()[2][2];
cubeArr[5].getFace()[0][2] = cubeArr[1].getFace()[0][2];
cubeArr[5].getFace()[1][2] = cubeArr[1].getFace()[1][2];
cubeArr[5].getFace()[2][2] = cubeArr[1].getFace()[2][2];
cubeArr[1].getFace()[0][2] = temp0;
cubeArr[1].getFace()[1][2] = temp1;
cubeArr[1].getFace()[2][2] = temp2;
cubeArr[2].rotateI();
solutionVector.push_back("Ri");
}
void Cube::spinLi(){
Tile temp0; Tile temp1; Tile temp2;
temp0 = cubeArr[0].getFace()[0][0];
temp1 = cubeArr[0].getFace()[1][0];
temp2 = cubeArr[0].getFace()[2][0];
cubeArr[0].getFace()[0][0] = cubeArr[1].getFace()[0][0];
cubeArr[0].getFace()[1][0] = cubeArr[1].getFace()[1][0];
cubeArr[0].getFace()[2][0] = cubeArr[1].getFace()[2][0];
cubeArr[1].getFace()[0][0] = cubeArr[5].getFace()[0][0];
cubeArr[1].getFace()[1][0] = cubeArr[5].getFace()[1][0];
cubeArr[1].getFace()[2][0] = cubeArr[5].getFace()[2][0];
cubeArr[5].getFace()[0][0] = cubeArr[3].getFace()[2][2];
cubeArr[5].getFace()[1][0] = cubeArr[3].getFace()[1][2];
cubeArr[5].getFace()[2][0] = cubeArr[3].getFace()[0][2];
cubeArr[3].getFace()[2][2] = temp0;
cubeArr[3].getFace()[1][2] = temp1;
cubeArr[3].getFace()[0][2] = temp2;
cubeArr[4].rotateI();
solutionVector.push_back("Li");
}
void Cube::spinL(){
Tile temp0; Tile temp1; Tile temp2;
temp0 = cubeArr[0].getFace()[0][0];
temp1 = cubeArr[0].getFace()[1][0];
temp2 = cubeArr[0].getFace()[2][0];
cubeArr[0].getFace()[0][0] = cubeArr[3].getFace()[2][2];
cubeArr[0].getFace()[1][0] = cubeArr[3].getFace()[1][2];
cubeArr[0].getFace()[2][0] = cubeArr[3].getFace()[0][2];
cubeArr[3].getFace()[2][2] = cubeArr[5].getFace()[0][0];
cubeArr[3].getFace()[1][2] = cubeArr[5].getFace()[1][0];
cubeArr[3].getFace()[0][2] = cubeArr[5].getFace()[2][0];
cubeArr[5].getFace()[0][0] = cubeArr[1].getFace()[0][0];
cubeArr[5].getFace()[1][0] = cubeArr[1].getFace()[1][0];
cubeArr[5].getFace()[2][0] = cubeArr[1].getFace()[2][0];
cubeArr[1].getFace()[0][0] = temp0;
cubeArr[1].getFace()[1][0] = temp1;
cubeArr[1].getFace()[2][0] = temp2;
cubeArr[4].rotate();
solutionVector.push_back("L");
}
void Cube::spinD(){
Tile temp0; Tile temp1; Tile temp2;
temp0 = cubeArr[1].getFace()[2][0];
temp1 = cubeArr[1].getFace()[2][1];
temp2 = cubeArr[1].getFace()[2][2];
cubeArr[1].getFace()[2][0] = cubeArr[4].getFace()[2][0];
cubeArr[1].getFace()[2][1] = cubeArr[4].getFace()[2][1];
cubeArr[1].getFace()[2][2] = cubeArr[4].getFace()[2][2];
cubeArr[4].getFace()[2][0] = cubeArr[3].getFace()[2][0];
cubeArr[4].getFace()[2][1] = cubeArr[3].getFace()[2][1];
cubeArr[4].getFace()[2][2] = cubeArr[3].getFace()[2][2];
cubeArr[3].getFace()[2][0] = cubeArr[2].getFace()[2][0];
cubeArr[3].getFace()[2][1] = cubeArr[2].getFace()[2][1];
cubeArr[3].getFace()[2][2] = cubeArr[2].getFace()[2][2];
cubeArr[2].getFace()[2][0] = temp0;
cubeArr[2].getFace()[2][1] = temp1;
cubeArr[2].getFace()[2][2] = temp2;
cubeArr[5].rotate();
solutionVector.push_back("D");
}
void Cube::spinDi(){
Tile temp0; Tile temp1; Tile temp2;
temp0 = cubeArr[1].getFace()[2][0];
temp1 = cubeArr[1].getFace()[2][1];
temp2 = cubeArr[1].getFace()[2][2];
cubeArr[1].getFace()[2][0] = cubeArr[2].getFace()[2][0];
cubeArr[1].getFace()[2][1] = cubeArr[2].getFace()[2][1];
cubeArr[1].getFace()[2][2] = cubeArr[2].getFace()[2][2];
cubeArr[2].getFace()[2][0] = cubeArr[3].getFace()[2][0];
cubeArr[2].getFace()[2][1] = cubeArr[3].getFace()[2][1];
cubeArr[2].getFace()[2][2] = cubeArr[3].getFace()[2][2];
cubeArr[3].getFace()[2][0] = cubeArr[4].getFace()[2][0];
cubeArr[3].getFace()[2][1] = cubeArr[4].getFace()[2][1];
cubeArr[3].getFace()[2][2] = cubeArr[4].getFace()[2][2];
cubeArr[4].getFace()[2][0] = temp0;
cubeArr[4].getFace()[2][1] = temp1;
cubeArr[4].getFace()[2][2] = temp2;
cubeArr[5].rotateI();
solutionVector.push_back("Di");
}
void Cube::spinU(){
Tile temp0; Tile temp1; Tile temp2;
temp0 = cubeArr[1].getFace()[0][0];
temp1 = cubeArr[1].getFace()[0][1];
temp2 = cubeArr[1].getFace()[0][2];
cubeArr[1].getFace()[0][0] = cubeArr[2].getFace()[0][0];
cubeArr[1].getFace()[0][1] = cubeArr[2].getFace()[0][1];
cubeArr[1].getFace()[0][2] = cubeArr[2].getFace()[0][2];
cubeArr[2].getFace()[0][0] = cubeArr[3].getFace()[0][0];
cubeArr[2].getFace()[0][1] = cubeArr[3].getFace()[0][1];
cubeArr[2].getFace()[0][2] = cubeArr[3].getFace()[0][2];
cubeArr[3].getFace()[0][0] = cubeArr[4].getFace()[0][0];
cubeArr[3].getFace()[0][1] = cubeArr[4].getFace()[0][1];
cubeArr[3].getFace()[0][2] = cubeArr[4].getFace()[0][2];
cubeArr[4].getFace()[0][0] = temp0;
cubeArr[4].getFace()[0][1] = temp1;
cubeArr[4].getFace()[0][2] = temp2;
cubeArr[0].rotate();
solutionVector.push_back("U");
}
void Cube::spinUi(){
Tile temp0; Tile temp1; Tile temp2;
temp0 = cubeArr[1].getFace()[0][0];
temp1 = cubeArr[1].getFace()[0][1];
temp2 = cubeArr[1].getFace()[0][2];
cubeArr[1].getFace()[0][0] = cubeArr[4].getFace()[0][0];
cubeArr[1].getFace()[0][1] = cubeArr[4].getFace()[0][1];
cubeArr[1].getFace()[0][2] = cubeArr[4].getFace()[0][2];
cubeArr[4].getFace()[0][0] = cubeArr[3].getFace()[0][0];
cubeArr[4].getFace()[0][1] = cubeArr[3].getFace()[0][1];
cubeArr[4].getFace()[0][2] = cubeArr[3].getFace()[0][2];
cubeArr[3].getFace()[0][0] = cubeArr[2].getFace()[0][0];
cubeArr[3].getFace()[0][1] = cubeArr[2].getFace()[0][1];
cubeArr[3].getFace()[0][2] = cubeArr[2].getFace()[0][2];
cubeArr[2].getFace()[0][0] = temp0;
cubeArr[2].getFace()[0][1] = temp1;
cubeArr[2].getFace()[0][2] = temp2;
cubeArr[0].rotateI();
solutionVector.push_back("Ui");
}
void Cube::setTop(int k){
if(k==1){
Face temp = cubeArr[0];
cubeArr[0] = cubeArr[1];
cubeArr[1] = cubeArr[5];
cubeArr[3].rotate(); cubeArr[3].rotate();
cubeArr[5] = cubeArr[3];
temp.rotate(); temp.rotate();
cubeArr[3] = temp;
cubeArr[2].rotate();
cubeArr[4].rotateI();
solutionVector.push_back("RotateFW");
}
if(k==2){
Face temp = cubeArr[0];
cubeArr[2].rotateI();
cubeArr[0] = cubeArr[2];
cubeArr[5].rotateI();
cubeArr[2] = cubeArr[5];
cubeArr[4].rotateI();
cubeArr[5] = cubeArr[4];
temp.rotateI();
cubeArr[4] = temp;
cubeArr[1].rotateI();
cubeArr[3].rotate();
solutionVector.push_back("RotateCCW");
}
if(k==3){
Face temp = cubeArr[0];
cubeArr[3].rotate(); cubeArr[3].rotate();
cubeArr[0] = cubeArr[3];
cubeArr[5].rotate(); cubeArr[5].rotate();
cubeArr[3] = cubeArr[5];
cubeArr[5] = cubeArr[1];
cubeArr[1] = temp;
cubeArr[2].rotateI();
cubeArr[4].rotate();
solutionVector.push_back("RotateBW");
}
if(k==4){
Face temp = cubeArr[0];
cubeArr[4].rotate();
cubeArr[0] = cubeArr[4];
cubeArr[5].rotate();
cubeArr[4] = cubeArr[5];
cubeArr[2].rotate();
cubeArr[5] = cubeArr[2];
temp.rotate();
cubeArr[2] = temp;
cubeArr[1].rotate();
cubeArr[3].rotateI();
solutionVector.push_back("RotateCW");
}
}
void Cube::rotate(int k){
if(k==1){
Face temp = cubeArr[1];
cubeArr[1]=cubeArr[2];
cubeArr[2]=cubeArr[3];
cubeArr[3]=cubeArr[4];
cubeArr[4] = temp;
cubeArr[0].rotate();
cubeArr[5].rotateI();
solutionVector.push_back("SpinCW");
}
if(k==2){
Face temp = cubeArr[1];
cubeArr[1]=cubeArr[4];
cubeArr[4]=cubeArr[3];
cubeArr[3]=cubeArr[2];
cubeArr[2] = temp;
cubeArr[0].rotateI();
cubeArr[5].rotate();
solutionVector.push_back("SpinCCW");
}
}
void Cube::step1Move(){
spinRi();
spinU();
spinFi();
spinUi();
solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back();
solutionVector.push_back("Step1Move");
}
void Cube::step2Move(){
spinRi();
spinDi();
spinR();
spinD();
solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back();
solutionVector.push_back("Step2Move");
}
void Cube::step3aMove(){
spinU();
spinR();
spinUi();
spinRi();
spinUi();
spinFi();
spinU();
spinF();
solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back();
solutionVector.push_back("Step3aMove");
}
void Cube::step3bMove(){
spinUi();
spinFi();
spinU();
spinF();
spinU();
spinR();
spinUi();
spinRi();
solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back();
solutionVector.push_back("Step3bMove");
}
void Cube::step4Move(){
spinF();
spinR();
spinU();
spinRi();
spinUi();
spinFi();
solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back();
solutionVector.push_back("Step4Move");
}
void Cube::step5Move(){
spinR();
spinU();
spinRi();
spinU();
spinR();
spinU();
spinU();
spinRi();
solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back();
solutionVector.push_back("Step5Move");
}
void Cube::step6Move(){
spinU();
spinR();
spinUi();
spinLi();
spinU();
spinRi();
spinUi();
spinL();
solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back();
solutionVector.push_back("Step6Move");
}
void Cube::fixSideOrientation(){
spinFi();
spinU();
spinLi();
spinUi();
solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back();
solutionVector.push_back("Step1Move");
}
void Cube::solveSide(string c0, string c1){
if((c0 == cubeArr[0].getFace()[1][0].getColor() && c1 == cubeArr[4].getFace()[0][1].getColor()) || (c1 == cubeArr[0].getFace()[1][0].getColor() && c0 == cubeArr[4].getFace()[0][1].getColor())){
spinL(); spinL(); spinD(); spinF(); spinF();
}
else if((c0 == cubeArr[0].getFace()[1][2].getColor() && c1 == cubeArr[2].getFace()[0][1].getColor()) || (c1 == cubeArr[0].getFace()[1][2].getColor() && c0 == cubeArr[2].getFace()[0][1].getColor())){
spinR(); spinR(); spinDi(); spinF(); spinF();
}
else if((c0 == cubeArr[0].getFace()[0][1].getColor() && c1 == cubeArr[3].getFace()[0][1].getColor()) || (c1 == cubeArr[0].getFace()[0][1].getColor() && c0 == cubeArr[3].getFace()[0][1].getColor())){
rotate(1); rotate(1); spinF(); spinF(); spinD(); rotate(1); rotate(1); spinD(); spinF(); spinF();
}
else if((c0 == cubeArr[1].getFace()[1][0].getColor() && c1 == cubeArr[4].getFace()[1][2].getColor()) || (c1 == cubeArr[1].getFace()[1][0].getColor() && c0 == cubeArr[4].getFace()[1][2].getColor())){
spinL(); spinD(); spinLi(); spinF(); spinF();
}
else if((c0 == cubeArr[4].getFace()[1][0].getColor() && c1 == cubeArr[3].getFace()[1][2].getColor()) || (c1 == cubeArr[4].getFace()[1][0].getColor() && c0 == cubeArr[3].getFace()[1][2].getColor())){
spinLi(); spinD(); spinL(); spinF(); spinF();
}
else if((c0 == cubeArr[1].getFace()[1][2].getColor() && c1 == cubeArr[2].getFace()[1][0].getColor()) || (c1 == cubeArr[1].getFace()[1][2].getColor() && c0 == cubeArr[2].getFace()[1][0].getColor())){
spinRi(); spinDi(); spinR(); spinF(); spinF();
}
else if((c0 == cubeArr[2].getFace()[1][2].getColor() && c1 == cubeArr[3].getFace()[1][0].getColor()) || (c1 == cubeArr[2].getFace()[1][2].getColor() && c0 == cubeArr[3].getFace()[1][0].getColor())){
spinR(); spinDi(); spinRi(); spinF(); spinF();
}
else if((c0 == cubeArr[1].getFace()[2][1].getColor() && c1 == cubeArr[5].getFace()[0][1].getColor()) || (c1 == cubeArr[1].getFace()[2][1].getColor() && c0 == cubeArr[5].getFace()[0][1].getColor())){
spinF(); spinF();
}
else if((c0 == cubeArr[4].getFace()[2][1].getColor() && c1 == cubeArr[5].getFace()[1][0].getColor()) || (c1 == cubeArr[4].getFace()[2][1].getColor() && c0 == cubeArr[5].getFace()[1][0].getColor())){
spinD(); spinF(); spinF();
}
else if((c0 == cubeArr[2].getFace()[2][1].getColor() && c1 == cubeArr[5].getFace()[1][2].getColor()) || (c1 == cubeArr[2].getFace()[2][1].getColor() && c0 == cubeArr[5].getFace()[1][2].getColor())){
spinDi(); spinF(); spinF();
}
else if((c0 == cubeArr[3].getFace()[2][1].getColor() && c1 == cubeArr[5].getFace()[2][1].getColor()) || (c1 == cubeArr[3].getFace()[2][1].getColor() && c0 == cubeArr[5].getFace()[2][1].getColor())){
spinD(); spinD(); spinF(); spinF();
}
if(c0 == cubeArr[1].getFace()[0][1].getColor() && c1 == cubeArr[0].getFace()[2][1].getColor()) fixSideOrientation();
}
void Cube::solveTopCross(){
string topColor = cubeArr[0].getFace()[1][1].getColor();
string currentColor = cubeArr[1].getFace()[1][1].getColor();
solveSide(topColor, currentColor);
rotate(1);
currentColor = cubeArr[1].getFace()[1][1].getColor();
solveSide(topColor, currentColor);
rotate(1);
currentColor = cubeArr[1].getFace()[1][1].getColor();
solveSide(topColor, currentColor);
rotate(1);
currentColor = cubeArr[1].getFace()[1][1].getColor();
solveSide(topColor, currentColor);
rotate(1);
}
void Cube::solveCorner(string c0, string c1, string c2){
string f0; string f1; string f2; string f3; string f4; string f5;
f0 = cubeArr[0].getFace()[2][0].getColor();
f1 = cubeArr[1].getFace()[0][0].getColor();
f4 = cubeArr[4].getFace()[0][2].getColor();
if((c0==f0&&c1==f1&&c2==f4)||(c0==f0&&c1==f4&&c2==f1)||(c0==f1&&c1==f0&&c2==f4)||(c0==f4&&c1==f1&&c2==f0)||(c0==f1&&c1==f4&&c2==f0)||(c0==f4&&c1==f0&&c2==f1)){
spinL(); spinD(); spinLi();
}
f0 = cubeArr[0].getFace()[0][0].getColor();
f3 = cubeArr[3].getFace()[0][2].getColor();
f4 = cubeArr[4].getFace()[0][0].getColor();
if((c0==f0&&c1==f3&&c2==f4)||(c0==f0&&c1==f4&&c2==f3)||(c0==f3&&c1==f0&&c2==f4)||(c0==f3&&c1==f4&&c2==f0)||(c0==f4&&c1==f3&&c2==f0)||(c0==f4&&c1==f0&&c2==f3)){
spinLi(); spinD(); spinD(); spinL();
}
f0 = cubeArr[0].getFace()[0][2].getColor();
f2 = cubeArr[2].getFace()[0][2].getColor();
f3 = cubeArr[3].getFace()[0][0].getColor();
if((c0==f0&&c1==f2&&c2==f3)||(c0==f0&&c1==f3&&c2==f2)||(c0==f2&&c1==f0&&c2==f3)||(c0==f2&&c1==f3&&c2==f0)||(c0==f3&&c1==f2&&c2==f0)||(c0==f3&&c1==f0&&c2==f2)){
spinR(); spinDi(); spinRi(); spinDi();
}
f1 = cubeArr[1].getFace()[2][0].getColor();
f4 = cubeArr[4].getFace()[2][2].getColor();
f5 = cubeArr[5].getFace()[0][0].getColor();
if((c0==f1&&c1==f4&&c2==f5)||(c0==f1&&c1==f5&&c2==f4)||(c0==f4&&c1==f1&&c2==f5)||(c0==f4&&c1==f5&&c2==f1)||(c0==f5&&c1==f1&&c2==f4)||(c0==f5&&c1==f4&&c2==f1)){
spinD();
}
f3 = cubeArr[3].getFace()[2][2].getColor();
f4 = cubeArr[4].getFace()[2][0].getColor();
f5 = cubeArr[5].getFace()[2][0].getColor();
if((c0==f3&&c1==f4&&c2==f5)||(c0==f3&&c1==f5&&c2==f4)||(c0==f4&&c1==f3&&c2==f5)||(c0==f4&&c1==f5&&c2==f3)||(c0==f5&&c1==f3&&c2==f4)||(c0==f5&&c1==f4&&c2==f3)){
spinD(); spinD();
}
f2 = cubeArr[2].getFace()[2][2].getColor();
f3 = cubeArr[3].getFace()[2][0].getColor();
f5 = cubeArr[5].getFace()[2][2].getColor();
if((c0==f2&&c1==f3&&c2==f5)||(c0==f2&&c1==f5&&c2==f3)||(c0==f3&&c1==f2&&c2==f5)||(c0==f3&&c1==f5&&c2==f2)||(c0==f5&&c1==f2&&c2==f3)||(c0==f5&&c1==f3&&c2==f2)){
spinDi();
}
f0 = cubeArr[0].getFace()[2][2].getColor();
f1 = cubeArr[1].getFace()[0][2].getColor();
f2 = cubeArr[2].getFace()[0][0].getColor();
while(!(c0==f0&&c1==f1&&c2==f2)){
step2Move();
f0 = cubeArr[0].getFace()[2][2].getColor();
f1 = cubeArr[1].getFace()[0][2].getColor();
f2 = cubeArr[2].getFace()[0][0].getColor();
}
}
void Cube::solveTopCorners(){
string topColor = cubeArr[0].getFace()[1][1].getColor();
string frontColor = cubeArr[1].getFace()[1][1].getColor();
string rightColor = cubeArr[2].getFace()[1][1].getColor();
solveCorner(topColor, frontColor, rightColor);
rotate(1);
frontColor = cubeArr[1].getFace()[1][1].getColor();
rightColor = cubeArr[2].getFace()[1][1].getColor();
solveCorner(topColor, frontColor, rightColor);
rotate(1);
frontColor = cubeArr[1].getFace()[1][1].getColor();
rightColor = cubeArr[2].getFace()[1][1].getColor();
solveCorner(topColor, frontColor, rightColor);
rotate(1);
frontColor = cubeArr[1].getFace()[1][1].getColor();
rightColor = cubeArr[2].getFace()[1][1].getColor();
solveCorner(topColor, frontColor, rightColor);
rotate(1);
}
void Cube::solveTop(){
solveTopCross();
solveTopCorners();
}
void Cube::solveMiddleSide(string c1, string c2){
int k = 0;
while(!(c1 == cubeArr[1].getFace()[1][2].getColor() && c2 == cubeArr[2].getFace()[1][0].getColor())){
if(c1==cubeArr[0].getFace()[2][1].getColor() && c2 == cubeArr[1].getFace()[0][1].getColor()){
spinUi(); step3bMove();
}
else if(c2==cubeArr[0].getFace()[2][1].getColor() && c1 == cubeArr[1].getFace()[0][1].getColor()){
step3aMove();
}
else if(c1 == cubeArr[0].getFace()[1][0].getColor() && c2 == cubeArr[4].getFace()[0][1].getColor()){
spinU(); spinU(); step3bMove();
}
else if(c2 == cubeArr[0].getFace()[1][0].getColor() && c1 == cubeArr[4].getFace()[0][1].getColor()){
spinUi(); step3aMove();
}
else if(c1 == cubeArr[0].getFace()[1][2].getColor() && c2 == cubeArr[2].getFace()[0][1].getColor()){
step3bMove();
}
else if(c2 == cubeArr[0].getFace()[1][2].getColor() && c1 == cubeArr[2].getFace()[0][1].getColor()){
spinU(); step3aMove();
}
else if(c1 == cubeArr[0].getFace()[0][1].getColor() && c2 == cubeArr[3].getFace()[0][1].getColor()){
spinU(); step3bMove();
}
else if(c2 == cubeArr[0].getFace()[0][1].getColor() && c1 == cubeArr[3].getFace()[0][1].getColor()){
spinU(); spinU(); step3aMove();
}
else if((c1 == cubeArr[1].getFace()[1][0].getColor() && c2 == cubeArr[4].getFace()[1][2].getColor()) || (c2 == cubeArr[1].getFace()[1][0].getColor() && c1 == cubeArr[4].getFace()[1][2].getColor())){
rotate(2); step3aMove(); rotate(1);
}
else if((c1 == cubeArr[4].getFace()[1][0].getColor() && c2 == cubeArr[3].getFace()[1][2].getColor()) || (c2 == cubeArr[4].getFace()[1][0].getColor() && c1 == cubeArr[3].getFace()[1][2].getColor())) {
rotate(1); rotate(1); step3aMove(); rotate(1); rotate(1);
}
else if(c2 == cubeArr[1].getFace()[1][2].getColor() && c1 == cubeArr[2].getFace()[1][0].getColor()){
step3aMove();
}
else if((c1 == cubeArr[2].getFace()[1][2].getColor() && c2 == cubeArr[3].getFace()[1][0].getColor()) || (c2 == cubeArr[2].getFace()[1][2].getColor() && c1 == cubeArr[3].getFace()[1][0].getColor())){
rotate(1); step3aMove(); rotate(2);
}
k += 1;
}
}
void Cube::solveMiddleRow(){
string frontColor = cubeArr[1].getFace()[1][1].getColor();
string rightColor = cubeArr[2].getFace()[1][1].getColor();
solveMiddleSide(frontColor, rightColor);
rotate(1);
frontColor = cubeArr[1].getFace()[1][1].getColor();
rightColor = cubeArr[2].getFace()[1][1].getColor();
solveMiddleSide(frontColor, rightColor);
rotate(1);
frontColor = cubeArr[1].getFace()[1][1].getColor();
rightColor = cubeArr[2].getFace()[1][1].getColor();
solveMiddleSide(frontColor, rightColor);
rotate(1);
frontColor = cubeArr[1].getFace()[1][1].getColor();
rightColor = cubeArr[2].getFace()[1][1].getColor();
solveMiddleSide(frontColor, rightColor);
rotate(1);
}
void Cube::solveFinalCross(){
string topColor = cubeArr[0].getFace()[1][1].getColor(); bool flip = true;
while(!((cubeArr[0].getFace()[0][1].getColor() == topColor) && (cubeArr[0].getFace()[1][0].getColor() == topColor) && (cubeArr[0].getFace()[1][2].getColor() == topColor) && (cubeArr[0].getFace()[2][1].getColor() == topColor))){
if(!((cubeArr[0].getFace()[0][1].getColor() == topColor) || (cubeArr[0].getFace()[1][0].getColor() == topColor) || (cubeArr[0].getFace()[1][2].getColor() == topColor) || (cubeArr[0].getFace()[2][1].getColor() == topColor))){
step4Move();
}
else if(((cubeArr[0].getFace()[0][1].getColor() == topColor) && !(cubeArr[0].getFace()[2][1].getColor() == topColor)) || ((cubeArr[0].getFace()[1][0].getColor() == topColor) && !(cubeArr[0].getFace()[1][2].getColor() == topColor))){
if((cubeArr[0].getFace()[0][1].getColor() == topColor) && (cubeArr[0].getFace()[1][0].getColor() == topColor)){
step4Move();
}
else spinU();
}
else{
if((cubeArr[0].getFace()[1][0].getColor() == topColor) && (cubeArr[0].getFace()[1][2].getColor() == topColor)){
step4Move();
}
else spinU();
}
}
int k = 0;
while(!((cubeArr[1].getFace()[1][1].getColor() == cubeArr[1].getFace()[0][1].getColor()) && (cubeArr[2].getFace()[1][1].getColor() == cubeArr[2].getFace()[0][1].getColor()) &&
(cubeArr[3].getFace()[1][1].getColor() == cubeArr[3].getFace()[0][1].getColor()) && (cubeArr[4].getFace()[1][1].getColor() == cubeArr[4].getFace()[0][1].getColor()))){
k += 1;
if((cubeArr[1].getFace()[0][1].getColor() == cubeArr[4].getFace()[1][1].getColor()) && (cubeArr[4].getFace()[0][1].getColor() == cubeArr[1].getFace()[1][1].getColor())){
step5Move(); spinU(); flip = false;
}
else if((cubeArr[2].getFace()[0][1].getColor() == cubeArr[3].getFace()[1][1].getColor()) && (cubeArr[3].getFace()[0][1].getColor() == cubeArr[2].getFace()[1][1].getColor())){
spinU(); spinU(); step5Move(); spinUi(); flip = false;
}
else if (k==4 && flip) step5Move(); //&& (cubeArr[1].getFace()[0][1].getColor() == cubeArr[1].getFace()[1][1].getColor()))
else spinU();
}
}
void Cube::solveFinalCorners(){
string topColor = cubeArr[0].getFace()[1][1].getColor();
while(!((cubeArr[0].getFace()[0][0].getColor() == topColor) && (cubeArr[0].getFace()[2][0].getColor() == topColor) && (cubeArr[0].getFace()[0][2].getColor() == topColor) && (cubeArr[0].getFace()[2][2].getColor() == topColor))){
if (!((cubeArr[0].getFace()[0][0].getColor() == topColor) || (cubeArr[0].getFace()[2][0].getColor() == topColor) || (cubeArr[0].getFace()[0][2].getColor() == topColor) || (cubeArr[0].getFace()[2][2].getColor() == topColor))){
if (cubeArr[4].getFace()[0][2].getColor() == topColor) step5Move();
else spinU();
}
else if(!(cubeArr[0].getFace()[0][0].getColor() == topColor) && (cubeArr[0].getFace()[2][0].getColor() == topColor) && !(cubeArr[0].getFace()[0][2].getColor() == topColor) && !(cubeArr[0].getFace()[2][2].getColor() == topColor)){
step5Move();
}
else if((cubeArr[0].getFace()[0][0].getColor() == topColor) && (cubeArr[0].getFace()[2][0].getColor() == topColor)){
if(cubeArr[1].getFace()[0][0].getColor() == topColor) step5Move();
else spinU();
}
else if((cubeArr[0].getFace()[0][0].getColor() == topColor) && (cubeArr[0].getFace()[0][2].getColor() == topColor)){
if(cubeArr[1].getFace()[0][0].getColor() == topColor) step5Move();
else spinU();
}
else if((cubeArr[0].getFace()[0][0].getColor() == topColor) && (cubeArr[0].getFace()[2][2].getColor() == topColor)){
if(cubeArr[1].getFace()[0][0].getColor() == topColor) step5Move();
else spinU();
}
else if((cubeArr[0].getFace()[2][0].getColor() == topColor) && (cubeArr[0].getFace()[0][2].getColor() == topColor)){
if(cubeArr[1].getFace()[0][0].getColor() == topColor) step5Move();
else spinU();
}
else if((cubeArr[0].getFace()[2][0].getColor() == topColor) && (cubeArr[0].getFace()[2][2].getColor() == topColor)){
if(cubeArr[1].getFace()[0][0].getColor() == topColor) step5Move();
else spinU();
}
else if((cubeArr[0].getFace()[0][2].getColor() == topColor) && (cubeArr[0].getFace()[2][2].getColor() == topColor)){
if(cubeArr[1].getFace()[0][0].getColor() == topColor) step5Move();
else spinU();
}
else spinU();
}
}
bool Cube::checkColors(Face face1, Face face2, Face face3, string c1, string c2, string c3){
bool verified = true;
string f1 = face1.getFace()[1][1].getColor(); string f2 = face2.getFace()[1][1].getColor(); string f3 = face3.getFace()[1][1].getColor();
if( (c1!=f1) && (c1 != f2) && (c1 != f3) ) verified = false;
if( (c2!=f1) && (c2 != f2) && (c2 != f3) ) verified = false;
if( (c3!=f1) && (c3 != f2) && (c3 != f3) ) verified = false;
return verified;
}
void Cube::finishCube(){
string f0 = cubeArr[0].getFace()[1][1].getColor(); string f1 = cubeArr[1].getFace()[1][1].getColor(); string f2 = cubeArr[2].getFace()[1][1].getColor();
string f3 = cubeArr[3].getFace()[1][1].getColor(); string f4 = cubeArr[4].getFace()[1][1].getColor(); int k = 0;
while(!checkColors(cubeArr[0], cubeArr[1], cubeArr[2], cubeArr[0].getFace()[2][2].getColor(), cubeArr[1].getFace()[0][2].getColor(), cubeArr[2].getFace()[0][0].getColor())){
rotate(1);
k += 1;
if (k == 4) step6Move();
}
while(!(checkColors(cubeArr[0], cubeArr[1], cubeArr[2], cubeArr[0].getFace()[2][2].getColor(), cubeArr[1].getFace()[0][2].getColor(), cubeArr[2].getFace()[0][0].getColor())
&& checkColors(cubeArr[0], cubeArr[1], cubeArr[4], cubeArr[0].getFace()[2][0].getColor(), cubeArr[1].getFace()[0][0].getColor(), cubeArr[4].getFace()[0][2].getColor())
&& checkColors(cubeArr[0], cubeArr[2], cubeArr[3], cubeArr[0].getFace()[0][2].getColor(), cubeArr[2].getFace()[0][2].getColor(), cubeArr[3].getFace()[0][0].getColor())
&& checkColors(cubeArr[0], cubeArr[3], cubeArr[4], cubeArr[0].getFace()[0][0].getColor(), cubeArr[3].getFace()[0][2].getColor(), cubeArr[4].getFace()[0][0].getColor()))){
step6Move();
}
while(!((cubeArr[1].getFace()[0][0].getColor() == cubeArr[1].getFace()[1][1].getColor()) && (cubeArr[2].getFace()[0][0].getColor() == cubeArr[2].getFace()[1][1].getColor()) &&
(cubeArr[3].getFace()[0][0].getColor() == cubeArr[3].getFace()[1][1].getColor()) && (cubeArr[4].getFace()[0][0].getColor() == cubeArr[4].getFace()[1][1].getColor()))){
while(!(cubeArr[0].getFace()[2][2].getColor() == f0)){
step2Move();
}
spinU();
}
}
void Cube::solveCube(){
solutionVector.clear();
solveTop();
setTop(2); setTop(2);
solveMiddleRow();
solveFinalCross();
//solveFinalCorners();
finishCube();
}

void Cube::printVector(){
    QString filenamez = "input.txt";
    QFile filez(filenamez);
    if(filez.open(QIODevice::ReadWrite|QIODevice::Truncate)){
        QTextStream streamz(&filez);

    QString tempx;

solutionVector.push_back("");
int k = 0; int oldk = 0; bool print = false;
for(unsigned int i = 0; i < solutionVector.size(); i++){
if(i == 0) k += 1;
else if(solutionVector.at(i) == solutionVector.at(i-1)) k += 1;
else {
oldk = k;
k = 1;
print = true;
}
if (print){
if (oldk==1) {
 tempx =QString::fromStdString(solutionVector.at(i-1));
    streamz<<tempx<<" ";
}
else{
    tempx =QString::fromStdString(solutionVector.at(i-1));
    streamz<<tempx<<"x"<<oldk<<" ";
}
print = false;
}
}

}

cout<<"\n";
}


/*  QString filenamez = "input.txt";
  QFile filez(filenamez);
  if(filez.open(QIODevice::ReadWrite|QIODevice::Truncate))
  {
      QTextStream streamz(&filez);



      QString tempx;

      for(int i=0;i<tempstring.size();i++){

          tempx =QString::fromStdString(tempstring[i]);
          streamz << tempx<<"\n";

      }


  }
*/



void Cube::printCube(){
Face * activeFace;
activeFace = &cubeArr[0];
for (int i = 0; i < 3; i ++) {
cout<<"\t\t\t";
for (int j = 0; j < 3; j++){
cout<< activeFace->getFace()[i][j].getColor()<<"\t";
}
cout<<"\n";
}
for (int i = 0; i < 3; i ++) {
for(int k = 1; k < 5; k++){
for (int j = 0; j < 3; j++){
if (k == 1) activeFace = &cubeArr[4];
else activeFace = &cubeArr[k-1];
cout<< activeFace->getFace()[i][j].getColor()<<"\t";
}
}
cout<<"\n";
}
activeFace = &cubeArr[5];
for (int i = 0; i < 3; i ++) {
cout<<"\t\t\t";
for (int j = 0; j < 3; j++){
cout<< activeFace->getFace()[i][j].getColor()<<"\t";
}
cout<<"\n";
}
}

Face::Face(){
    faceArr = NULL;
}
Face::Face(Tile r0c0, Tile r0c1, Tile r0c2, Tile r1c0, Tile r1c1, Tile r1c2, Tile r2c0, Tile r2c1, Tile r2c2){
    faceArr = new Tile * [3];
    for(int i = 0; i < 3; i++){
        faceArr[i] = new Tile[3];
    }
    faceArr[0][0] = r0c0;
    faceArr[0][1] = r0c1;
    faceArr[0][2] = r0c2;
    faceArr[1][0] = r1c0;
    faceArr[1][1] = r1c1;
    faceArr[1][2] = r1c2;
    faceArr[2][0] = r2c0;
    faceArr[2][1] = r2c1;
    faceArr[2][2] = r2c2;
}
Tile ** Face::getFace(){
    return faceArr;
}
void Face::rotate(){
    Tile r0c0; Tile r0c1; Tile r0c2; Tile r1c0; Tile r1c2; Tile r2c0; Tile r2c1; Tile r2c2;
    r0c0 = faceArr[0][0];
    r0c1 = faceArr[0][1];
    r0c2 = faceArr[0][2];
    r1c0 = faceArr[1][0];
    r1c2 = faceArr[1][2];
    r2c0 = faceArr[2][0];
    r2c1 = faceArr[2][1];
    r2c2 = faceArr[2][2];
    faceArr[0][0] = r2c0;
    faceArr[0][1] = r1c0;
    faceArr[0][2] = r0c0;
    faceArr[1][0] = r2c1;
    faceArr[1][2] = r0c1;
    faceArr[2][0] = r2c2;
    faceArr[2][1] = r1c2;
    faceArr[2][2] = r0c2;
}
void Face::rotateI(){
    Tile r0c0; Tile r0c1; Tile r0c2; Tile r1c0; Tile r1c2; Tile r2c0; Tile r2c1; Tile r2c2;
    r0c0 = faceArr[0][0];
    r0c1 = faceArr[0][1];
    r0c2 = faceArr[0][2];
    r1c0 = faceArr[1][0];
    r1c2 = faceArr[1][2];
    r2c0 = faceArr[2][0];
    r2c1 = faceArr[2][1];
    r2c2 = faceArr[2][2];
    faceArr[0][0] = r0c2;
    faceArr[0][1] = r1c2;
    faceArr[0][2] = r2c2;
    faceArr[1][0] = r0c1;
    faceArr[1][2] = r2c1;
    faceArr[2][0] = r0c0;
    faceArr[2][1] = r1c0;
    faceArr[2][2] = r2c0;
}
bool Cube::CheckColors(){ // checks to see if the inputted cube has the appropriate number of each color


// variables for keeping track of each color
    int green = 0;
    int red = 0;
    int blue = 0;
    int orange = 0;
    int yellow = 0;
    int white = 0;

// loop to go through and access each tile in the cube, summing up the number of each color
    for (int k = 0; k < 6; k++)
    {
        for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (cubeArr[k].getFace()[i][k].getColor().compare("green") == 0)
                        green++;
                    else if (cubeArr[k].getFace()[i][k].getColor().compare("red") == 0)
                        red++;
                    else if (cubeArr[k].getFace()[i][k].getColor().compare("blue") == 0)
                        blue++;
                    else if (cubeArr[k].getFace()[i][k].getColor().compare("orange") == 0)
                        orange++;
                    else if (cubeArr[k].getFace()[i][k].getColor().compare("yellow") == 0)
                        yellow++;
                    else if (cubeArr[k].getFace()[i][k].getColor().compare("white") == 0)
                        white++;
                }
            }
    }

    if ( (green == 9) && (red == 9) && (blue == 9) && (orange == 9) && (yellow == 9) && (white == 9) )  // checks to see if all the colors adds up to the appropriate amount
        return true;
    else
        return false;
}
bool Cube::CheckRepeats(){  // checks to see if any of the same color share the same relative positioning

// first three for loops isolates a cell to be compared
    for (int k = 0; k < 6; k++)
    {
        for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    for (int m = 0; m < 6; m++) // last for loop is then used to compare to other relative positions
                        {
                            if (m != k)  // case when you are comparing an object to itself will of course result in a "repeat" thus is excluded
                            {
                                if (cubeArr[k].getFace()[i][k].getColor().compare(cubeArr[m].getFace()[i][k].getColor()) == 0)
                                    return false;
                            }
                        }
                }
            }
    }

    return true;
}
bool Cube::Valid(){  // combines the previous functions to evaluate if the overall cube is valid or not
    if (this->CheckColors()== true && this->CheckRepeats() == true)  // checks to see if the cube passes both tests and returns true if the cube does
        return true;
    else  // if it doesn't the functions returns false
        return false;
}



int solver()
{
    Cube myCube;
    Face myFace1;
    Face myFace2;
    Face  myFace3;
    Face myFace4;
    Face  myFace5;
    Face  myFace6;
    Tile  r0c0;
    Tile r0c1;
    Tile r0c2;
    Tile r1c0;
    Tile r1c1;
    Tile r1c2;
    Tile r2c0;
    Tile r2c1;
    Tile r2c2;
//create main strings 1- 6

vector<char> inputs;
string face [48];
for(int i =0; i<48;i++){
    face[i] = "";
}
ifstream myfile;
myfile.open("output.txt");
char delim = ',';
if (myfile.is_open()){
            while(myfile.get(delim)){
            inputs.push_back(delim);
            }
        }
 myfile.close();


 int j = 0;
 int pos = 0;
 while (j<48){
        if(inputs[pos]!=','){
            face[j] += inputs[pos];
            pos++;
        }
        if(inputs[pos]==','){
            j++;
            pos++;
        }
}
for (int i=0; i<48; i++){   //0-7,8-15,16-23,24-31,32-39,40-47
    if(face[i]=="orange"){
        face[i] = "O";
    }
    if(face[i]=="red"){
        face[i] = "R";
    }
    if(face[i]=="yellow"){
        face[i] = "Y";
    }
    if(face[i]=="blue"){
        face[i] = "B";
    }
    if(face[i]=="white"){
        face[i] = "W";
    }
    if(face[i]=="green"){
        face[i] = "G";
    }
}

//inside each step get the colors into the
for(int i = 0; i < 6; i ++){
            if (i==0){
            r0c0 = Tile(face[0]);
            r0c1 = Tile(face[1]);
            r0c2 = Tile(face[2]);
            r1c0 = Tile(face[3]);
            r1c1 = Tile("W");
            r1c2 = Tile(face[4]);
            r2c0 = Tile(face[5]);
            r2c1 = Tile(face[6]);
            r2c2 = Tile(face[7]);
            }

            if (i==1){
            r0c0 = Tile(face[16]);
            r0c1 = Tile(face[17]);
            r0c2 = Tile(face[18]);
            r1c0 = Tile(face[19]);
            r1c1 = Tile("R");
            r1c2 = Tile(face[20]);
            r2c0 = Tile(face[21]);
            r2c1 = Tile(face[22]);
            r2c2 = Tile(face[23]);
            }

            if (i==2){
            r0c0 = Tile(face[24]);
            r0c1 = Tile(face[25]);
            r0c2 = Tile(face[26]);
            r1c0 = Tile(face[27]);
            r1c1 = Tile("B");
            r1c2 = Tile(face[28]);
            r2c0 = Tile(face[29]);
            r2c1 = Tile(face[30]);
            r2c2 = Tile(face[31]);
            }

            if (i==3){
            r0c0 = Tile(face[32]);
            r0c1 = Tile(face[33]);
            r0c2 = Tile(face[34]);
            r1c0 = Tile(face[35]);
            r1c1 = Tile("O");
            r1c2 = Tile(face[36]);
            r2c0 = Tile(face[37]);
            r2c1 = Tile(face[38]);
            r2c2 = Tile(face[39]);
            }

            if (i==4){
            r0c0 = Tile(face[8]);
            r0c1 = Tile(face[9]);
            r0c2 = Tile(face[10]);
            r1c0 = Tile(face[11]);
            r1c1 = Tile("G");
            r1c2 = Tile(face[12]);
            r2c0 = Tile(face[13]);
            r2c1 = Tile(face[14]);
            r2c2 = Tile(face[15]);
            }

            if (i==5){
            r0c0 = Tile(face[40]);
            r0c1 = Tile(face[41]);
            r0c2 = Tile(face[42]);
            r1c0 = Tile(face[43]);
            r1c1 = Tile("Y");
            r1c2 = Tile(face[44]);
            r2c0 = Tile(face[45]);
            r2c1 = Tile(face[46]);
            r2c2 = Tile(face[47]);
            }


            if(i == 0) myFace1 =  Face(r0c0, r0c1, r0c2, r1c0, r1c1, r1c2, r2c0, r2c1, r2c2);
            else if(i==1)myFace2 =  Face(r0c0, r0c1, r0c2, r1c0, r1c1, r1c2, r2c0, r2c1, r2c2);
            else if(i==2)myFace3 =  Face(r0c0, r0c1, r0c2, r1c0, r1c1, r1c2, r2c0, r2c1, r2c2);
            else if(i==3)myFace4 =  Face(r0c0, r0c1, r0c2, r1c0, r1c1, r1c2, r2c0, r2c1, r2c2);
            else if(i == 4)myFace5 =  Face(r0c0, r0c1, r0c2, r1c0, r1c1, r1c2, r2c0, r2c1, r2c2);
            else myFace6 = Face(r0c0, r0c1, r0c2, r1c0, r1c1, r1c2, r2c0, r2c1, r2c2);
        }
//below commented out sections with 3 comments are for testing
    myCube = Cube(myFace1, myFace2,myFace3,myFace4,myFace5,myFace6);

  ///  cout<<" the code hasn't broken 1\n";
   /// myCube.printCube();
  ///  cout<<" the code hasn't broken 2\n";

    myCube.solveCube();
     cout<<" works\n";
    myCube.printCube();
    cout<<" works2\n";
    myCube.printVector();
 ///   bool cont = true;
 ///   cout<<"1 - F, 2 - Fi, 3 - L, 4 - Li, 5 - R, 6 - Ri, \n 7 - U, 8 - Ui, 9 - D, 10 - Di, 11 - Print, 12 - RotateCW, \n 13 - RotateCCW, 14 - RotateFW, 15 - Rotate BW, 16 - RotateSideCCW, 17 - RotateSideCW 18 - Step1Move \n 19 - Step2Move 20 - Step3aMove 21 - Step3bMove 22 - Step4Move \n 23 - Step5Move 24 - Step6Move 25 - Solve Top, 26 - Solve Cube, 27 - Exit 28 - Print Instructions\n";

    }



////////////////////////////////QT code below//////////////////////////////////////////////////

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{

    ui->setupUi(this);

    /****************************************************/
        /****************************************************/
        //listing steps one by one
        buttoncount = 0;
        step=0;


       /* QFile file("input.txt");
        if(!file.open(QIODevice::ReadOnly|QIODevice::Truncate)){
            QMessageBox::information(0, "info", file.errorString());
        }else{

        fstream fileread("input.txt");
        string subline = "";
        QString temp = "";


        while(fileread >> subline)
        {
            temp = QString::fromStdString(subline);
            steps.push_back(temp);
        }

       }*/
        /****************************************************/
        /****************************************************/


    //to give all squares their initial colors 
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
    //white count initialized
     white0count = 0;
     white1count = 0;
     white2count = 0;
     white3count = 0;
     white4count = 0;
     white5count = 0;
     white6count = 0;
     white7count = 0;
     white8count = 0;

    //red count initialized
     red0count = 1;
     red1count = 1;
     red2count = 1;
     red3count = 1;
     red4count = 1;
     red5count = 1;
     red6count = 1;
     red7count = 1;
     red8count = 1;

    //green count initialized
     green0count = 4;
     green1count = 4;
     green2count = 4;
     green3count = 4;
     green4count = 4;
     green5count = 4;
     green6count = 4;
     green7count = 4;
     green8count = 4;


     //blue count initialized
      blue0count = 3;
      blue1count = 3;
      blue2count = 3;
      blue3count = 3;
      blue4count = 3;
      blue5count = 3;
      blue6count = 3;
      blue7count = 3;

     //yellow count initialized
      yellow0count = 2;
      yellow1count = 2;
      yellow2count = 2;
      yellow3count = 2;
      yellow4count = 2;
      yellow5count = 2;
      yellow6count = 2;
      yellow7count = 2;

     //orange count initialized
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
    green8count++;

    if(green8count == 6)
    {
       green8count = 0;
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


//Begin working on displaying steps 

void MainWindow::on_SolveAllSteps_clicked()
{
    buttoncount=0;

    QFile file("input.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());

    QTextStream in(&file);

    ui->textBrowser->setText(in.readAll());

}
//to create the steps to solve the mixed up cube
void MainWindow::on_CommitCube_clicked(){
    buttoncount=0;
    QString tempy= "";

    for(int gg=0;gg<steps.size();gg++){
             steps[gg]=tempy;
    }
    for(int gg=0;gg<steps.size();gg++){
             steps.pop_back();
    }



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


    solver();

    QFile file2("input.txt");
    if(!file2.open(QIODevice::ReadOnly|QIODevice::Truncate)){
        QMessageBox::information(0, "info", file2.errorString());
    }else{

    fstream fileread("input.txt");
    string subline = "";
    QString temp = "";

    //save steps to an array for displaying one by one 
    while(fileread >> subline)
    {
        temp = QString::fromStdString(subline);
        steps.push_back(temp);
    }

   }

}





void MainWindow::on_SolveOneStep_clicked(){

    if(buttoncount == (steps.size())){
          ui->textBrowser->setText("Finished");
          buttoncount=0;
      }else{
      QString dis = steps[buttoncount];
      ui->textBrowser->setText(dis);
      buttoncount++;
    }

}



void MainWindow::on_HelpButton_clicked()
{
    buttoncount=0;

    QFile file("help.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());

    QTextStream in(&file);

    ui->textBrowser->setText(in.readAll());
}

