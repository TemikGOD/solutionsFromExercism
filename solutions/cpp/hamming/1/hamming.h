#pragma once
#include <stdexcept>
#include <string>

namespace hamming {
    unsigned compute(const std::string& firstStrand, const std::string& secondStrand);
}  // namespace hamming
