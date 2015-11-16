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
	cubeArr[4].getFace()[0][2] = temp0;
	cubeArr[4].getFace()[1][2] = temp1;
	cubeArr[4].getFace()[2][2] = temp2;
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
	cubeArr[5].getFace()[0][2] = cubeArr[3].getFace()[0][2];
	cubeArr[5].getFace()[1][2] = cubeArr[3].getFace()[1][2];
	cubeArr[5].getFace()[2][2] = cubeArr[3].getFace()[2][2];
	cubeArr[3].getFace()[0][2] = temp0;
	cubeArr[3].getFace()[1][2] = temp1;
	cubeArr[3].getFace()[2][2] = temp2;
	cubeArr[2].rotate();
}

void Cube::spinRi(){
	Tile temp0; Tile temp1; Tile temp2;
	temp0 = cubeArr[0].getFace()[0][2];
	temp1 = cubeArr[0].getFace()[1][2];
	temp2 = cubeArr[0].getFace()[2][2];
	cubeArr[0].getFace()[0][2] = cubeArr[3].getFace()[0][2];
	cubeArr[0].getFace()[1][2] = cubeArr[3].getFace()[1][2];
	cubeArr[0].getFace()[2][2] = cubeArr[3].getFace()[2][2];
	cubeArr[3].getFace()[0][2] = cubeArr[5].getFace()[0][2];
	cubeArr[3].getFace()[1][2] = cubeArr[5].getFace()[1][2];
	cubeArr[3].getFace()[2][2] = cubeArr[5].getFace()[2][2];
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
	cubeArr[5].getFace()[0][0] = cubeArr[3].getFace()[0][0];
	cubeArr[5].getFace()[1][0] = cubeArr[3].getFace()[1][0];
	cubeArr[5].getFace()[2][0] = cubeArr[3].getFace()[2][0];
	cubeArr[3].getFace()[0][0] = temp0;
	cubeArr[3].getFace()[1][0] = temp1;
	cubeArr[3].getFace()[2][0] = temp2;
	cubeArr[4].rotateI();
}

void Cube::spinL(){
	Tile temp0; Tile temp1; Tile temp2;
	temp0 = cubeArr[0].getFace()[0][0];
	temp1 = cubeArr[0].getFace()[1][0];
	temp2 = cubeArr[0].getFace()[2][0];
	cubeArr[0].getFace()[0][0] = cubeArr[3].getFace()[0][0];
	cubeArr[0].getFace()[1][0] = cubeArr[3].getFace()[1][0];
	cubeArr[0].getFace()[2][0] = cubeArr[3].getFace()[2][0];
	cubeArr[3].getFace()[0][0] = cubeArr[5].getFace()[0][0];
	cubeArr[3].getFace()[1][0] = cubeArr[5].getFace()[1][0];
	cubeArr[3].getFace()[2][0] = cubeArr[5].getFace()[2][0];
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
	temp2 = cubeArr[1].getFace()[2][1];
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
	}
	if(k==2){
		Face temp = cubeArr[0];
		cubeArr[0] = cubeArr[2];
		cubeArr[2] = cubeArr[5];
		cubeArr[5] = cubeArr[4];
		cubeArr[4] = temp;
	}
	if(k==3){
		Face temp = cubeArr[0];
		cubeArr[0] = cubeArr[3];
		cubeArr[3] = cubeArr[5];
		cubeArr[5] = cubeArr[1];
		cubeArr[1] = temp;
	}
	if(k==4){
		Face temp = cubeArr[0];
		cubeArr[0] = cubeArr[4];
		cubeArr[4] = cubeArr[5];
		cubeArr[5] = cubeArr[2];
		cubeArr[2] = temp;
	}

}

void Cube::rotate(int k){
	if(k==1){
	Face temp = cubeArr[1];
		cubeArr[1]=cubeArr[2];
		cubeArr[2]=cubeArr[3];
		cubeArr[3]=cubeArr[4];
		cubeArr[4] = temp;
	}
	if(k==2){		
		Face temp = cubeArr[1];
		cubeArr[1]=cubeArr[4];
		cubeArr[4]=cubeArr[3];
		cubeArr[3]=cubeArr[2];
		cubeArr[2] = temp;		
	}
}

void Cube::step1Move(){
	//	this is unfinished

	spinRi();
	spinU();
	//spinFi();
	//spinUi();

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
