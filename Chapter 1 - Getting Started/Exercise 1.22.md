```cpp
#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item total, item;
    if (std::cin >> total) {
        while (std::cin >> item)
            total += item;
        std::cout << total << std::endl;
    }

    return 0;
}
```
Input

```txt
0-201-12345-X 3 20.00
0-201-12345-X 2 25.50
0-201-12345-X 4 10.00
0-201-12345-X 1 40.00
0-201-12345-X 6 8.00
```