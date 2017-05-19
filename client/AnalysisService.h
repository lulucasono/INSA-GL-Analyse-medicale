#pragma once
#include "../server/Genome.h"
#include "../server/Disease.h"

class AnalysisService
{
public:
	list<Disease> EvaluateAll(Genome g);
	bool EvaluateOne(Genome g, Disease d);
	list<Disease> GetDisease();

	AnalysisService();
	~AnalysisService();


};

