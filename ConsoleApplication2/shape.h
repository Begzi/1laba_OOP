#pragma once

#include <iostream>
#include "iostream"
#include "fstream"

using namespace std;

class shape
{
	
	/*/ �������� ������ ��� ������ �� �����
	enum key { CIRCLE, RECTANGLE };
	key k; // ����
	// ������������ ������������*/

	enum color_shape { RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET }; 
	color_shape color;
public:

	static shape* InGeneral(ifstream &ifst); //����� ���� ��� ������
	void OutShape(ofstream &ofst); //������ �� ���������
	virtual void InData(ifstream &ifst) = 0;
	virtual void Out(ofstream &ofst) = 0;
	virtual void OutCircle(ofstream &ofst);
	shape() {};//p[op[o[

};