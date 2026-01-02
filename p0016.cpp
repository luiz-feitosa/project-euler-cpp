#include <iostream>
#include <string>

int main() {
    const int BASE = 2;
    const int EXPONENT = 1000;
    std::string number = "1";

    // Calculate base^exponent 
    for(int i = 0; i < EXPONENT; ++i) {

        // Multiply each digit by base 
        int carry = 0;
        for(int j = number.length() - 1; j >= 0; --j) {
            int digit = number[j] - '0';
            int temp = BASE * digit + carry;
            number[j] = temp % 10 + '0';
            carry = temp / 10;
        }

        // Handle remaining carry
        if (carry) {
            number = std::to_string(carry) + number;
        }
    }

    // Calculate digit sum
    int digit_sum = 0;
    for(char digit : number) {
        digit_sum += digit - '0';
    }

    std::cout << digit_sum << std::endl;
    return 0;
}
