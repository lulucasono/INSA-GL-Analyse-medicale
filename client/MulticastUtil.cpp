// MulticastUtil.cpp : fichier d'implémentation
//

#include "stdafx.h"
#include "client.h"
#include "MulticastUtil.h"


#define BUFF_LEN 2048


template <class T>
void call_after(const T& callback, unsigned int timeInMs)
{
	concurrency::task_completion_event<void> tce;
	auto call = new concurrency::call<int>(
		[callback, tce](int)
		{
			callback();
			tce.set();
		});

	auto timer = new concurrency::timer<int>(timeInMs, 0, call, false);
	concurrency::task<void> event_set(tce);
	event_set.then([timer, call]()
		{
			delete call;
			delete timer;
		});

	timer->start();
}


// MulticastUtil

MulticastUtil::MulticastUtil(ServerCallback cb, UINT listenTime)
{
	serverCallback = cb;
	waitTime = listenTime;
}

MulticastUtil::~MulticastUtil()
{
}


// Fonctions membres MulticastUtil

void MulticastUtil::OnReceive(int nErrorCode)
{
	// TODO OnReceive

	char szBuff[BUFF_LEN];


	int nReceivedSize = Receive(szBuff, BUFF_LEN);
	TRACE1("Received: %d bytes \n", nReceivedSize);

	if (nReceivedSize <= 0)
	{
		TRACE1("Socket receive error: %d\n", GetLastError());
		return;
	}

	szBuff[nReceivedSize] = '\0';

	std::string receiveData(szBuff);


	TRACE(szBuff);

	serverCallback(receiveData);


	// TODO: ajoutez ici votre code spécialisé et/ou l'appel de la classe de base

	CAsyncSocket::OnReceive(nErrorCode);
}

void MulticastUtil::OnConnect(int nErrorCode)
{
	call_after([this]
	           {
		           CAsyncSocket::Close();
	           },
	           waitTime);
}
