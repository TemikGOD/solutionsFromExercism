#include "rna_transcription.h"

namespace rna_transcription {
    char to_rna(char nucleotid) {
        switch (nucleotid) {
                case 'A':
                    return 'U';
                case 'C':
                    return 'G';
                case 'G':
                    return 'C';
                default:
                    return 'A';
            }
    }
    
    std::string to_rna(std::string sequence) {
        for (auto& nucleotid : sequence) {
            nucleotid = to_rna(nucleotid);
        }
        return sequence;
    }
}  // namespace rna_transcription
