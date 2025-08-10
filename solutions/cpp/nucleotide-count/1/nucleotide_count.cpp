#include "nucleotide_count.h"

namespace nucleotide_count {
    std::map<char, int> count(const std::string& sequence) {
        std::map<char, int> countersOfNucleotids{{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};
        for (auto nucleotid : sequence) {
            if (nucleotid == 'A' || nucleotid == 'C' || nucleotid == 'G' || nucleotid == 'T') {
                ++countersOfNucleotids[nucleotid];
            } else {
                throw std::invalid_argument("Sequence of nucleotids can contain only A, C, G or T");
            }
        }
        return countersOfNucleotids;
    }
}  // namespace nucleotide_count
