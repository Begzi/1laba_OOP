#pragma once

#include <iostream>
#include "iostream"
#include "fstream"

using namespace std;

class shape
{
	
	/*/ значения ключей для каждой из фигур
	enum key { CIRCLE, RECTANGLE };
	key k; // ключ
	// используемые альтернативы*/

	enum color_shape { RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET };
	color_shape color;
public:

	void OutShape(ofstream &ofst); //ничего не возращает
	static shape* InGeneral(ifstream &ifst);
	virtual void InData(ifstream &ifst) = 0;
	virtual void Out(ofstream &ofst) = 0;
	shape() {};

};