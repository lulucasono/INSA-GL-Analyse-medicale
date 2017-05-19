#include "stdafx.h"
#include "ServerService.h"
#include <iostream>

using namespace std;

void ServerService::UpdateFromMulticast()
{
	// Récupération des serveurs par multicast, en écoutant pendant 10 secondes + Exception eventuelle
	std::map<std::string, Server> foundServers;
	// CODE TODO (Julia)  : voir Slack 

	// Lecture des serveurs déjà dans la BD + Exception eventuelle
	std::map<std::string, Server> fileServers;
	// try ... 
	fileServers = GetServers();
	// ... catch 

	// Les serveurs qui ne sont pas déjà dans la BD et qui sont récupérés sont ajoutés à la base 
	// + Exception eventuelle
	for(std::map<std::string, Server>::iterator it = foundServers.begin(); it!= foundServers.end(); it++)
	{
		// modifié
		/*if(fileServers.find(it->first)==fileServers.end())
		{
			// Insertion de *it dans la BD + Exception eventuelle (impossible d'insérer machin)
			string *addressNewServer = new string(it->first);
			Server s(addressNewServer, it->second.name());
			AddServer(s);
		}*/
	}
	
}

void ServerService::AddServer(Server s)
{
	// écriture dans la BD + Exception eventuelle
	//  = appel du DAO = TODO
}

void ServerService::RemoveServer(Server s)
{
	// écriture dans la BD + Exception eventuelle
	//  = appel du DAO = TODO
}

std::map<std::string, Server> ServerService::GetServers()
// la base de données choisie est SQLite
{
	std::map<std::string, Server> servers;
	// lecture des serveurs stockés depuis la BD
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
