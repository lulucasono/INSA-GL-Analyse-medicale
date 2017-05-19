#pragma once
#include <iostream>


class Server
{
public:

	////////////// CONSTRUCTOR /////////////

	Server();
	Server(std::string *cs, std::string cs1);


	////////// GETTER AND SETTER //////////

	// getters
	const std::string *address() const;

	const std::string& name() const;

	// setters
	void SetAddress(std::string *address);
	void SetName(std::string name);


	//////////// DESTRUCTOR /////////////////

	~Server();

	//////////// OPERATOR OVERRIDE //////////


private:
	/**
	* Adresse IP du serveur
	*/
	std::string *p_address;


	/**
	* Nom du serveur
	*/
	std::string p_name;
};