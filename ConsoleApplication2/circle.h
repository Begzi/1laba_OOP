#pragma once
#include "shape.h"

class circle: public shape
{
	int x, y, r; // ����� ����� and r

public:
	circle() {};
	
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);

};