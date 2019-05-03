
#include "pch.h"
#include"circle.h"




void circle::InData(ifstream & ifst)
{
	ifst >> x >> y >> r;
}

void circle::Out(ofstream & ofst)
{
	ofst << "It is Circle: x = "
		<< x << ", y = " << y << ", r = " << r;
	OutShape(ofst);
}

float circle::CountPerimeter()
{
	float P = PI * 2 * r;
	return P;
}

void circle::MultiMethod(shape * other, ofstream & ofst)
{
	other->MMCircle(ofst);
}

void circle::MMRect(ofstream & ofst)
{
	ofst << "Circle and Rectangle" << endl;
}

void circle::MMCircle(ofstream & ofst)
{
	ofst << "Circle and Circle" << endl;
}

void circle::MMTrangle(ofstream & ofst)
{
	ofst << "Circle and Trangle" << endl;
}

void circle::OutCircle(ofstream & ofst)
{
	ofst << "It is Circle: x = "
		<< x << ", y = " << y << ", r = " << r;
	OutShape(ofst);
}
