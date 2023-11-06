// исходный текст программы сохранен в кодировке UTF-8 без BOM

// rel-oper-with-ints.cpp
// операторы сравнения для целых чисел

#include <iostream>

int main()
{
    std::cout << "Введите целое число: ";
    int x{};
    std::cin >> x;

    std::cout << "Введите еще одно целое число: ";
    int y{};
    std::cin >> y;

    if (x == y)
        std::cout << x << " равно " << y << '\n';
    if (x != y)
        std::cout << x << " не равно " << y << '\n';
    if (x > y)
        std::cout << x << " больше, чем " << y << '\n';
    if (x < y)
        std::cout << x << " меньше, чем " << y << '\n';
    if (x >= y)
        std::cout << x << " больше или равно " << y << '\n';
    if (x <= y)
        std::cout << x << " меньше или равно " << y << '\n';

    return 0;
}