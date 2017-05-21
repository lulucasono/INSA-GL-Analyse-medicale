#pragma once
#include <string>
#include <list>
#include <fstream>
#include "Disease.h"

using namespace std;
class diseaseDAO
{
public:
	diseaseDAO(string fileName="nameDeFichier");
	~diseaseDAO();
	list<Disease> FindAll();

private:
	string name;
};

