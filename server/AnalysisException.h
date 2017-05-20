#pragma once
#include <exception>
#include <string>

class AnalysisException :
	public std::exception
{
public:
	virtual const char* what() const throw();

	AnalysisException() throw();
	~AnalysisException() throw();

private:
	std::string m_phrase;
};

