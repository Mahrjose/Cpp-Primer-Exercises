#include <iostream>

int main() {
    int start, end;
    std::cout << "Range Start: ";
    std::cin >> start;
    std::cout << "Range Stop: ";
    std::cin >> end;

    while (start <= end) {
        std::cout << start << std::endl;
        ++start;
    }

    return 0;
}