#include "triangle.h"
#include <stdexcept>

namespace triangle {
    flavor kind(double a, double b, double c) {
        if (a <= 0 || b <= 0|| c <= 0 || a + b < c || a + c < b || b + c < a) {
            throw std::domain_error("");
        }
        if (a == b) {
            if (b == c) {
                return flavor::equilateral;
            } else {
                return flavor::isosceles;
            }
        } else if (b == c || a == c) {
            return flavor::isosceles;
        } else {
            return flavor::scalene;
        }
    }
}  // namespace triangle
