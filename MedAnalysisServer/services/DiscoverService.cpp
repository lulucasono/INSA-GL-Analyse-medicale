#include "DiscoverService.h"


void DiscoverService::startMulticast() {

  // TODO Start Worker
  stop = false;
}
void DiscoverService::stopMulticast() {

  stop = true;
}
void DiscoverService::doMulticast() {

  while (!stop) {

    // TODO Send data on multicast

    // TODO Sleep(loopTime * 1000)
  }

}
DiscoverService::DiscoverService(unsigned int loopTime) : p_loopTime(loopTime) {}
