#include<iostream>
#include<string>
#include"RCSolver.h"

using namespace std;

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
