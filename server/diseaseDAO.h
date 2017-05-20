#pragma once
#include <string>
#include <list>
#include "Disease.h"

using namespace std;
class diseaseDAO
{
public:
	diseaseDAO();
	diseaseDAO(string fichierName="nameDeFichier");
	~diseaseDAO();
	list<Disease> FindAll();

private:
	string name;
};

