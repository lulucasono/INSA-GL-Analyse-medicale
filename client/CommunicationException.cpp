#include "stdafx.h"
#include "CommunicationException.h"


const char* CommunicationException::what() const throw()
{
	return m_phrase.c_str();
}

CommunicationException::CommunicationException() throw(): m_phrase("Probleme de communication avec le serveur")
{
}


CommunicationException::~CommunicationException() throw()
{
}
