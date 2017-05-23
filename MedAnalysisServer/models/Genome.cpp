#include "stdafx.h"
#include "Disease.h"
using namespace std;


Disease::Disease(string name,list<string>li):d_name(name),d_list(li)
{
}

const string& Disease::name() const
{
    return d_name;
}

const list<string>& Disease::riskfulGenes() const
{
    return d_list;
}





Disease::~Disease()
{
}
