#include <string>
#include"RCSolver.h"

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
