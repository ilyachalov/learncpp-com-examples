// исходный текст программы сохранен в кодировке UTF-8 без BOM

// cout.cpp
// вывод в консоль

#include <iostream> // для std::cout

// часть кода отсюда и ниже может использовать функциональность iostream

int main()
{
    std::cout << "Привет, мир!\n"; // вывести «Привет, мир!» в консоль

    std::cout << 4 << '\n'; // вывести 4 в консоль

    int x{ 5 }; // определить переменную x, инициализированную значением 5
    std::cout << x << '\n'; // вывести значение x в консоль

    std::cout << "Привет," << " мир!\n";

    std::cout << "x равен " << x << '\n';

    return 0;
}