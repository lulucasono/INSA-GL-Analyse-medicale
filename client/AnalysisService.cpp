#include "stdafx.h"
#include "AnalysisService.h"
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

AnalysisService::AnalysisService()
{
}


AnalysisService::~AnalysisService()
{
}

// --------- Implementations to change : should be requests to the server -----------------

list<Disease> AnalysisService::EvaluateAll(Genome g)
{
	list<Disease> allDiseasePossible;
	// TODO : request to server. Parameter = g
	return allDiseasePossible;


}
bool AnalysisService::EvaluateOne(Genome g, Disease d)
{
	bool b = true;
	// TODO : send request to server, parameters : g, d
	return b;
}

list<Disease> AnalysisService::GetDisease()
{
	list<Disease> listDisease;
	// TODO : send request to server
	return listDisease;
}

