#include <iostream>

int main() {
    const int TARGET = 100;
    int sum_of_squares = 0;
    int sum = 0;

    for (int i = 1; i <= TARGET; ++i) {
        sum_of_squares += i * i;
        sum += i;
    }

    int square_of_sum = sum * sum;
    int difference = square_of_sum - sum_of_squares;

    std::cout << difference << std::endl;
    return 0;
}
