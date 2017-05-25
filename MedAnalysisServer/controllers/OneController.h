#ifndef MEDANALYSIS_SERVER_ONECONTROLLER_H
#define MEDANALYSIS_SERVER_ONECONTROLLER_H

#include <iostream>
#include <string>
#include <vector>
#include "../utils/utils.h"
#include "../services/AnalysisService.h"

using std::istream;
using std::string;
using std::vector;

class OneController {
public:

    OneController(const string filePath);


    vector<string> doOneEvaluation(vector<string> req);

private:
    AnalysisService service;
};

#endif //MEDANALYSIS_SERVER_ONECONTROLLER_H
