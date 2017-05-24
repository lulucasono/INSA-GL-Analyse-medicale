#include "ListController.h"

vector<string> ListController::doGetList(vector<string> req) {
    // TODO Renvoyer un string contenant la liste des maladies disponibles (attention aux doublons)
    return vector<string>();
}

ListController::ListController(string &filePath) {
    AnalysisService analysisService = AnalysisService(filePath);
}
