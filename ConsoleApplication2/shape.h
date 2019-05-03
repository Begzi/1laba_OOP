#pragma once

#include <iostream>
#include "iostream"
#include "fstream"

using namespace std;

class shape   //����������� �����, ���� ���� � 1 ����������� �������, ���� �� ������������ � ��������
{			//
	
	/*/ �������� ������ ��� ������ �� �����
	enum key { CIRCLE, RECTANGLE };
	key k; // ����
	// ������������ ������������*/

	enum color_shape { RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET }; 
	color_shape color;
	float	material;
public:

	bool Compare(shape &other);
	static shape* InGeneral(ifstream &ifst); //����� ���� ��� ������
	void OutShape(ofstream &ofst); //������ �� ���������
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