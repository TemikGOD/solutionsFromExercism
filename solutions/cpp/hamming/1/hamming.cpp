#include "hamming.h"

namespace hamming {
    unsigned compute(const std::string& firstStrand, const std::string& secondStrand) {
        if (firstStrand.size() != secondStrand.size()) {
            throw std::domain_error("Strands must have identical size");
        }
        
        unsigned hammingDistance{};
        for (size_t i{}; i < firstStrand.size(); ++i) {
            if (firstStrand[i] != secondStrand[i]) {
                ++hammingDistance;
            }
        }
        
        return hammingDistance;
    }
}  // namespace hamming
