#pragma once
#include "shape.h"

class rectangle: public shape
{
	int a, b, c, d; // координаты левого верхнего и правого нижнего углов

public:
	rectangle() {};

	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
	float CountPerimeter();
	void MultiMethod(shape *other, ofstream &ofst);
	void MMRect(ofstream &ofst);
	void MMCircle(ofstream &ofst);
	void MMTrangle(ofstream &ofst);

};