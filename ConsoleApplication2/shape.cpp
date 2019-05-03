
#include "pch.h"
#include "circle.h"
#include "rectangle.h"
#include "trangle.h"
#include <string>

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
	float	material;
	ifst >> k;
	if (k > 3 || k < 1)
	{
		cout << endl << "Key must be 0 or 1 or 3" << endl;
		k = 0;
	}
	ifst >> color;
	if (color > 6 || color < 1)
	{
		cout << endl << "color must be from 1 to 6" << endl;
		k = 0;
		color = 1;
	}
	ifst >> material;
	string buff;
	int index = 0;
	int bufer = ifst.tellg();
	getline(ifst, buff, '\n');
	for (int j = 0; j < buff.size(); j++)
	{
		if (buff[j] == 32)
		{
			index++;
		}
	}
	ifst.seekg(bufer, iostream::beg);
	if (material < 1)
	{
		cout << endl << "P must be > 0" << endl;
		k = 0;
		material = 1;
	}
	switch (k) {
	case 2:
		if (index == 4)
		{
			sp = new rectangle;
			break;
		}
		else
		{
			ifst.seekg(1, ios_base::end); //в последний символ файла
			ifst >> k; // читаем жтот символ
			cout << endl << "not enough or more coordinates for rectangle";
			return 0;
		}
	case 1:
		if (index == 3)
		{
			sp = new circle;
			break;
		}
		else
		{
			ifst.seekg(1, ios_base::end); //в последний символ файла
			ifst >> k; // читаем жтот символ
			cout << endl << "not enough or more  coordinates for circle";
			return 0;
		}
	case 3:
		if (index == 6)
		{
			sp = new trangle;
			break;
		}
		else
		{
			ifst.seekg(1, ios_base::end); //в последний символ файла
			ifst >> k; // читаем жтот символ
			cout << endl << "not enough or more coordinates for trangle";
			return 0;
		}
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
	ofst << " " << colorNames[int(color)].data() << " p=" 
		<<  material << "кг/м*м*м " 
		<<"P = " << CountPerimeter() 
		<< endl; //стриг в чар, благодаря чар
	return;
}

void shape::OutCircle(ofstream & ofst)
{
}
