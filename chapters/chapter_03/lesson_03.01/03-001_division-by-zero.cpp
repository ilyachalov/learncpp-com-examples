// исходный текст программы сохранен в кодировке UTF-8 без BOM

// division-by-zero.cpp
// семантическая ошибка: «деление на ноль», которая вызывает аварийное
// завершение программы

#include <iostream>

int main()
{
    int a{ 10 };
    int b{ 0 };
    std::cout << a << " / " << b << " = " << a / b << '\n';
                                             // операция деления на ноль
                                             // в математике не определена
    return 0;
}