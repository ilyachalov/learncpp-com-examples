// исходный текст программы сохранен в кодировке UTF-8 без BOM

// sizeof-on-variable.cpp
// применение оператора sizeof на переменной

#include <iostream>

int main()
{
    int x{};
    std::cout << "x имеет размер " << sizeof(x) << " байта\n";

    return 0;
}