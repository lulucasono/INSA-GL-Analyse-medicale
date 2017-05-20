#include "stdafx.h"
#include "ServiceException.h"


const char* ServiceException::what() const throw()
{
	return m_phrase.c_str();
}

ServiceException::ServiceException() throw() :m_phrase("Une erreur s'est prouite dans le service de gestion des serveurs.")
{
}


ServiceException::~ServiceException() throw()
{
}
