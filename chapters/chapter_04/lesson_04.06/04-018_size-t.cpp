// исходный текст программы сохранен в кодировке UTF-8 без BOM

// size-t.cpp
// тип данных std::size_t

#include <cstddef>  // для std::size_t
#include <iostream>

int main()
{
    // вывод размера значения типа int в байтах
    std::cout << sizeof(int) << '\n';

    // вывод размера значения типа std::size_t в байтах
    std::cout << sizeof(std::size_t) << '\n';

    return 0;
}