#include<iostream>
#include<string>
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

//unfinished
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
bool Cube::CheckColors() // checks to see if the inputted cube has the appropriate number of each color
{

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
bool Cube::CheckRepeats()  // checks to see if any of the same color share the same relative positioning
{
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
bool Cube::Valid()  // combines the previous functions to evaluate if the overall cube is valid or not
{
	if (this->CheckColors()== true && this->CheckRepeats() == true)  // checks to see if the cube passes both tests and returns true if the cube does
		return true;
	else  // if it doesn't the functions returns false
		return false;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`

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

	for(int i = 0; i < 6; i ++){
			if (i==0){
			r0c0 = Tile("G");
			r0c1 = Tile("G");
			r0c2 = Tile("G");
			r1c0 = Tile("G");
			r1c1 = Tile("G");
			r1c2 = Tile("G");
			r2c0 = Tile("G");
			r2c1 = Tile("G");
			r2c2 = Tile("G");
			}

			if (i==1){
			r0c0 = Tile("O");
			r0c1 = Tile("O");
			r0c2 = Tile("O");
			r1c0 = Tile("O");
			r1c1 = Tile("O");
			r1c2 = Tile("O");
			r2c0 = Tile("O");
			r2c1 = Tile("O");
			r2c2 = Tile("O");
			}
			
			if (i==2){
			r0c0 = Tile("Y");
			r0c1 = Tile("Y");
			r0c2 = Tile("Y");
			r1c0 = Tile("Y");
			r1c1 = Tile("Y");
			r1c2 = Tile("Y");
			r2c0 = Tile("Y");
			r2c1 = Tile("Y");
			r2c2 = Tile("Y");
			}
			
			if (i==3){
			r0c0 = Tile("R");
			r0c1 = Tile("R");
			r0c2 = Tile("R");
			r1c0 = Tile("R");
			r1c1 = Tile("R");
			r1c2 = Tile("R");
			r2c0 = Tile("R");
			r2c1 = Tile("R");
			r2c2 = Tile("R");
			}
			
			if (i==4){
			r0c0 = Tile("W");
			r0c1 = Tile("W");
			r0c2 = Tile("W");
			r1c0 = Tile("W");
			r1c1 = Tile("W");
			r1c2 = Tile("W");
			r2c0 = Tile("W");
			r2c1 = Tile("W");
			r2c2 = Tile("W");
			}
			
			if (i==5){
			r0c0 = Tile("B");
			r0c1 = Tile("B");
			r0c2 = Tile("B");
			r1c0 = Tile("B");
			r1c1 = Tile("B");
			r1c2 = Tile("B");
			r2c0 = Tile("B");
			r2c1 = Tile("B");
			r2c2 = Tile("B");
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
	
	cout<<"1 - F, 2 - Fi, 3 - L, 4 - Li, 5 - R, 6 - Ri, \n 7 - U, 8 - Ui, 9 - D, 10 - Ti, 11 - Print, 12 - RotateCW, \n 13 - RotateCCW, 14 - RotateFW, 15 - Rotate BW, 16 - RotateSideCCW, 17 - RotateSideCW 18 - Step1Move \n 19 - Exit \n";
	
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
	if(k == 16) {myCube.rotate(1); myCube.printCube();}
	if(k == 17) {myCube.rotate(2); myCube.printCube();}
	if(k == 18) {myCube.step1Move(); myCube.printCube();}
	else if (k==19) cont = false;
	}
	//system("pause");
	return 0;
	}
