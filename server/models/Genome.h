#pragma once
#include <list>

using namespace std;

class Genome
{
public:
	Genome();
	virtual ~Genome();
	const list<string>& getGene() const;
private:
	list<string> geneticCode;
};

