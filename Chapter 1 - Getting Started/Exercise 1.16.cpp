#include <iostream>

int main() {
    int sum = 0, input = 0;
    while (std::cin >> input) {
        sum += input;
    }

    std::cout << "Total Sum is " << sum << std::endl;

    return 0;
}