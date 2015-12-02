#include<iostream>
#include<string>
#include"RCSolver.h"

using namespace std;

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
}

void Cube::setTop(int k){
	if(k==1){
		Face temp = cubeArr[0];
		cubeArr[0] = cubeArr[1];
		cubeArr[1] = cubeArr[5];
		cubeArr[5] = cubeArr[3];
		cubeArr[3] = temp;
		cubeArr[2].rotate();
		cubeArr[4].rotateI();
	}
	if(k==2){
		Face temp = cubeArr[0];
		cubeArr[0] = cubeArr[2];
		cubeArr[2] = cubeArr[5];
		cubeArr[5] = cubeArr[4];
		cubeArr[4] = temp;
		cubeArr[1].rotateI();
		cubeArr[3].rotate();
	}
	if(k==3){
		Face temp = cubeArr[0];
		cubeArr[0] = cubeArr[3];
		cubeArr[3] = cubeArr[5];
		cubeArr[5] = cubeArr[1];
		cubeArr[1] = temp;
		cubeArr[2].rotateI();
		cubeArr[4].rotate();
	}
	if(k==4){
		Face temp = cubeArr[0];
		cubeArr[0] = cubeArr[4];
		cubeArr[4] = cubeArr[5];
		cubeArr[5] = cubeArr[2];
		cubeArr[2] = temp;
		cubeArr[1].rotate();
		cubeArr[3].rotateI();
	}

}

void Cube::rotate(int k){
	if(k==2){
	Face temp = cubeArr[1];
		cubeArr[1]=cubeArr[2];
		cubeArr[2]=cubeArr[3];
		cubeArr[3]=cubeArr[4];
		cubeArr[4] = temp;
		cubeArr[0].rotate();
		cubeArr[5].rotateI();
	}
	if(k==1){		
		Face temp = cubeArr[1];
		cubeArr[1]=cubeArr[4];
		cubeArr[4]=cubeArr[3];
		cubeArr[3]=cubeArr[2];
		cubeArr[2] = temp;		
		cubeArr[0].rotateI();
		cubeArr[5].rotate();
	}
}

void Cube::step1Move(){
	spinRi();
	spinU();
	spinFi();
	spinUi();
}

void Cube::step2Move(){
	spinRi();
	spinDi();
	spinR();
	spinD();
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
}

void Cube::step4Move(){
	spinF();
	spinR();
	spinU();
	spinRi();
	spinUi();
	spinFi();
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
}

void Cube::fixSideOrientation(){
	spinFi();
	spinU();
	spinLi();
	spinUi();
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
