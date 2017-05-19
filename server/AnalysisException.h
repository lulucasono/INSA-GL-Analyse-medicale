#pragma once
#include <exception>

class AnalysisException :
	public std::exception
{
public:
	AnalysisException();
	~AnalysisException();
};

