// ClientSocket.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "server.h"
#include "ClientSocket.h"


// ClientSocket

void ClientSocket::OnReceive(int nErrorCode)
{
	// TODO OnReceive

	CAsyncSocket::OnReceive(nErrorCode);
}

ClientSocket::ClientSocket()
{
}

ClientSocket::~ClientSocket()
{
}


// Fonctions membres ClientSocket
