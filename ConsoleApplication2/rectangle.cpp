
#include "pch.h"
#include "rectangle.h"




void rectangle::InData(ifstream & ifst)
{
	ifst >> a; ifst >> b; ifst >> c; ifst >> d;
}

void rectangle::Out(ofstream & ofst)
{
	ofst << "It is Rectangle: a = " << a
		<< ", b = " << b << ", c = " << c << ", d = " << d;
	OutShape(ofst);
}

float rectangle::CountPerimeter() // A{a,b} D{c,d} C{c,b} B{a,d}
{								//
	float P = 2*sqrt((a-c)*(a-c))*sqrt((d - b)*(d - b));//A-C получаем высоту D-C получаем ширину
									//                 A__________B
	return P;						//	               |          |
}									//                C|__________|D

void rectangle::MultiMethod(shape * other, ofstream & ofst)
{
	other->MMRect(ofst);
}

void rectangle::MMRect(ofstream & ofst)
{
	ofst << "Rectangle and Rectangle" << endl;
}

void rectangle::MMCircle(ofstream & ofst)
{
	ofst << "Rectangle and Circle" << endl;
}

void rectangle::MMTrangle(ofstream & ofst)
{
	ofst << "Rectangle and Trangle" << endl;
}
