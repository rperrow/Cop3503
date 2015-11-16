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
