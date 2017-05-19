#pragma once
#include <string>
#include <list>
#include "Disease.h"
#include "sqlite3.h"

using namespace std;
class diseaseDAO
{
public:
	diseaseDAO();
	diseaseDAO(string dbPath="pathToDB");
	~diseaseDAO();
	list<Disease> findAll();

private:
	sqlite3 *db;
};

