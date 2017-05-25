//
// Created by Lucas ONO on 25/05/17.
//

#include "GenomeDAO.h"

const static char *ALLOWED_CHAR = "ATCG";

GenomeDAO::GenomeDAO(string fileName) {
    name = fileName;
}

GenomeDAO::~GenomeDAO() {}

const Genome GenomeDAO::readAnalsis() {

    if (!genome.geneticCode().empty()) {
        return genome;
    }

    ifstream fin;
    fin.open(name);
    if (!fin.good() || fin.eof()) {
        throw ReadException();
        // TODO Exit Program
    }

    vector <string> linePart;
    string line;

    //check if first line is like MA v1.0
    getline(fin, line);

    if (line.compare("MA v1.0") == 0) {
        getline(fin, line);
        while (!line.empty()) {

            if (!check_char_presence(line, ALLOWED_CHAR)) {
                throw ReadException();
            }
            genome.addWord(line);
            getline(fin, line);
        }

    } else {
        // TODO Exit Program
        throw ReadException();
    }

    return genome;
}