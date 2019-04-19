
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
	float P = sqrt((a-c)*(a-c)+(d-b)*(d-b));				
									//                 A__________B
	return P;						//	               |          |
}									//                C|__________|D
