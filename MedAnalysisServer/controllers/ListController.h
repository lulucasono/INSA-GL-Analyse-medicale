#ifndef MEDANALYSIS_SERVER_LISTCONTROLLER_H
#define MEDANALYSIS_SERVER_LISTCONTROLLER_H

#include <iostream>
#include <string>
#include <vector>

#include "../services/AnalysisService.h"

using std::istream;
using std::string;
using std::vector;

class ListController {
public:

    ListController(string &filePath);

    vector<string> doGetList(vector<string> req);

};


#endif //MEDANALYSIS_SERVER_LISTCONTROLLER_H
