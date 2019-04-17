
#include "pch.h"
#include "rectangle.h"




void rectangle::InData(ifstream & ifst)
{
	ifst >> a; ifst >> b; ifst >> c; ifst >> d;
}

void rectangle::Out(ofstream & ofst)
{
	string colorNames[] = { "red","orange","yellow","green","blue","violet" };
	ofst << "It is Rectangle: a = " << a
		<< ", b = " << b << ", c = " << c << ", d = " << d;
	//ofst << " " << colorNames[(int)(color)].data() << endl; //стриг в чар, благодаря чар
}
