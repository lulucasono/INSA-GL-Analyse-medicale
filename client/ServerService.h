#pragma once
#pragma once
#include <map>
#include "Server.h"



class ServerService
{
public:
	void updateFromMulticast();
	// Récupère tous les serveurs détectés par multicast, en écoutant pendant 10 secondes, puis les ajoute 
	// éventuellement à la base de données

	void addServer(Server s);
	// Ajoute le serveur s à la base de données 
	// C'est une méthode manuelle, que l'user peut utiliser,
	// mais aussi utilisée par la fonctionnalité de mise à jour du serveur

	void removeServer(Server s);
	// C'est une méthode manuelle, que l'user peut utiliser

	std::map<std::string, std::string> getServers();
	// Retourne les serveurs stockés dans la base de données 
	// Dans un stockage, un serveur est représenté par une paire de strings : 
	// son adresse IP(unique) et son nom 

	ServerService();
	~ServerService();

};

