#include "stdafx.h"
#include "ServerService.h"
#include <iostream>
#include "MulticastUtil.h"

using namespace std;

typedef std::map<std::string, Server> server_map;

static const UINT PORT = 5678;
static const UINT TIME_TO_PULL = 10 * 1000;

void ServerService::UpdateFromMulticast()
{
	// Récupération des serveurs par multicast, en écoutant pendant 10 secondes + Exception eventuelle
	server_map foundServers;
	// CODE TODO (Julia)  : voir Slack 
	MulticastUtil multicast([](string data)
	                        {
		                        cout << "Nouvelles données envoyées :" << data;
	                        }, 
		TIME_TO_PULL);

	multicast.Create();
	multicast.Connect(LPCTSTR("225.6.7.8"), PORT);

	cout << "Recherche de serveur en cours..." << endl;

	// Dès qu'un serveur sera trouvé, la fonction OnNewServer sera appelée

	/*
		// try ... 
		server_map fileServers = GetServers();
		// ... catch 

		// Les serveurs qui ne sont pas déjà dans la BD et qui sont récupérés sont ajoutés à la base 
		// + Exception eventuelle
		for (server_map::iterator it = foundServers.begin(); it != foundServers.end(); it++)
		{
			if (fileServers.find(it->first) == fileServers.end())
			{
				// Insertion de *it dans la BD + Exception eventuelle (impossible d'insérer machin)
				AddServer(it->second);
			}
		}
	*/
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

server_map ServerService::GetServers()
// la base de données choisie est SQLite
{
	server_map servers;
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
