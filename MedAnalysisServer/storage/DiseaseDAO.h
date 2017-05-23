#ifndef MEDANALYSIS_SERVER_DISEASEDAO_H
#define MEDANALYSIS_SERVER_DISEASEDAO_H

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <fstream>
using std::ifstream;

#include "../models/Disease.h"
#include "../utils/utils.h"



class DiseaseDAO {
 public:
  DiseaseDAO(std::string fileName = "Diseases.txt");

  ~DiseaseDAO();

  vector<Disease> FindAll();

 private:
  string name;
};

#endif //MEDANALYSIS_SERVER_DISEASEDAO_H
