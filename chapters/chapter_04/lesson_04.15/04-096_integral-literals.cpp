// исходный текст программы сохранен в кодировке UTF-8 без BOM

// integral-literals.cpp
// использование целочисленных литералов

#include <iostream>

int main()
{
    std::cout << 5 << '\n';  // 5 (без суффикса) имеет тип int (по умолчанию)
    std::cout << 5L << '\n'; // 5L имеет тип long
    std::cout << 5u << '\n'; // 5u имеет тип unsigned int

    return 0;
}