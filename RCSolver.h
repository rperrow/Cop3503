#ifndef RCSOLVER_H
#define RCSOLVER_H

#include <iostream>
#include <string>

using namespace std;

class Tile{
private:
	string color;
public:
	Tile();
	Tile (string color);
	string getColor();
};

class Corner{
private:	
	Tile tile1, tile2, tile3;
public:
	Corner(Tile tile1, Tile tile2, Tile tile3);
	Tile getTile1();
	Tile getTile2();
	Tile getTile3();
};

class Side{
private:
	Tile tile1, tile2;
public:
	Side(Tile tile1, Tile tile2);
	Tile getTile1();
	Tile getTile2();
};

class Face{
private:
	Tile ** faceArr;
public:
	Face();
	Face(Tile r0c0, Tile r0c1, Tile r0c2, Tile r1c0, Tile r1c1, Tile r1c2, Tile r2c0, Tile r2c1, Tile r2c2);
	Tile ** getFace();
	void rotate();
	void rotateI();
};

class Cube{
private:
	Face * cubeArr;
public:
	Cube();
	Cube(Face top, Face front, Face right, Face back, Face left, Face down);
	Face * getCube();
	void printCube();
	void spinF();
	void spinFi();
	void spinL();
	void spinLi();
	void spinR();
	void spinRi();
	void spinD();
	void spinDi();
	void spinU();
	void spinUi();
	void setTop(int k);
	void rotate(int k);
	void step1Move();
	bool CheckColors();
	bool CheckRepeats();
	bool Valid();
};

#endif 
