#ifndef RCSOLVER_H
#define RCSOLVER_H

#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Tile{   //Creates Tile Objects which indicate the individual colors on the cube.
private:
    string color;
public:
    Tile();
    Tile (string color);
    string getColor();
};

class Corner{  // Creates corner objects which each represent an individual corner piece
private:
    Tile tile1, tile2, tile3;
public:
    Corner(Tile tile1, Tile tile2, Tile tile3);
    Tile getTile1();
    Tile getTile2();
    Tile getTile3();
};

class Side{    // Takes the 4 middle side pieces of each face (Basically not a corner and not the middle piece)
private:
    Tile tile1, tile2;
public:
    Side(Tile tile1, Tile tile2);
    Tile getTile1();
    Tile getTile2();
};

class Face{    // Creates a face object which allows us to represent the Cube as 6 faces with 9 tiles to a face
private:
    Tile ** faceArr;
public:
    Face();
    Face(Tile r0c0, Tile r0c1, Tile r0c2, Tile r1c0, Tile r1c1, Tile r1c2, Tile r2c0, Tile r2c1, Tile r2c2);
    Tile ** getFace();
    void rotate();
    void rotateI();
};

class Cube{   // The cube object allows us to see the entire cube as made up of faces and tiles and allows us to do the required movements
private:
    Face * cubeArr;
    vector<string> solutionVector;
public:
  ///  vector<string> solutionVector;
    Cube();
    Cube(Face top, Face front, Face right, Face back, Face left, Face down);
    Face * getCube();
    void printCube();
    void spinF();    // these are the movements of the cube
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
    void step2Move();
    void step3aMove();
    void step3bMove();
    void step4Move();
    void step5Move();
    void step6Move();  // end of movements
    void solveTop();   // solving functions
    void solveTopCross();
    void solveTopCorners();
    void solveCorner(string c0, string c1, string c2);
    void solveSide(string c0, string c1);
    void fixSideOrientation();
    void solveMiddleRow();
    void solveMiddleSide(string c1, string c2);
    void solveCube();
    void solveFinalCross();
    void solveFinalCorners();
    void finishCube();  // end of the solving function
    void printVector();  //print function for the steps used
    vector<string> getVector(); // allows us to retrieve a vector string (the container for the steps)
    bool checkColors(Face f1, Face f2, Face f3, string c1, string c2, string c3); // the error checking functions
    bool CheckColors();
    bool CheckRepeats();
    bool CheckSides();
    bool Valid();  // end of error check
};


#endif // RCSOLVER_H
