#pragma once
#include <iostream>

using namespace std;

class Disease
{
public:
	//////constructor///////
	Disease(string cs);

	//////getter and setter//////

	const string& name() const;

	//////destructor//////
	virtual ~Disease();
private:
	string d_name;

};


