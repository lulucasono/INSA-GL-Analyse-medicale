#include "AllController.h"

const static char EOP = ';';

vector<string> AllController::doCompleteEvaluation(vector<string> req) {
    // TODO Parsing de la requête
    // TODO Check génome format

    AnalysisService service;
    string word_list = req[2];

    vector<string> genes = split(word_list,EOP,true);

    Genome genome = Genome(genes);

    vector<Disease> diseases = service.evaluateAll(genome);

    vector<string> res;
    res.push_back("MA v1.0");
    for (int i = 0;i<diseases.size();i++)
    {
        res.push_back("DISEASE "+diseases[i].name());
    }
    res.push_back("");
    res.push_back("");

    return res;
}
