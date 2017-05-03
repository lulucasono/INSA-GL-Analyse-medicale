#pragma once

// Cible de la commande ClientSocket

class ClientSocket : public CAsyncSocket
{
protected:
	void OnReceive(int nErrorCode) override;
public:
	ClientSocket();
	virtual ~ClientSocket();
};


