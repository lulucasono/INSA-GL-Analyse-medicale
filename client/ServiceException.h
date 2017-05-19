#pragma once
#include <exception>

class ServiceException :
	public std::exception
{
public:
	ServiceException();
	~ServiceException();
};

