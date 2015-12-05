#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include"RCSolver.h"

using namespace std;

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
solutionVector.push_back("FixSideOrientation");
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
if (oldk==1) cout<<solutionVector.at(i-1)<<" ";
else cout<<solutionVector.at(i-1)<<"x"<<oldk<<" ";
print = false;
}
}
cout<<"\n";
}
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



int main()
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
	
	myCube = Cube(myFace1, myFace2,myFace3,myFace4,myFace5,myFace6);
	bool cont = true;
	cout<<"1 - F, 2 - Fi, 3 - L, 4 - Li, 5 - R, 6 - Ri, \n 7 - U, 8 - Ui, 9 - D, 10 - Di, 11 - Print, 12 - RotateCW, \n 13 - RotateCCW, 14 - RotateFW, 15 - Rotate BW, 16 - RotateSideCCW, 17 - RotateSideCW 18 - Step1Move \n 19 - Step2Move 20 - Step3aMove 21 - Step3bMove 22 - Step4Move \n 23 - Step5Move 24 - Step6Move 25 - Solve Top, 26 - Solve Cube, 27 - Exit 28 - Print Instructions\n";
	while(cont){
	int k; cin>>k;
	//if(k == 1) myCube.spinF();
	//if(k == 2) myCube.spinFi();
	//if(k == 3) myCube.spinL();
	//if(k == 4) myCube.spinLi();
	//if(k == 5) myCube.spinR();
	//if(k == 6) myCube.spinRi();
	//if(k == 7) myCube.spinT();
	//if(k == 8) myCube.spinTi();
	//if(k == 9) myCube.spinD();
	//if(k == 10) myCube.spinDi();
	//if(k == 11) myCube.printCube();
	//if(k == 12) myCube.setTop(4);
	//if(k == 13) myCube.setTop(2);
	//if(k == 14) myCube.setTop(1);
	//if(k == 15) myCube.setTop(3);
	//else if (k==16) cont = false;
	// printCube with each action for testing purposes
	
	if(k == 1) {myCube.spinF(); myCube.printCube();}
	if(k == 2) {myCube.spinFi(); myCube.printCube();}
	if(k == 3) {myCube.spinL(); myCube.printCube();}
	if(k == 4) {myCube.spinLi(); myCube.printCube();}
	if(k == 5) {myCube.spinR(); myCube.printCube();}
	if(k == 6) {myCube.spinRi(); myCube.printCube();}
	if(k == 7) {myCube.spinU(); myCube.printCube();}
	if(k == 8) {myCube.spinUi(); myCube.printCube();}
	if(k == 9) {myCube.spinD(); myCube.printCube();}
	if(k == 10) {myCube.spinDi(); myCube.printCube();}
	if(k == 11) myCube.printCube();
	if(k == 12) {myCube.setTop(4); myCube.printCube();}
	if(k == 13) {myCube.setTop(2); myCube.printCube();}
	if(k == 14) {myCube.setTop(1); myCube.printCube();}
	if(k == 15) {myCube.setTop(3); myCube.printCube();}
	if(k == 16) {myCube.rotate(2); myCube.printCube();}
	if(k == 17) {myCube.rotate(1); myCube.printCube();}
	if(k == 18) {myCube.step1Move(); myCube.printCube();}
	if(k == 19) {myCube.step2Move(); myCube.printCube();}
	if(k == 20) {myCube.step3aMove(); myCube.printCube();}
	if(k == 21) {myCube.step3bMove(); myCube.printCube();}
	if(k == 22) {myCube.step4Move(); myCube.printCube();}
	if(k == 23) {myCube.step5Move(); myCube.printCube();}
	if(k == 24) {myCube.step6Move(); myCube.printCube();}
	if(k == 25) {myCube.solveTop(); myCube.printCube();}
	if(k == 26) {myCube.solveCube(); myCube.printCube();}
	if(k == 28) myCube.printVector();
	else if(k==27) cont = false;
	}
	//system("pause");
	return 0;
	}
