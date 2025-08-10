#pragma once
#include <map>
#include <stdexcept>
#include <string>

namespace nucleotide_count {
    std::map<char, int> count(const std::string& sequence);
}  // namespace nucleotide_count
