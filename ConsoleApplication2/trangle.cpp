#include "pch.h"
#include "trangle.h"

void trangle::InData(ifstream & ifst)
{
	ifst >> x >> y >> z;
}

void trangle::Out(ofstream & ofst)
{
	ofst << "It is Trangle: x = "
		<< x << ", y = " << y << ", z = " << z;
	OutShape(ofst);
}