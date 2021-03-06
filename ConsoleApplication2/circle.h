#pragma once
#include "shape.h"

class circle: public shape
{
	float PI = 3.14159;
	int x, y, r; // ����� ����� and r

public:
	circle() {};
	
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
	virtual void OutCircle(ofstream &ofst);
	float CountPerimeter();
	void MultiMethod(shape *other, ofstream &ofst);
	void MMRect(ofstream &ofst);
	void MMCircle(ofstream &ofst);
	void MMTrangle(ofstream &ofst);

};