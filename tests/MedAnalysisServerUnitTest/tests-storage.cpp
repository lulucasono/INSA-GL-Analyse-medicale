#include <catch.hpp>
#include <storage/DiseaseDAO.h>

TEST_CASE( "1.1 loading diseases names", "[storage][server]" ) {
    DiseaseDAO diseaseDAO = DiseaseDAO("../../../res/diseases.txt");
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

TEST_CASE( "1.2 finding diseases by name", "[storage][server]" ) {
    DiseaseDAO diseaseDAO = DiseaseDAO("../../../res/diseases.txt");
    auto diseasePair = diseaseDAO.findByName("Maladie");
    REQUIRE(diseasePair.first->first=="Maladie");
    REQUIRE(diseasePair.first->second.name()=="Maladie");
    REQUIRE(diseasePair.first->second.riskfulGenes()[0]=="AGGT");
    REQUIRE(diseasePair.first->second.riskfulGenes()[1]=="CGT");
}

TEST_CASE( "1.3 loading diseases names on CRLF file", "[storage][server]" ) {
    DiseaseDAO diseaseDAO = DiseaseDAO("../../../res/Dictionary.txt");
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

TEST_CASE( "1.4 finding diseases by name on CRLF file", "[storage][server]" ) {
    DiseaseDAO diseaseDAO = DiseaseDAO("../../../res/Dictionary.txt");
    auto diseasePair = diseaseDAO.findByName("Maladie");
    REQUIRE(diseasePair.first->first=="Maladie");
    REQUIRE(diseasePair.first->second.name()=="Maladie");
    REQUIRE(diseasePair.first->second.riskfulGenes()[0]=="AGGT");
    REQUIRE(diseasePair.first->second.riskfulGenes()[1]=="CGT");
}