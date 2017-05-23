#ifndef MEDANALYSIS_SERVER_DISCOVERSERVICE_H
#define MEDANALYSIS_SERVER_DISCOVERSERVICE_H

class DiscoverService {
 public:

  DiscoverService(unsigned int p_loopTime);
  void startMulticast();
  void stopMulticast();

 private:
  void doMulticast();

  bool stop;
  unsigned int p_loopTime;
};

#endif //MEDANALYSIS_SERVER_DISCOVERSERVICE_H
