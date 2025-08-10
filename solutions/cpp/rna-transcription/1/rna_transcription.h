#pragma once
#include <string>

namespace rna_transcription {
    char to_rna(char nucleotid);
    std::string to_rna(std::string sequence);
}  // namespace rna_transcription
