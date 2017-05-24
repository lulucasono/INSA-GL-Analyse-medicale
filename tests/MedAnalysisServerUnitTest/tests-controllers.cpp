#include <catch.hpp>
#include <controllers/ListController.h>
#include <controllers/OneController.h>

using Catch::Matchers::Vector::ContainsElementMatcher;
using std::string;
using std::vector;

TEST_CASE("One Controller","[controller][server]"){
    vector<string> str;
    vector<string>input;
    input.push_back("MA v1.0");
    input.push_back("CHECK DISEASES");
    input.push_back("Maladie");
    input.push_back("AGGT;CGT");
    input.push_back("");
    str=OneController().doOneEvaluation(input,"../../../res/diseases.txt");
    REQUIRE(str[0]=="MA v1.0");
    REQUIRE(str[1]=="DISEASE Maladie");
    //REQUIRE(str[2]=="");
    REQUIRE(str[2]=="1");
    REQUIRE(str[3]=="");
}