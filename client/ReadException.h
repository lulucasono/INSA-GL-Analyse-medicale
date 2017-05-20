#pragma once
#include <exception>
#include <string>

class ReadException :
	public std::exception
{
public:

	virtual const char* what() const throw();


	ReadException() throw();
	~ReadException() throw();

private :
	std::string m_phrase;
};

