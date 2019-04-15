
#include "pch.h"
#include "circle.h"
#include "rectangle.h"


shape * shape::InGeneral(ifstream &ifst)
{
	shape *sp;
	int k;
	int color;
	ifst >> k;
	ifst >> color;
	switch (k) {
	case 2:
		sp = new rectangle;        //создаётся виртуальные табилцы тут //мы носим с собой квадрат
		sp->color = (shape::color_shape)(color - 1);		
		break;
	case 1:
		sp = new circle;
		sp->color = (shape::color_shape)(color - 1);
		break;
	default:
		return 0;
	}
	sp->InData(ifst);
	return sp;
}

void shape::OutShape(ofstream &ofst)
{
	string colorNames[] = { "red","orange","yellow","green","blue","violet" };
	ofst << " " << colorNames[int(color)].data() << endl; //стриг в чар, благодаря чар
	return;
}
