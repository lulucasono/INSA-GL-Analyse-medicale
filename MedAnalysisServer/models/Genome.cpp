#include "Genome.h"

Genome::Genome() {

}
Genome::~Genome() {

}
const std::vector<std::string> &Genome::getGene() const {
  return geneticCode;
}
