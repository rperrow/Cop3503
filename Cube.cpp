#include<vector>
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
	cubeArr[1].rotate();                                      //the front face must also rotate
	solutionVector.push_back("F");                            //add the instruction to the solution vector
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
		cubeArr[3].rotate(); cubeArr[3].rotate();          //the back face needs to be rotated twice - dimensions get tricky
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
	solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back(); solutionVector.pop_back();     //remove last 4 steps to tell user simply "step1move"
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

void Cube::solveSide(string c0, string c1){      //based on where the specific side piece is, do specific steps
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

void Cube::solveTopCross(){                                             //solve for the entire top cross
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

void Cube::solveCorner(string c0, string c1, string c2){                //based on specific location, do specific steps
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
		step2Move();                                      //keep performing step 2 move until in right spot
		f0 = cubeArr[0].getFace()[2][2].getColor();
		f1 = cubeArr[1].getFace()[0][2].getColor();
		f2 = cubeArr[2].getFace()[0][0].getColor();
	}
}

void Cube::solveTopCorners(){                                      //solve for each of the top corners
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

void Cube::solveTop(){               //solve the entirety of the top part of the cube
	solveTopCross();
	solveTopCorners();
}

void Cube::solveMiddleSide(string c1, string c2){            //perform a while loop until the right center piece is correct
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

void Cube::solveMiddleRow(){                                      //find and correct each of the center pieces
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

void Cube::solveFinalCross(){                                                     //solves for the final cross
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
			else if (k==4 && flip)  step5Move(); //&& (cubeArr[1].getFace()[0][1].getColor() == cubeArr[1].getFace()[1][1].getColor()))
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

bool Cube::checkColors(Face face1, Face face2, Face face3, string c1, string c2, string c3){   //quick check to see how mant steps need to be taken
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
	//solveFinalCorners();     didn't even need this :(
	finishCube();
}

vector<string> Cube::getVector(){
	return solutionVector;
}

void Cube::printVector(){
	solutionVector.push_back("");
	int k = 0; int oldk = 0; bool print = false;
	for(int i = 0; i < solutionVector.size(); i++){
		if(i == 0) k += 1;
		else if(solutionVector.at(i) == solutionVector.at(i-1)) k += 1;
		else {
			oldk = k;
			k = 1;
			print = true;
		}
		if (print){
			if (oldk==1) cout<<solutionVector.at(i-1)<<" ";
			else cout<<solutionVector.at(i-1)<<"x"<<oldk<<" ";   //tell the user how many times to make the specified move
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
