#include "pangram.h"

namespace pangram {
     bool is_pangram(std::string sentence) {
         std::vector<int> countOfLetters(26);
         for (auto ch : sentence) {
             if (ch - 'a' < 0) {
                 if (ch - 'A' >= 0 && ch - 'A' < 26) {
                     ++countOfLetters[ch - 'A'];
                 }
             } else if (ch - 'a' < 26) {
                 ++countOfLetters[ch - 'a'];
             }
         }

         for (auto countOfletter : countOfLetters) {
             if (countOfletter == 0) {
                 return false;
             }
         }

         return true;
     }
}  // namespace pangram
