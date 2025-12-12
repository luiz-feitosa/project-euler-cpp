#include <iostream>

int main() {
    const int TARGET = 1000;
    int sum = 0;

    for (int i = 0; i < TARGET; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    std::cout << sum << std::endl;
    return 0;
}
