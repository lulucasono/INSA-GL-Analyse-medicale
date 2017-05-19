#pragma once
#include <exception>

class CommunicationException :
	public std::exception
{
public:
	CommunicationException();
	~CommunicationException();
};

