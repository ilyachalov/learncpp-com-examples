// исходный текст программы сохранен в кодировке UTF-8 без BOM

// prefix-postfix-inc-dec.cpp
// префиксные и постфиксные инкременты и декременты

#include <iostream>

int main()
{
    int x{ 5 };
    int y{ 5 };
    std::cout << x << ' ' << y << '\n';                    // 5 5
    std::cout << ++x << ' ' << --y << '\n'; // префиксные  // 6 4
    std::cout << x << ' ' << y << '\n';                    // 6 4
    std::cout << x++ << ' ' << y-- << '\n'; // постфиксные // 6 4
    std::cout << x << ' ' << y << '\n';                    // 7 3

    return 0;
}