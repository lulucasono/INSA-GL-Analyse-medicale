#ifndef MEDANALYSIS_CLIENT_COMMUNICATION_EXCEPTION_H
#define MEDANALYSIS_CLIENT_COMMUNICATION_EXCEPTION_H

#include <exception>

class CommunicationException :
    public std::exception {

 public:
  CommunicationException();
  ~CommunicationException();
};

#endif // MEDANALYSIS_CLIENT_COMMUNICATION_EXCEPTION_H