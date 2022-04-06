#include <iostream>

int main() {
    int sum = 0;
    // This for loop returns sum of all numbers
    // from -100 to 100
    for (int i = -100; i <= 100; ++i) {
        sum += i;
    }

    std::cout << "The final value of sum is " << sum << std::endl;
    return 0;
}