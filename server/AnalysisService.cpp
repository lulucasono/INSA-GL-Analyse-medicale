#include "stdafx.h"
#include "AnalysisService.h"
#include "../server/diseaseDAO.h"
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


list<Disease> AnalysisService::EvaluateAll(Genome g)
{
	//list<string> listGenome = g.getGene();
	diseaseDAO* dDAO = new diseaseDAO("path_db");
	list<Disease> listDisease = dDAO->FindAll();
	list<Disease> allDiseasePossible;
	for (list<Disease>::iterator itD = listDisease.begin(); itD != listDisease.end(); ++itD)
	{
		if (EvaluateOne(g, *itD))
		{
			allDiseasePossible.push_back(*itD);
		}
	}
	return allDiseasePossible;


}
bool AnalysisService::EvaluateOne(Genome g, Disease d)
{
	bool b = true;
	list<string> listGenome = g.getGene();
	list<string> riskfulGenes = d.riskfulGenes();

	for (list<string>::iterator itRisk = riskfulGenes.begin(); itRisk != riskfulGenes.end(); ++itRisk)
	{
		list<string>::iterator itfind = find(listGenome.begin(), listGenome.end(), itRisk);
		if (itfind != listGenome.end()) // on a trouve
		{

		}
		else // on n'a pas trouve
		{
			b = false;
			break;
		}
	}
	return b;
}

list<Disease> AnalysisService::GetDisease()
{
	diseaseDAO* dDAO = new diseaseDAO("path_db");
	list<Disease> listDisease = dDAO->FindAll();
	return listDisease;
}

