#include "DiseaseDAO.h"

const static char DELIM = ';';

DiseaseDAO::DiseaseDAO(string fileName) {
    name = fileName;
}

DiseaseDAO::~DiseaseDAO() {
}

const unordered_multimap<string, Disease> DiseaseDAO::findAll() {

    if (!diseases.empty()) {
        return diseases;
    }

    ifstream fin;
    fin.open(name);
    if (!fin.good() || fin.eof()) {
        // TODO Throw File Not Good exception
    }

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

            diseases.emplace(diseaseName, Disease(diseaseName, linePart));
        }

    } else {
        // TODO Throw File Not Good exception
    }

    return diseases;
}

const pair<
        unordered_multimap<string, Disease>::iterator,
        unordered_multimap<string, Disease>::iterator
> DiseaseDAO::findByName(const string basic_string) {

    findAll();

    auto range = diseases.equal_range(basic_string);
    if (range.first == range.second) {
        // TODO Throw Disease Not Found excpetion
    }
    return range;
}
