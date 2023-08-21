// исходный текст программы сохранен в кодировке UTF-8 без BOM

// runtime-const.cpp
// константа времени выполнения

#include <iostream>

int getNumber()
{
    std::cout << "Введите целое число: ";
    int y{};
    std::cin >> y;

    return y;
}

int main()
{
    const int x{ 3 };           // x — константа времени компиляции

    const int y{ getNumber() }; // y — константа времени выполнения

    const int z{ x + y };       // x + y является выражением времени выполнения
    std::cout << z << '\n';     // это тоже выражение времени выполнения

    return 0;
}