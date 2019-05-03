#pragma once
#include "shape.h"

class conteiner 
{
	enum { max_len = 51 };
	int len=0;
	int indexIgnore = 0;
	shape *cont[(max_len)-1];
public:
	conteiner()	{}
	bool CheckForSymbol(ifstream &ifst);
	void OutConteiner(ofstream &ofst);
	void InConteiner(ifstream &ifst);
	void Clear();
	void Sort(); // сортировка контейнера
	void MultiMethod(ofstream &ofst);


	~conteiner() { Clear(); }


};