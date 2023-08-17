// исходный текст программы сохранен в кодировке UTF-8 без BOM

// static-cast-int8t-int.cpp
// обеспечение отображения значения типа std::int8_t в виде числа, а не символа

#include <cstdint>  // для типа std::int8_t
#include <iostream>

int main()
{
    std::int8_t myInt{ 65 };
    std::cout << static_cast<int>(myInt) << '\n'; // всегда выведет число 65

    return 0;
}