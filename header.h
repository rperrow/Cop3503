#ifndef COP3503_hpp
#define COP3503_hpp

#include <stdio.h>



#include <iostream>
#include <string>

using namespace std;


class Tile{
    
private:
    string color;
    
public:
    Tile(string color);
    string getColor();
    
};


class Corner{
private:
    Tile tile1, tile2, tile3;
public:
    Corner(Tile tile1, Tile til2, Tile tile3);
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
    Tile faceArr[3][3];
    
public:
    
};

class Cube{
private:
public:
    
};

class Row{
private:
public:
};

class Column{
private:
public: 
    
};

#endif /* COP3503_hpp */



