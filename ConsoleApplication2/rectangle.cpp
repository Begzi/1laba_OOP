
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
