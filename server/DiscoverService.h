#pragma once
class DiscoverService
{
public:
	DiscoverService();
	~DiscoverService();
protected:
	void startMulticast();
	void stopMulticast();
};

