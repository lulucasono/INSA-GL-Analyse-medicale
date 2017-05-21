#pragma once
#include <string>
#include <list>
#include "../models/Disease.h"

using namespace std;
class diseaseDAO
{
public:
	diseaseDAO();
	diseaseDAO(string fichierName="nameDeFichier");
	~diseaseDAO();
	list<Disease> findAll();

private:
	string name;
};

