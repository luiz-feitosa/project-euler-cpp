#include <iostream>

int main() {
    const int TARGET = 4'000'000;
    int a = 1;
    int b = 2;
    int c = 0;
    int sum = 0;

    while (b <= TARGET) {
        if (b % 2 == 0) {
            sum += b;
        }
    c = a + b;
    a = b;
    b = c;
    }

    std::cout << sum << std::endl;
    return 0;
}
