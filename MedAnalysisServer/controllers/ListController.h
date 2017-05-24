#ifndef MEDANALYSIS_SERVER_LISTCONTROLLER_H
#define MEDANALYSIS_SERVER_LISTCONTROLLER_H

#include <iostream>
#include <string>
#include <vector>

using std::istream;
using std::string;
using std::vector;

class ListController {
public:

    vector<string> doGetList(vector<string> req);

};


#endif //MEDANALYSIS_SERVER_LISTCONTROLLER_H
