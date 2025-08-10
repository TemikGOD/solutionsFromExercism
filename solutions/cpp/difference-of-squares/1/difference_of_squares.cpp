#include "difference_of_squares.h"

namespace difference_of_squares {
    unsigned square_of_sum(unsigned first_N_numbers) {
        unsigned tmp{(1 + first_N_numbers) * first_N_numbers >> 1};
        return tmp * tmp;
    }
    
    unsigned sum_of_squares(unsigned first_N_numbers) {
        unsigned result_sum{1};
        unsigned previous_square{1};
        for (unsigned i{2}; i <= first_N_numbers; ++i) {
            previous_square = previous_square + (i << 1) - 1;
            result_sum += previous_square;
        }
        return result_sum;
    }
    
    unsigned difference(unsigned first_N_numbers) {
        return square_of_sum(first_N_numbers) - sum_of_squares(first_N_numbers);
    }
}  // namespace difference_of_squares
