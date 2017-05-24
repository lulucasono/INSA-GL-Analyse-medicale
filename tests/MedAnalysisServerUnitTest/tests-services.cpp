#include <catch.hpp>
#include <services/AnalysisService.h>

TEST_CASE( "evaluating for one disease", "[services]" ) {
    AnalysisService service = AnalysisService("../../../res/diseases.txt");
    std::vector<std::string> genes;
    genes.push_back("AAAA");
    genes.push_back("CCCC");
    genes.push_back("TTTT");
    Genome genome = Genome(genes);
    auto disease = service.getDiseaseByName("Maladie");
    REQUIRE(!service.evaluateOne(genome,disease.first->second));
}

TEST_CASE( "evaluating for one disease other genes", "[services]" ) {
    AnalysisService service = AnalysisService("../../../res/diseases.txt");
    std::vector<std::string> genes;
    genes.push_back("AGGT");
    genes.push_back("CGT");
    genes.push_back("TTTT");
    Genome genome = Genome(genes);
    auto disease = service.getDiseaseByName("Maladie");
    REQUIRE(service.evaluateOne(genome,disease.first->second));
}