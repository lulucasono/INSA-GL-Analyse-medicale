#include "stdafx.h"
#include "ServerService.h"
#include <iostream>

using namespace std;

//typedef std::pair<std::string, std::string> pairServer;


void ServerService::UpdateFromMulticast()
{
	// R閏up閞ation des serveurs par multicast, en 閏outant pendant 10 secondes + Exception eventuelle
	std::map<std::string, std::string> foundServers;
	// CODE TODO (Julia)  : voir Slack 

	// Lecture des serveurs d閖?dans la BD + Exception eventuelle
	std::map<std::string, std::string> fileServers;
	// try ... 
	fileServers = GetServers();
	// ... catch 

	// Les serveurs qui ne sont pas d閖?dans la BD et qui sont r閏up閞閟 sont ajout閟 ?la base 
	// + Exception eventuelle
	for(std::map<std::string, std::string>::iterator it = foundServers.begin(); it!= foundServers.end(); it++)
	{
		if(fileServers.find(it->first)==fileServers.end())
		{
			// Insertion de *it dans la BD + Exception eventuelle (impossible d'ins閞er machin)
			Server s(it->first, it->second);
			AddServer(s);
		}
	}
	
}

void ServerService::AddServer(Server s)
{
	// 閏riture dans la BD + Exception eventuelle
	//  = appel du DAO = TODO
}

void ServerService::RemoveServer(Server s)
{
	// 閏riture dans la BD + Exception eventuelle
	//  = appel du DAO = TODO
}

std::map<std::string, std::string> ServerService::GetServers()
// la base de donn閑s choisie est SQLite
{
	std::map<std::string, std::string> servers;
	// lecture des serveurs stock閟 depuis la BD
	//  = appel du DAO = TODO
	// try ...
		
	// catch...

	return servers;
}

ServerService::ServerService()
{

}


ServerService::~ServerService()
{

}
