#pragma once
#include <string>
#include <functional>
#include <agents.h>
#include <ppltasks.h>

// Cible de la commande MulticastUtil

typedef std::function<void(std::string)> ServerCallback;

class MulticastUtil : public CAsyncSocket
{
public:
	MulticastUtil(ServerCallback cb, UINT waitTime);
	virtual ~MulticastUtil();

	virtual void OnReceive(int nErrorCode);

protected:
	void OnConnect(int nErrorCode) override;
private:
	ServerCallback serverCallback; // Function called when we receive data
	UINT waitTime;
};


