// исходный текст программы сохранен в кодировке UTF-8 без BOM

// static-cast-for-int-div.cpp
// применение оператора static_cast для выполнения деления с результатом
// в виде вещественного числа, если оба операнда имеют целочисленный тип

#include <iostream>

int main()
{
    int x{ 7 };
    int y{ 4 };

    std::cout << "int / int = " << x / y << '\n';
    std::cout << "double / int = " << static_cast<double>(x) / y << '\n';
    std::cout << "int / double = " << x / static_cast<double>(y) << '\n';
    std::cout << "double / double = " << static_cast<double>(x)
                                       / static_cast<double>(y) << '\n';

    return 0;
}