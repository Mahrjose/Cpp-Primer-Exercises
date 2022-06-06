```cpp
#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item total;
  if (std::cin >> total) {
    Sales_item trans;
    while (std::cin >> trans) {
      if (total.isbn() == trans.isbn())
        total += trans;
      else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    std::cout << total << std::endl;
  } else {
    std::cerr << "No data!" << std::endl;
    return -1;
  }
  return 0;
}
```
Input

```txt
0-201-12345-X 3 20.00
0-201-12345-X 4 20.00
0-201-12345-X 2 21.50
0-202-12345-X 2 25.50
0-203-12345-X 4 10.00
0-203-12345-X 5 13.00
0-204-12345-X 1 40.00
0-205-12345-X 6 2.00
0-205-12345-X 3 4.00
0-205-12345-X 5 3.00
0-206-12345-X 3 24.00
```