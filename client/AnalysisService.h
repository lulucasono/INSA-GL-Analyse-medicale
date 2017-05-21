#pragma once
#include "../server/models/Genome.h"
#include "../server/models/Disease.h"

class AnalysisService
{
public:
	list<Disease> EvaluateAll(Genome g);
	bool EvaluateOne(Genome g, Disease d);
	list<Disease> GetDisease();

	AnalysisService();
	~AnalysisService();


};

