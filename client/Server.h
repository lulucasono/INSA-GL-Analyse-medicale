#pragma once
#include <iostream>


class Server
{
public:

	////////////// CONSTRUCTOR /////////////

	Server(std::string cs, std::string cs1);


	////////// GETTER AND SETTER //////////


	const std::string& address() const;

	const std::string& name() const;


	//////////// DESTRUCTOR /////////////////

	~Server();

	//////////// OPERATOR OVERRIDE //////////


private:
	/**
	 * Adresse IP du serveur
	 */
	std::string p_address;


	/**
	 * Nom du serveur
	 */
	std::string p_name;
};
