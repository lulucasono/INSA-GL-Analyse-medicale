#pragma once
#include "Genome.h"
#include "Disease.h"

class AnalysisService
{
public:
	list<Disease> EvaluateAll(Genome g);
	bool EvaluateOne(Genome g, Disease d);
	list<Disease> GetDisease();

	AnalysisService();
	~AnalysisService();


};

