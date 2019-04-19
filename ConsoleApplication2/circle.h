#pragma once
#include "shape.h"

class circle: public shape
{
	float PI = 3.14159;
	int x, y, r; // центр круга and r

public:
	circle() {};
	
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
	float CountPerimeter();

};