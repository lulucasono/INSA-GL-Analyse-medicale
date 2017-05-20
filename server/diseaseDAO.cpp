#include "stdafx.h"
#include "diseaseDAO.h"
#include "Disease.h"

diseaseDAO::diseaseDAO()
{
}

diseaseDAO::diseaseDAO(string fichierName)
{
	name = fichierName;
}



diseaseDAO::~diseaseDAO()
{
}

list<Disease> diseaseDAO::FindAll()
{
	string sqlSelectStr = "SELECT * FROM Disease WHERE id = '" + to_string(id_in) + "';";
	return list<Disease>();
}
