#include "stdafx.h"
#include "ServerDAO.h"
#include "Server.h"

ServerDAO::ServerDAO()
{
}

ServerDAO::ServerDAO(const char * dbName)
{
	sqlite3_open(dbName, &db);
}

ServerDAO::~ServerDAO()
{
}

list<Server> ServerDAO::findAll()
{
	string sqlSelectStr = "SELECT * FROM Disease WHERE id = '" + to_string(id_in) + "';";
	return list<Server>();
}
