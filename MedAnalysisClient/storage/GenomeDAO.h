//
// Created by Lucas ONO on 25/05/17.
//

#ifndef MEDANALYSIS_GENOMEDAO_H
#define MEDANALYSIS_GENOMEDAO_H


class GenomeDAO {
public:
    GenomeDAO(string fileName = "Genome.txt");

    ~GenomeDAO();

    const Genome readAnalysis();


private:
    Genome genome;
};



#endif //MEDANALYSIS_GENOMEDAO_H
