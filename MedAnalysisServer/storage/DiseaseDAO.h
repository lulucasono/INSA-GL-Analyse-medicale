#ifndef MEDANALYSIS_SERVER_DISEASEDAO_H
#define MEDANALYSIS_SERVER_DISEASEDAO_H

#pragma once
#include <string>
#include <list>
#include <fstream>
#include "../models/Disease.h"

using namespace std;
class DiseaseDAO
{
public:
    DiseaseDAO(string fileName="nameDeFichier");
    ~diseaseDAO();
    list<Disease> FindAll();

private:
    string name;
};

#endif //MEDANALYSIS_SERVER_DISEASEDAO_H
