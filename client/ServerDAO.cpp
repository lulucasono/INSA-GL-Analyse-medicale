#include "stdafx.h"
#include "ServerDAO.h"

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
	string sqlSelectStr = "SELECT * FROM Server;";
	const char *sqlSelect = sqlSelectStr.c_str();
	return list<Server>();
}

Server ServerDAO::findByName(string nameServer) 
{
	int code;
	string sqlSelectStr = "SELECT * FROM Server WHERE name='"+nameServer+"';";
	const char *sqlSelect = sqlSelectStr.c_str();
	char **results = NULL;
	int rows, columns;
	char *error;

	code = sqlite3_get_table(db, sqlSelect, &results, &rows, &columns, &error);

	Server server();

	if (code != 0)
	{
		cerr << "Error executing SQLite3 query (read_patient): " << sqlite3_errmsg(db) << endl;
		sqlite3_free(error);
	}
	else
	{
		string adresse = results[0 + columns];
		string * p_adresse = &adresse;
		string nom = results[1 + columns];
		//TODO set le attributs de server
	}

	return server;
}
