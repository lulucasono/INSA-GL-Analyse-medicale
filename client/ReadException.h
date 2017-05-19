#pragma once
#include <exception>

class ReadException :
	public std::exception
{
public:
	ReadException();
	~ReadException();
};

