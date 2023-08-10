// исходный текст программы сохранен в кодировке UTF-8 без BOM

// boolean-returns-upgrade.cpp
// возвращение значений булева типа из функций
// (вносим в программу улучшение с помощью ветвления if)

#include <iostream>

// возвращает true, если x и y равны, иначе возвращает false
bool isEqual(int x, int y)
{
    return (x == y); // оператор== возвращает true, если x равен y, иначе false
}

int main()
{
    std::cout << "Введите целое число: ";
    int x{};
    std::cin >> x;

    std::cout << "Введите еще одно целое число: ";
    int y{};
    std::cin >> y;

    if (isEqual(x, y))
        std::cout << x << " и " << y << " равны\n";
    else
        std::cout << x << " и " << y << " не равны\n";

    return 0;
}