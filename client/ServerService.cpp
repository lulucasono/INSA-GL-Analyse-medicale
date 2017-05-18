#include "stdafx.h"
#include "ServerService.h"
#include <iostream>

using namespace std;

//typedef std::pair<std::string, std::string> pairServer;


void ServerService::updateFromMulticast()
{
	// Récupération des serveurs par multicast, en écoutant pendant 10 secondes + Exception eventuelle
	std::map<std::string, std::string> foundServers;
	// CODE TODO (Julia)  : voir Slack

	// Lecture des serveurs déjà dans la BD + Exception eventuelle
	std::map<std::string, std::string> fileServers;
	// try ... 
	fileServers = getServers();
	// ... catch 

	// Les serveurs qui ne sont pas déjà dans la BD et qui sont récupérés sont ajoutés à la base 
	// + Exception eventuelle
	for(std::map<std::string, std::string>::iterator it = foundServers.begin(); it!= foundServers.end(); it++)
	{
		if(fileServers.find(it->first)==fileServers.end())
		{
			// Insertion de *it dans la BD + Exception eventuelle (impossible d'insérer machin)
			Server s(it->first, it->second);
			addServer(s);
		}
	}
	
}

void ServerService::addServer(Server s)
{
	// écriture dans la BD + Exception eventuelle
	//  = appel du DAO = TODO
}

void ServerService::removeServer(Server s)
{
	// écriture dans la BD + Exception eventuelle
	//  = appel du DAO = TODO
}

std::map<std::string, std::string> ServerService::getServers()
// la base de données choisie est SQLite
{
	// lecture des serveurs stockés depuis la BD
	//  = appel du DAO = TODO

}

ServerService::ServerService()
{

}


ServerService::~ServerService()
{

}
