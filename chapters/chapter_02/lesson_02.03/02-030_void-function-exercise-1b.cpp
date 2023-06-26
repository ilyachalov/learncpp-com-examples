// исходный текст программы сохранен в кодировке UTF-8 без BOM

// void-function-exercise-1b.cpp
// упражнение 1b из проверочного опроса к подглаве 2.3

#include <iostream>

void printA()
{
    std::cout << "А\n";
}

int main()
{
    std::cout << printA() << '\n'; // ошибка компиляции

    return 0;
}
