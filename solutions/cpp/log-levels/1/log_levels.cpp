#include <string>

namespace log_line {
std::string message(std::string line) {
    return line.substr(line.find(' ') + 1);
}

std::string log_level(std::string line) {
    return line.substr(1, line.find(']') - 1);
}

std::string reformat(std::string line) {
    std::string result = message(line);
    result += " (";
    result += log_level(line);
    result.push_back(')');
    return result;
}
}  // namespace log_line
