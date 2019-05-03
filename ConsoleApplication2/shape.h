#pragma once

#include <iostream>
#include "iostream"
#include "fstream"

using namespace std;

class shape   //абстрактный класс, если хотя б 1 виртуальная функция, тело не обьязательно в дочерных
{			//
	
	/*/ значения ключей для каждой из фигур
	enum key { CIRCLE, RECTANGLE };
	key k; // ключ
	// используемые альтернативы*/

	enum color_shape { RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET }; 
	color_shape color;
	float	material;
public:

	bool Compare(shape &other);
	static shape* InGeneral(ifstream &ifst); //может быть где угодно
	void OutShape(ofstream &ofst); //ничего не возращает
	virtual float CountPerimeter() = 0;
	virtual void InData(ifstream &ifst) = 0;
	virtual void Out(ofstream &ofst) = 0;
	virtual void OutCircle(ofstream &ofst);
	virtual void MultiMethod(shape *other, ofstream &ofst)=0;
	virtual void MMRect(ofstream &ofst)=0;
	virtual void MMCircle(ofstream &ofst)=0;
	virtual void MMTrangle(ofstream &ofst)=0;
	shape() {};//p[op[o[

};