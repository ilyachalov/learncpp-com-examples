// исходный текст программы сохранен в кодировке UTF-8 без BOM

// printing-boolean.cpp
// вывод в окно консоли значений булева типа

#include <iostream>

int main()
{
    std::cout << true << '\n';  // true вычисляется в 1
    std::cout << !true << '\n'; // !true вычисляется в 0

    bool b{ false };
    std::cout << b << '\n';  // b равно false, которое вычисляется в 0
    std::cout << !b << '\n'; // !b равно true, которое вычисляется в 1

    return 0;
}