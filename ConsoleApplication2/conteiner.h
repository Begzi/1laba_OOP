#pragma once
#include "shape.h"

class conteiner 
{
	enum { max_len = 51 };
	int len=0;
	shape *cont[(max_len)-1];
public:
	conteiner()	{}
	void OutConteiner(ofstream &ofst);
	void InConteiner(ifstream &ifst);
	void Clear();
	void Sort(); // сортировка контейнера


	~conteiner() { Clear(); }


};