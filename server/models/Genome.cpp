#include "../stdafx.h"
#include "Genome.h"
#include <iostream>
using namespace std;

Genome::Genome()
{
}


Genome::~Genome()
{
}

const list<string>& Genome::getGene() const
{
	return geneticCode;
}
