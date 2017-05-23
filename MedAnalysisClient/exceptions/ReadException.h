#ifndef MEDANALYSIS_CLIENT_READ_EXCEPTION_H
#define MEDANALYSIS_CLIENT_READ_EXCEPTION_H

#include <exception>

class ReadException :
		public std::exception {

 public:
  ReadException() {}
  virtual ~ReadException() {}
};

#endif // MEDANALYSIS_CLIENT_READ_EXCEPTION_H