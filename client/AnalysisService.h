#pragma once
#include "../server/Genome.h"
#include "../server/Disease.h"
#include <list>

class AnalysisService
{
public:
	list<Disease> EvaluateAll(Genome g);
	boolean EvaluateOne(Genome g, Disease d);



	AnalysisService();
	~AnalysisService();


};

