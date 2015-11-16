#include<iostream>
#include<string>
#include"RCSolver.h"

using namespace std;

Tile::Tile(){
	color = "";
}

Tile::Tile(string c){
	color = c;
}

string Tile::getColor(){
	return color;
}
