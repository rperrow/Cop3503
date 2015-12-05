#include <string>
#include"RCSolver.h"

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
					if (this->cubeArr[k].getFace()[i][j].getColor() == "G")
						green++;
					else if (this->cubeArr[k].getFace()[i][j].getColor() == "R")
						red++;
					else if (this->cubeArr[k].getFace()[i][j].getColor() == "B")
						blue++;
					else if (this->cubeArr[k].getFace()[i][j].getColor() == "O")
						orange++;
					else if (this->cubeArr[k].getFace()[i][j].getColor() == "Y")
						yellow++;
					else if (this->cubeArr[k].getFace()[i][j].getColor() == "W")
						white++;
				}
			}
	}

	if ( (green == 9) && (red == 9) && (blue == 9) && (orange == 9) && (yellow == 9) && (white == 9) )  // checks to see if all the colors adds up to the appropriate amount
		return true;
	else
		return false;
}
bool Cube::CheckSides(){  //checks to see if a side piecs has the same color on both sides
	
// first four for loops compares the front sides to see if any two colors share the same edge
	for (int i=0; i < 3; i++)
	{
		if (this->cubeArr[1].getFace()[0][i].getColor() == this->cubeArr[0].getFace()[2][i].getColor())
			return false;
	}
	for (int i=0; i < 3; i++)
	{
		if (this->cubeArr[1].getFace()[2][i].getColor() == this->cubeArr[5].getFace()[0][i].getColor())
			return false;
	}
	for (int i=0; i < 3; i++)
	{
		if (this->cubeArr[1].getFace()[i][0].getColor() == this->cubeArr[4].getFace()[i][2].getColor())
			return false;
	}
	for (int i=0; i < 3; i++)
	{
		if (this->cubeArr[1].getFace()[i][2].getColor() == this->cubeArr[2].getFace()[i][0].getColor())
			return false;
	}
	
// second four for loops compares the back sides to see if any two colors share the same edge
	for (int i=0; i < 3; i++)
	{
		if (this->cubeArr[3].getFace()[0][i].getColor() == this->cubeArr[0].getFace()[0][2-i].getColor())
			return false;
	}
	
	for (int i=0; i < 3; i++)
	{
		if (this->cubeArr[3].getFace()[2][i].getColor() == this->cubeArr[5].getFace()[2][2-i].getColor())
			return false;
	}
	
	for (int i=0; i < 3; i++)
	{
		if (this->cubeArr[3].getFace()[i][0].getColor() == this->cubeArr[4].getFace()[i][2].getColor())
			return false;
	}
	
	for (int i=0; i < 3; i++)
	{
		if (this->cubeArr[3].getFace()[i][2].getColor() == this->cubeArr[2].getFace()[i][0].getColor())
			return false;
	}

// checks the remaining sides to see if two of the same colored tiles share the same edge
	if (this->cubeArr[0].getFace()[1][0].getColor() == this->cubeArr[4].getFace()[0][1].getColor())
		return false;
	if (this->cubeArr[0].getFace()[1][2].getColor() == this->cubeArr[2].getFace()[0][1].getColor())
		return false;
	if (this->cubeArr[5].getFace()[1][0].getColor() == this->cubeArr[4].getFace()[2][1].getColor())
		return false;
	if (this->cubeArr[5].getFace()[1][2].getColor() == this->cubeArr[2].getFace()[2][1].getColor())
		return false;
		
	return true;
}
bool Cube::Valid(){  // combines the previous functions to evaluate if the overall cube is valid or not
	if ((this->CheckColors() == true) && (this->CheckSides() == true))  // checks to see if the cube passes all of the tests and returns true if the cube does
		return true;
	else  // if it doesn't the functions returns false
		return false;
}
