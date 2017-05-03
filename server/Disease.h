#pragma once
#include <iostream>
#include <list>

using namespace std;

class Disease
{
public:
	//////constructor///////
	Disease(string cs,list<string> li);

	//////getter and setter//////

	const string& name() const;
	const list<string>& riskfulGenes() const;

	//////destructor//////
	virtual ~Disease();
private:
	string d_name;
	list<string> d_list;

};

