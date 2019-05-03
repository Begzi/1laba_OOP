
#include "pch.h"
#include "conteiner.h"
#include <string>

bool conteiner::CheckForSymbol(ifstream &ifst)
{
	string buff;
	getline(ifst, buff, '\0');
	bool check = true;
	int index = 0;
	indexIgnore = 1;
	while (buff[indexIgnore] != '\n')
	{
		indexIgnore++;
	}
	indexIgnore++;
	for (int i = indexIgnore; i < buff.size(); i++)
	{
		if (!isdigit(buff[i]) && buff[i] != 32 && buff[i] != '\n')
		{
			if (buff[i] == '.'  && check && index == 2)
			{
				if (!isdigit(buff[i - 1]) || !isdigit(buff[i + 1]))
				{
					return false;
				}
				check = false;
			}
			else
			{
				return false;
			}
		}
		else if (buff[i] == 32 && i > 0)
		{
			index++;
			if (!isdigit(buff[i - 1]) || !isdigit(buff[i + 1]))
			{
				return false;
			}
		}
		else if (buff[i] == '\n')
		{
			check = true;
			index = 0;
		}

	}
	return true;
}

void conteiner::Clear()
{
	for (int i = 0; i < len; i++)
	{
		delete cont[i];
	}
	len = 0;
}

void conteiner::Sort() 
{
	for (int i = 0; i < len - 1; i++) 
	{
		for (int j = i + 1; j < len; j++) 
		{
			if (cont[i]->Compare(*cont[j])) 
			{
				shape *tmp = cont[i];
				cont[i] = cont[j];
				cont[j] = tmp;
			}
		}
	}
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
	ifst.seekg(indexIgnore, iostream::beg);
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

void conteiner::MultiMethod(ofstream &ofst) 
{
	ofst << "Multimethod." << endl;
	for (int i = 0; i < len - 1; i++) 
	{
		for (int j = i + 1; j < len; j++) 
		{
			cont[i]->MultiMethod(cont[j], ofst);
			cont[i]->Out(ofst);
			cont[j]->Out(ofst);
		}
	}
}