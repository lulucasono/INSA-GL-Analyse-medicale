#ifndef MEDANALYSIS_CLIENT_SERVERDAO_H
#define MEDANALYSIS_CLIENT_SERVERDAO_H

#include <list>
#include <string>
#include <iostream>
#include <sqlite3.h>
#include "../models/Server.h"

class ServerDAO {
 public:
  ServerDAO();
  ServerDAO(const char *dbName = "Server.db"); // TODO MOVE DEFAULT NAME
  ~ServerDAO();
  std::list<Server> findAll();
  Server findByName(std::string nameServer);

 private:
  sqlite3 *db;
};

#endif //MEDANALYSIS_CLIENT_SERVERDAO_H
