// исходный текст программы сохранен в кодировке UTF-8 без BOM

// function-calling-function.cpp
// вызов функции, которая вызывает еще одну функцию

#include <iostream> // для std::cout

void doB()
{
    std::cout << "Внутри функции doB()\n";
}

void doA()
{
    std::cout << "Начало функции doA()\n";

    doB();

    std::cout << "Окончание функции doA()\n";
}

// определение функции main()
int main()
{
    std::cout << "Начало функции main()\n";

    doA();

    std::cout << "Окончание функции main()\n";

    return 0;
}
