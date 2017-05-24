#ifndef MEDANALYSIS_SERVER_ALLCONTROLLER_H
#define MEDANALYSIS_SERVER_ALLCONTROLLER_H

#include <iostream>
#include <string>
#include <vector>
#include "../utils/utils.h"

using std::istream;
using std::string;
using std::vector;

class AllController {
public:

    vector<string> doCompleteEvaluation(vector<string> req);

};

#endif //MEDANALYSIS_SERVER_ALLCONTROLLER_H
