#pragma once
#include "shape.h"

class rectangle: public shape
{
	int a, b, c, d; // ���������� ������ �������� � ������� ������� �����

public:
	rectangle() {};

	void InData(ifstream &ifst);
	void Out(ofstream &ofst);

};