#pragma once
#include <exception>

class DiseaseNotFoundException :
	public std::exception
{
public:
	DiseaseNotFoundException();
	~DiseaseNotFoundException();
};

