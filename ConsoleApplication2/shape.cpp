
#include "pch.h"
#include "circle.h"
#include "rectangle.h"
#include "trangle.h"

shape * shape::InGeneral(ifstream &ifst)
{
	shape *sp;
	int k;
	int color;
	float	material;
	ifst >> k;
	ifst >> color;
	ifst >> material;
	switch (k) {
	case 2:
		sp = new rectangle;
		break;
	case 1:
		sp = new circle;
		break;
	case 3:
		sp = new trangle;
		break;
	default:
		return 0;
	}
	sp->color = (shape::color_shape)(color - 1);
	sp->material = material;
	sp->InData(ifst);
	return sp;
}

void shape::OutShape(ofstream &ofst)
{
	string colorNames[] = { "Red","orange","yellow","green","blue","violet" };
	ofst << " " << colorNames[int(color)].data() << endl; //стриг в чар, благодаря чар
	return;
}
