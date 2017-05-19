#pragma once
#include <list>

using namespace std;

class Genome
{
public:
	Genome();
	virtual ~Genome();
private:
	list<string> geneticCode;
};

