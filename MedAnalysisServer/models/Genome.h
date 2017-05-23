#ifndef MEDANALYSIS_SERVER_GENOME_H
#define MEDANALYSIS_SERVER_GENOME_H
#pragma once
#include <list>

using namespace std;

class Genome
{
public:
    Genome();
    virtual ~Genome();
    const list<string>& getGene() const;
private:
    list<string> geneticCode;
};


#endif //MEDANALYSIS_SERVER_GENOME_H
