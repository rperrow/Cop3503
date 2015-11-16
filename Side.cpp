#include<iostream>
#include<string>
#include"RCSolver.h"

using namespace std;

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
