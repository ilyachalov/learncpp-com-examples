// исходный текст программы сохранен в кодировке UTF-8 без BOM

// functions-many-times.cpp
// вызов одной функции несколько раз

#include <iostream> // для std::cout

void doPrint()
{
    std::cout << "Внутри функции doPrint()\n";
}

// определение функции main()
int main()
{
    std::cout << "Начало функции main()\n";

    doPrint(); // функция doPrint() вызывается в первый раз
    doPrint(); // функция doPrint() вызывается во второй раз

    std::cout << "Окончание функции main()\n";

    return 0;
}
