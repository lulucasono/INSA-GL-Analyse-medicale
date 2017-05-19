#pragma once
#pragma once
#include <map>
#include "Server.h"



class ServerService
{
public:
	void UpdateFromMulticast();
	// R閏up鑢e tous les serveurs d閠ect閟 par multicast, en 閏outant pendant 10 secondes, puis les ajoute 
	// 関entuellement ?la base de donn閑s

	void AddServer(Server s);
	// Ajoute le serveur s ?la base de donn閑s 
	// C'est une m閠hode manuelle, que l'user peut utiliser,
	// mais aussi utilis閑 par la fonctionnalit?de mise ?jour du serveur

	void RemoveServer(Server s);
	// C'est une m閠hode manuelle, que l'user peut utiliser

	std::map<std::string, std::string> GetServers();
	// Retourne les serveurs stock閟 dans la base de donn閑s 
	// Dans un stockage, un serveur est repr閟ent?par une paire de strings : 
	// son adresse IP(unique) et son nom 

	ServerService();
	~ServerService();

};

