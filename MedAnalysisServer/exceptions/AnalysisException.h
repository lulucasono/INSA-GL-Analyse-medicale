#ifndef MEDANALYSIS_SERVER_ANALYSISEXCEPTION_H
#define MEDANALYSIS_SERVER_ANALYSISEXCEPTION_H

#include <exception>

class AnalysisException :
        public std::exception {

public:
    AnalysisException() {}

    virtual ~AnalysisException() {}

    const char *what() const override {
        return "Erreur lors de l'analyse du génome";
    }
};
#endif //MEDANALYSIS_SERVER_ANALYSISEXCEPTION_H
