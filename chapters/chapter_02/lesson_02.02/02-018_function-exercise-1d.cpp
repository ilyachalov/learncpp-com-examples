// исходный текст программы сохранен в кодировке UTF-8 без BOM

// function-exercise-1d.cpp
// упражнение 1d из проверочного опроса к подглаве 2.2

#include <iostream>

int getNumbers()
{
    return 5;
    return 7;
}

int main()
{
    std::cout << getNumbers() << '\n';
    std::cout << getNumbers() << '\n';

    return 0;
}
