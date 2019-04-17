#pragma once
#include "shape.h"

class trangle : public shape
{
	int x, y, z; // 

public:
	trangle() {};

	void InData(ifstream &ifst);
	void Out(ofstream &ofst);

};