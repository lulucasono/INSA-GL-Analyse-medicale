#pragma once
#include <string>
#include <list>
#include "Server.h"
#include "sqlite3.h"

using namespace std;
class ServerDAO
{
public:
	ServerDAO();
	ServerDAO(const char * dbName = "Server.db");
	~ServerDAO();
	list<Server> FindAll();
	Server FindByName(string nameServer);

private:
	sqlite3 * db;
};