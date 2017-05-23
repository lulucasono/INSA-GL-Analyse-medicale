#include "DiseaseDAO.h"

const static char DELIM = ';';

DiseaseDAO::DiseaseDAO(string fileName) {
  name = fileName;
}

DiseaseDAO::~DiseaseDAO() {
}

vector<Disease> DiseaseDAO::FindAll() {

  ifstream fin;
  fin.open(name);
  if (!fin.good() || fin.eof()) {
    // TODO Throw File Not Good exception
  }

  vector<Disease> data;
  vector<string> linePart;
  string line;
  string diseaseName;

  //check if first line is like MA v1.0
  getline(fin, line);

  if (line.compare("MA v1.0")) {

    while (!fin.eof()) {
      getline(fin, line);
      linePart = split(line, DELIM, false);

      diseaseName = linePart.at(0);
      linePart.erase(linePart.begin());

      data.push_back(Disease(diseaseName, linePart));
    }

  } else {
    // TODO Throw File Not Good exception
  }

  return data;
}
