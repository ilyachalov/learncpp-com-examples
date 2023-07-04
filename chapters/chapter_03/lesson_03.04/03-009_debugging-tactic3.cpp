// исходный текст программы сохранен в кодировке UTF-8 без BOM

// debugging-tactic3.cpp
// тактика отладки: вывод значений переменных (в т.ч. параметров функций)

#include <iostream>

int add(int x, int y)
{
    std::cerr << "add() вызвана (x=" << x << ", y=" << y << ")\n"; // отладка
    return x + y;
}

void printResult(int z)
{
    std::cout << "Ответ: " << z << '\n';
}

int getUserInput()
{
    std::cout << "Введите число: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    int x{ getUserInput() };
    std::cerr << "main::x = " << x << '\n'; // для отладки
    int y{ getUserInput() };
    std::cerr << "main::y = " << y << '\n'; // для отладки

    std::cout << x << " + " << y << '\n';

    int z{ add(x, 5) }; // ошибка: вторым аргументом вместо y введено 5
    std::cerr << "main::z = " << z << '\n'; // для отладки
    printResult(z);

    return 0;
}