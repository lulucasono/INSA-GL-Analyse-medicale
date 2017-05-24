#include <catch.hpp>
#include <storage/DiseaseDAO.h>

TEST_CASE( "loading diseases names", "[storage]" ) {
    DiseaseDAO diseaseDAO = DiseaseDAO("../../../tests/datatest/diseases.txt");
    auto diseasesMap = diseaseDAO.findAll();
    std::vector<std::string> names;
    names.push_back("Maladie");
    int i = 0;
    unordered_multimap< std::string, Disease>::iterator iter;
    for( iter=diseasesMap.begin();     iter!=diseasesMap.end();   iter++)
    {
        REQUIRE(iter->first ==names[i]);
        i++;
    }
}

TEST_CASE( "finding diseases by name", "[storage]" ) {
    DiseaseDAO diseaseDAO = DiseaseDAO("../../../tests/datatest/diseases.txt");
    auto diseasePair = diseaseDAO.findByName("Maladie");
    REQUIRE(diseasePair.first->first=="Maladie");
    REQUIRE(diseasePair.first->second.name()=="Maladie");
    REQUIRE(diseasePair.first->second.riskfulGenes()[0]=="AGGT");
    REQUIRE(diseasePair.first->second.riskfulGenes()[1]=="CGT");
}