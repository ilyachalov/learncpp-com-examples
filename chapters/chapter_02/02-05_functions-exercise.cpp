// исходный текст программы сохранен в кодировке UTF-8 без BOM

// functions-exercise.cpp
// упражнение с определением и вызовом функций

#include <iostream>

void doB()
{
    std::cout << "Внутри функции doB()\n";
}

void doA()
{
    std::cout << "Внутри функции doA()\n";
    doB();
}

// определение функции main()
int main()
{
    std::cout << "Начало функции main()\n";

    doA();
    doB();

    std::cout << "Окончание функции main()\n";

    return 0;
}