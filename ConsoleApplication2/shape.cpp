
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
/*
shape * shape::OutShape(shape &s, ofstream &ofst)
{
	switch (s.k)
	{
	case shape::key::CIRCLE:
		s.cir.OutCircle(s.cir, ofst);
		break;
	case shape::key::RECTANGLE:
		s.r.OutRectangle(s.r, ofst);
		break;
	default:
		ofst << "Incorrect figure!" << endl;
	}
	return nullptr;
}*/
