```cpp
#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;

    return 0;
}
```
Input

```txt
0-201-12345-X 3 20.00
0-201-12345-X 2 25.50
```