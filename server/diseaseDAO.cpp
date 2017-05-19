#include "stdafx.h"
#include "diseaseDAO.h"
#include "Disease.h"

diseaseDAO::diseaseDAO()
{
}

diseaseDAO::diseaseDAO(string dbPath)
{
	//sqlite3_open(dbPath,&db);

}

diseaseDAO::~diseaseDAO()
{
}

list<Disease> diseaseDAO::findAll()
{
	return list<Disease>();
}
