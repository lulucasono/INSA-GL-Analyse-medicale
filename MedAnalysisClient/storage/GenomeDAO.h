//
// Created by Lucas ONO on 25/05/17.
//

#ifndef MEDANALYSIS_GENOMEDAO_H
#define MEDANALYSIS_GENOMEDAO_H

#include <string>
#include <vector>
#include <fstream>
#include "../exceptions/ReadException.h"
#include "../models/Genome.h"
#include "../utils/utils.h"

using std::string;
using std::vector;
using std::ifstream;

class GenomeDAO {
public:
    GenomeDAO(string fileName = "Genome.txt");

    ~GenomeDAO();

    const Genome readAnalysis();


private:
    Genome genome;
    string name;
};



#endif //MEDANALYSIS_GENOMEDAO_H
