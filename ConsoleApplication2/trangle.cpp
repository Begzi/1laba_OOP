#include "pch.h"
#include "trangle.h"

void trangle::InData(ifstream & ifst)
{
	ifst >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
}

void trangle::Out(ofstream & ofst)
{
	ofst << "It is Trangle: x1 = "
		<< x1  << ", x2 = " << x2 
		<< ", y1 = " << y1 << ", y2 = " << y2 
		<< ", z1 = " << z1 << ", z2 = " << z2;
	OutShape(ofst);
}

float trangle::CountPerimeter()
{
	float P = sqrt((x1 - y1)*(x1 - y1) + (x2 - y2)*(x2 - y2))
		+ sqrt((x1 - z1)*(x1 - z1) + (x2 - z2)*(x2 - z2))
		+ sqrt((z1 - y1)*(z1 - y1) + (z2 - y2)*(z2 - y2));
					//                    X____Y
	return P;		//					   \  /
}					//						\/Z
