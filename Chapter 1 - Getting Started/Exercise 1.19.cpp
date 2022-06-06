#include <iostream>

int main() {
    int start, end;
    std::cin >> start >> end;

    if (end > start) {
        while (start <= end) {
            std::cout << start << std::endl;
            start++;
        }
    } else if (end < start) {
        while (end <= start) {
            std::cout << end << std::endl;
            end++;
        }
    } else {
        std::cout << "The two numbers are the same!" << std::endl;
    }

    return 0;
}