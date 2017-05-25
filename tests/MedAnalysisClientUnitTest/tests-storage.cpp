#include <storage/GenomeDAO.h>
#include <catch.hpp>
TEST_CASE( "loading medical analysis from file", "[storage][client]" ) {
    GenomeDAO genomeDAO = GenomeDAO("../../../res/Genome.txt");
    Genome genome = genomeDAO.readAnalysis();
}