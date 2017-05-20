#include "stdafx.h"
#include "DiseaseNotFoundException.h"


const char* DiseaseNotFoundException::what() const throw()
{
	return m_phrase.c_str();
}


DiseaseNotFoundException::DiseaseNotFoundException() throw():m_phrase("La maladie demandee n'existe pas sur le serveur")
{
}


DiseaseNotFoundException::~DiseaseNotFoundException() throw()
{ 
}
