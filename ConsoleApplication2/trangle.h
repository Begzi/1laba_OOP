#pragma once
#include "shape.h"

class trangle : public shape
{
	int x1,x2, y1,y2, z1,z2; // ����� ����� and r

public:
	trangle() {};

	void InData(ifstream &ifst);
	void Out(ofstream &ofst);

};