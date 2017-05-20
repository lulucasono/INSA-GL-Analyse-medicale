#pragma once
#include <exception>
#include <string>

class ServiceException :
	public std::exception
{
public:
	virtual const char* what() const throw();

	ServiceException() throw();
	~ServiceException() throw();

private:
	std::string m_phrase;
};




