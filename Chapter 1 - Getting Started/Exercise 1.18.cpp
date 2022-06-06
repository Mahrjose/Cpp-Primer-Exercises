#include <iostream>

int main() {
    int currVal, val;
    if (std::cin >> currVal) {
        int counter = 1;
        while (std::cin >> val) {
            if (currVal == val) {
                ++counter;
            } else {
                std::cout << currVal << " occurs " << counter << " times" << std::endl;
                counter = 1;
                currVal = val;
            }
        }
        std::cout << currVal << " occurs " << counter << " times" << std::endl;
    }

    return 0;
}