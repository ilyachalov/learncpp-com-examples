// исходный текст программы сохранен в кодировке UTF-8 без BOM

// function-exercise-1e.cpp
// упражнение 1e из проверочного опроса к подглаве 2.2

// (при компиляции этой программы будут получены ошибки)

#include <iostream>

int return 5() // ошибка в имени функции
{
    return 5;
}

int main()
{
    std::cout << return 5() << '\n';

    return 0;
}