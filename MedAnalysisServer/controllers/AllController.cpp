#include "AllController.h"

const static char EOP = ';';

vector<string> AllController::doCompleteEvaluation(vector<string> req) {
    // TODO Parsing de la requête
    // TODO Check génome format

    AnalysisService service;
    string word_list = req[2];

    vector<string> genes = split(word_list,EOP,true);

    vector<string> res;
    res.push_back("MA v1.0");

    return res;
}
