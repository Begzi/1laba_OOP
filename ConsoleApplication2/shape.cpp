
#include "pch.h"
#include "circle.h"
#include "rectangle.h"


shape * shape::InGeneral(ifstream &ifst)
{
	shape *sp;
	int k;
	int color;
	int material;
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
	default:
		return 0;
	}
	sp->color = (shape::color_shape)(color - 1);
	sp->material = (shape::material_shape)(material-1);
	sp->InData(ifst);
	return sp;
}

void shape::OutShape(ofstream &ofst)
{
	string materialShape[] { "gold", "tree", "iron", "plastic", "argentum" };
	string colorNames[] = { "Red","orange","yellow","green","blue","violet" };
	ofst << " " << colorNames[int(color)].data() << " " << materialShape[int(material)].data() << endl; //стриг в чар, благодаря чар
	return;
}
