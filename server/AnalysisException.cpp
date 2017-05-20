#include "stdafx.h"
#include "AnalysisException.h"


const char* AnalysisException::what() const throw()
{
	return m_phrase.c_str();
}

AnalysisException::AnalysisException() throw():m_phrase("Impossible d'evaluer le genome recu")
{
}


AnalysisException::~AnalysisException() throw()
{
}
