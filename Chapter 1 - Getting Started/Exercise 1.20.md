```cpp
#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item item;
  while (std::cin >> item)
    std::cout << item << std::endl;

  return 0;
}
```
```txt
0-201-12345-X 3 20.00
0-202-12345-X 2 25.50
0-203-12345-X 4 10.00
0-204-12345-X 1 40.00
0-205-12345-X 6 2.00
```