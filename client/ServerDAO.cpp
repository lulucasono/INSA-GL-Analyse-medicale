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
	list<Server> servers;
	int code;
	char **results = NULL;
	int rows, columns;
	char *error;

	code = sqlite3_get_table(db, sqlSelect, &results, &rows, &columns, &error);

	if (code != 0)
	{
		cerr << "Error executing SQLite3 query (read_patient): " << sqlite3_errmsg(db) << endl;
		sqlite3_free(error);
	}
	else
	{
		for (int i = 0; i < rows; i++)
		{
			string adresse = results[i + columns];
			string * p_adresse = &adresse;
			string nom = results[i+1 + columns];
			Server server;
			server.SetAddress(p_adresse);
			server.SetName(nom);
			servers.push_back(server);
		}
	}

	return servers;
}

Server ServerDAO::findByName(string nameServer) 
{
	string sqlSelectStr = "SELECT * FROM Server WHERE name='"+nameServer+"';";
	const char *sqlSelect = sqlSelectStr.c_str();
	int code;
	char **results = NULL;
	int rows, columns;
	char *error;

	code = sqlite3_get_table(db, sqlSelect, &results, &rows, &columns, &error);

	Server server;

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
		server.SetAddress(p_adresse);
		server.SetName(nom);
	}

	return server;
}
