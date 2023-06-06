// исходный текст программы сохранен в кодировке UTF-8 без BOM

// function-exercise-1a.cpp
// упражнение 1a из проверочного опроса к подглаве 2.2

#include <iostream>

int return7()
{
    return 7;
}

int return9()
{
    return 9;
}

int main()
{
    std::cout << return7() + return9() << '\n';

    return 0;
}
