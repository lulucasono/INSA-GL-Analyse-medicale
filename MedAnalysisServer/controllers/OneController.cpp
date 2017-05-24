#include "OneController.h"
#include "../services/AnalysisService.h"


vector<string> OneController::doOneEvaluation(vector<string> req) {
    // TODO Parsing pour evaluation d'une maladie (récupérer la maladie, etc...)
    string diseaseName = req[2];
    vector<string> genes = split(req[3], ';', false);
    AnalysisService services = AnalysisService();
    auto disease = services.getDiseaseByName(diseaseName);
    Genome genome = Genome(genes);
    bool risk = false;
    bool error = true;
    for (auto it = disease.first; it != disease.second; ++it) {
        error = false;
        if (services.evaluateOne(genome, it->second)) {
            risk = true;
        }
    }
    if (error) {
        return getError("Unknown disease to the database");
    }

    vector<string> response;
    response.push_back("MA v1.0");
    response.push_back("DISEASE "+diseaseName);
    if(risk){
        response.push_back("1");
        return response;
    }
    response.push_back("0");
    return response;
}
