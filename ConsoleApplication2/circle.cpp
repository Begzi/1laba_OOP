
#include "pch.h"
#include"circle.h"




void circle::InData(ifstream & ifst)
{
	ifst >> x >> y >> r;
}

void circle::Out(ofstream & ofst)
{
	string colorNames[] = { "red","orange","yellow","green","blue","violet" };
	ofst << "It is Circle: x = "
		<< x << ", y = " << y << ", r = " << r;
	//ofst << " " << colorNames[(shape::color_shape)(color - 1)].data() << endl; //стриг в чар, благодаря чар
}
