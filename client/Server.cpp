#include "stdafx.h"
#include "Server.h"

Server::Server() :p_address(nullptr), p_name("")
{

}


Server::Server(std::string *cs, std::string cs1): p_address(cs),
                                                 p_name(cs1)
{
}

const std::string *Server::address() const
{
	return p_address;
}

const std::string& Server::name() const
{
	return p_name;
}

void Server::SetAddress(std::string* address)
{
	this->p_address = address;
}

void Server::SetName(std::string name)
{
	this->p_name = name;
}


Server::~Server()
{
}