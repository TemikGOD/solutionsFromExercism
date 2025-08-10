#include "grains.h"
#include <cmath>

namespace grains {
    unsigned long long square(int squareNum) {
        return 1ULL << (squareNum - 1);
    }
}  // namespace grains
