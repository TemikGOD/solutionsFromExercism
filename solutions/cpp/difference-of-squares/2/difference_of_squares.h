#pragma once

namespace difference_of_squares {
    constexpr unsigned square_of_sum(unsigned first_N_numbers) {
        unsigned sum{(1 + first_N_numbers) * first_N_numbers / 2};
        return sum * sum;
    }
    
    constexpr unsigned sum_of_squares(unsigned first_N_numbers) {
        return first_N_numbers * (first_N_numbers + 1) * (2 * first_N_numbers + 1) / 6;
    }
    
    constexpr unsigned difference(unsigned first_N_numbers) {
        return square_of_sum(first_N_numbers) - sum_of_squares(first_N_numbers);
    }
}  // namespace difference_of_squares
