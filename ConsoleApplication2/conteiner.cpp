
#include "pch.h"
#include "conteiner.h"



void conteiner::Clear()
{
	for (int i = 0; i < len; i++)
	{
		delete cont[i];
	}
	len = 0;
}

void conteiner::OutConteiner(ofstream & ofst)
{
	ofst << "Container contains " << len
		<< " elements." << endl;
	for (int i = 0; i < len; i++) 
	{
		ofst << i + 1 << ": ";
		cont[i]->Out(ofst);
	}
	ofst << "FILTERED CONCLUSION" << endl;
	for (int i = 0; i < len; i++) 
	{
		cont[i]->OutCircle(ofst);
	}
}

void conteiner::InConteiner(ifstream & ifst)
{
	while (!ifst.eof())
	{
		if (len < 50)
		{
			if ((cont[len] = shape::InGeneral(ifst)) != 0)
			{
				len++;
			}
		}
		else
		{
			shape::InGeneral(ifst);
			if (ifst.eof())
			{
				cout << "\nI work with 50 elements, input.txt have more then 50 elements";
			}

		}
	}
}
