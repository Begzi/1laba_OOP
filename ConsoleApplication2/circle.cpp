
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
}
