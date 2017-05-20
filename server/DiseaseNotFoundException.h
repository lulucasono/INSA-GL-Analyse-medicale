#pragma once
#include <exception>
#include <string>

class DiseaseNotFoundException :
	public std::exception
{
public:
	virtual const char* what() const throw();

	DiseaseNotFoundException() throw();
	~DiseaseNotFoundException() throw();

private:
	std::string m_phrase;
};

