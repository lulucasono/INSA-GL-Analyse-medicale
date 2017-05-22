#ifndef MEDANALYSIS_CLIENT_SERVICE_EXCEPTION_H
#define MEDANALYSIS_CLIENT_SERVICE_EXCEPTION_H

#include <exception>

class ServiceException :
		public std::exception {

 public:
  ServiceException();
  ~ServiceException();
};

#endif // MEDANALYSIS_CLIENT_SERVICE_EXCEPTION_H