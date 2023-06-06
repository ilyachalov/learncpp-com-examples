// исходный текст программы сохранен в кодировке UTF-8 без BOM

// function-exercise-1b.cpp
// упражнение 1b из проверочного опроса к подглаве 2.2

// (при компиляции этой программы будут получены ошибки)

#include <iostream>

int return7()
{
    return 7;

    int return9() // определение вложенных функций в C++ запрещено
    {
        return 9;
    }
}

int main()
{
    std::cout << return7() + return9() << '\n';

    return 0;
}
