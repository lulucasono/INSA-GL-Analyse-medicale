#include "stdafx.h"
#include "Disease.h"
#include <iostream>
using namespace std;


Disease::Disease(string name) :d_name(name)
{
}

const string& Disease::name() const
{
	return d_name;
}



Disease::~Disease()
{
}

