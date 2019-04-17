
#include "pch.h"
#include "circle.h"
#include "rectangle.h"


bool shape::Compare(shape & other)
{

	return CountPerimeter() < other.CountPerimeter();
	return false;
}

shape * shape::InGeneral(ifstream &ifst)
{
	shape *sp;
	int k;
	int color;
	ifst >> k;
	ifst >> color;
	switch (k) {
	case 2:
		sp = new rectangle;
		break;
	case 1:
		sp = new circle;
		break;
	default:
		return 0;
	}
	sp->color = (shape::color_shape)(color - 1);
	sp->InData(ifst);
	return sp;
}

void shape::OutShape(ofstream &ofst)
{
	string colorNames[] = { "Red","orange","yellow","green","blue","violet" };
	ofst << " " << colorNames[int(color)].data() << endl; //стриг в чар, благодаря чар
	return;
}
