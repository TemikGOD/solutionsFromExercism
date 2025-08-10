#include "collatz_conjecture.h"

namespace collatz_conjecture {
    size_t steps(int number) {
        if (number <= 0) {
            throw std::domain_error("Number must be positive");
        }
        
        size_t stepsCount{};
        while (number != 1) {
            if (number % 2 == 0) {
                number /= 2;
            } else {
                number = number * 3 + 1;
            }
            ++stepsCount;
        }
        
        return stepsCount;
    }
}  // namespace collatz_conjecture
