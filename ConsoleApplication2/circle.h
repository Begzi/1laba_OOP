#pragma once
#include "shape.h"

class circle: public shape
{
	const double PI = 3.1415926535897932384626433832795;
	int x, y, r; // центр круга and r

public:
	circle() {};
	
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
	float CountPerimeter();

};