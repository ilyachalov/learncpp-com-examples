// исходный текст программы сохранен в кодировке UTF-8 без BOM

// boolean-returns.cpp
// возвращение значений булева типа из функций

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

    std::cout << std::boolalpha; // выводить значения булева типа словами
                                 // «true» или «false»

    std::cout << x << " и " << y << " равны? ";
    std::cout << isEqual(x, y) << '\n'; // возвратит значение true или false

    return 0;
}