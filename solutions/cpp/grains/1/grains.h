#pragma once

namespace grains {
    unsigned long long square(int squareNum);
    
    constexpr unsigned long long total() {
        unsigned long long totalSum{};
        for (int i{}; i < 64; ++i) {
            totalSum += 1ULL << i;
        }
        return totalSum;
    }
}  // namespace grains
