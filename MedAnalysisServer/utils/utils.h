#include <string>
#include <sstream>
#include <vector>
#include <iterator>

template<typename Out>
void split(const std::string &s, char delim, Out result, bool emptyString = true);

std::vector<std::string> split(const std::string &s, char delim, bool emptyString = true);