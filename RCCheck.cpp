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
bool Cube::CheckSides(){  //checks to see if a side piecs has the same color on both sides
	
// first four for loops compares the front sides to see if any two colors share the same edge
	for (int i=0; i < 3; i++)
	{
		if (cubeArr[1].getFace()[0][i].getColor().compare(cubeArr[0].getFace()[2][i].getColor()) == 0)
			return false;
	}
	for (int i=0; i < 3; i++)
	{
		if (cubeArr[1].getFace()[2][i].getColor().compare(cubeArr[5].getFace()[0][i].getColor()) == 0)
			return false;
	}
	for (int i=0; i < 3; i++)
	{
		if (cubeArr[1].getFace()[i][0].getColor().compare(cubeArr[4].getFace()[i][2].getColor()) == 0)
			return false;
	}
	for (int i=0; i < 3; i++)
	{
		if (cubeArr[1].getFace()[i][2].getColor().compare(cubeArr[2].getFace()[i][0].getColor()) == 0)
			return false;
	}
	
// second four for loops compares the back sides to see if any two colors share the same edge
	for (int i=0; i < 3; i++)
	{
		if (cubeArr[3].getFace()[0][i].getColor().compare(cubeArr[0].getFace()[0][i].getColor()) == 0)
			return false;
	}
	
	for (int i=0; i < 3; i++)
	{
		if (cubeArr[3].getFace()[2][i].getColor().compare(cubeArr[5].getFace()[2][i].getColor()) == 0)
			return false;
	}
	
	for (int i=0; i < 3; i++)
	{
		if (cubeArr[3].getFace()[i][0].getColor().compare(cubeArr[2].getFace()[i][2].getColor()) == 0)
			return false;
	}
	
	for (int i=0; i < 3; i++)
	{
		if (cubeArr[3].getFace()[i][2].getColor().compare(cubeArr[4].getFace()[i][0].getColor()) == 0)
			return false;
	}

// checks the remaining sides to see if two of the same colored tiles share the same edge
	if (cubeArr[0].getFace()[1][0].getColor().compare(cubeArr[4].getFace()[0][1].getColor()) == 0)
		return false;
	if (cubeArr[0].getFace()[1][2].getColor().compare(cubeArr[2].getFace()[0][1].getColor()) == 0)
		return false;
	if (cubeArr[5].getFace()[1][0].getColor().compare(cubeArr[4].getFace()[2][1].getColor()) == 0)
		return false;
	if (cubeArr[5].getFace()[1][2].getColor().compare(cubeArr[2].getFace()[2][1].getColor()) == 0)
		return false;
		
	return true;
}
bool Cube::Valid(){  // combines the previous functions to evaluate if the overall cube is valid or not
	if (this->CheckColors() == true && this->CheckRepeats() == true && this->CheckSides() == true)  // checks to see if the cube passes all of the tests and returns true if the cube does
		return true;
	else  // if it doesn't the functions returns false
		return false;
}
