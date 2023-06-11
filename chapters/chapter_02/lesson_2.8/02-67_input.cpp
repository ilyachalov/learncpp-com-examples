// исходный текст программы сохранен в кодировке UTF-8 без BOM

// input.cpp
// один из файлов многофайловой программы, содержит определение
// функции getInteger

#include <iostream>

int getInteger()
{
    std::cout << "Введите целое число: ";
    int x{};
    std::cin >> x;
    return x;
}