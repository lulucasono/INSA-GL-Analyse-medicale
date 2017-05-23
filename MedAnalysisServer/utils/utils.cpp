#include "utils.h"

template<typename Out>
void split(const std::string &s, char delim, Out result, bool emptyString) {
  std::stringstream ss;
  ss.str(s);
  std::string item;
  if (emptyString) {
    while (std::getline(ss, item, delim)) {
      *(result++) = item;
    }
  } else {
    while (std::getline(ss, item, delim)) {
      if (!item.empty()) {
        *(result++) = item;
      }
    }
  }
}

std::vector <std::string> split(const std::string &s, char delim, bool emptyString) {
  std::vector <std::string> elems;
  split(s, delim, std::back_inserter(elems), emptyString);
  return elems;
}