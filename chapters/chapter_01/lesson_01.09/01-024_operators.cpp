// исходный текст программы сохранен в кодировке UTF-8 без BOM

// operators.cpp
// операторы (знаки операций)

#include <iostream>

int main()
{
    std::cout << 1 + 2 << '\n';

    std::cout << 3 + 4 << '\n';

    std::cout << 3 + 4 - 5 << '\n';

    std::cout << 2 + 3 * 4 << '\n';

    int x{2};
    std::cout << (x = 5) << '\n';

    return 0;
}
