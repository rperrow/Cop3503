#include<iostream>
#include<string>
#include"RCSolver.h"

using namespace std;

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
			/*string activeIndex = to_string(i);
			r0c0 = Tile(activeIndex);
			r0c1 =  Tile(activeIndex);
			r0c2 = Tile(activeIndex);
			r1c0 =  Tile(activeIndex);
			r1c1 = Tile(activeIndex);
			r1c2 =  Tile(activeIndex);
			r2c0 =  Tile(activeIndex);
			r2c1 =  Tile(activeIndex);
			r2c2 = Tile(activeIndex);*/

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
	cout<<"1 - F, 2 - Fi, 3 - L, 4 - Li, 5 - R, 6 - Ri, \n 7 - U, 8 - Ui, 9 - D, 10 - Di, 11 - Print, 12 - RotateCW, \n 13 - RotateCCW, 14 - RotateFW, 15 - Rotate BW, 16 - RotateSideCCW, 17 - RotateSideCW 18 - Step1Move \n 19 - Step2Move 20 - Step3aMove 21 - Step3bMove 22 - Step4Move \n 23 - Step5Move 24 - Step6Move 25 - Exit \n";
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
	if(k == 19) {myCube.step2Move(); myCube.printCube();}
	if(k == 20) {myCube.step3aMove(); myCube.printCube();}
	if(k == 21) {myCube.step3bMove(); myCube.printCube();}
	if(k == 22) {myCube.step4Move(); myCube.printCube();}
	if(k == 23) {myCube.step5Move(); myCube.printCube();}
	if(k == 24) {myCube.step6Move(); myCube.printCube();}
	else if (k==25) cont = false;
	}
	system("pause");
	return 0;
	}


