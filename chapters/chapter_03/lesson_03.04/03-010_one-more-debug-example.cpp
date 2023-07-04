// исходный текст программы сохранен в кодировке UTF-8 без BOM

// one-more-debug-example.cpp
// пример отладки программы с помощью совмещения двух тактик отладки:
// проверка хода выполнения кода, вывод значений переменных

#include <iostream>

int add(int x, int y)
{
    std::cerr << "add() вызвана (x=" << x << ", y=" << y << ")\n"; // отладка
    return x + y;
}

void printResult(int z)
{
    std::cerr << "printResult() вызвана (z=" << z << ")\n"; // для отладки
    std::cout << "Ответ: " << z << '\n';
}

int getUserInput()
{
    std::cerr << "getUserInput() вызвана\n"; // для отладки
    std::cout << "Введите число: ";
    int x{};
    std::cin >> x;
    std::cerr << "getUserInput::x = " << x << '\n'; // для отладки
    // return --x; // было, с ошибкой
    return x;      // стало, ошибка исправлена
}

int main()
{
    std::cerr << "main() вызвана\n"; // для отладки
    int x{ getUserInput() };
    std::cerr << "main::x = " << x << '\n'; // для отладки
    int y{ getUserInput() };
    std::cerr << "main::y = " << y << '\n'; // для отладки

    int z{ add(x, y) };
    std::cerr << "main::z = " << z << '\n'; // для отладки
    printResult(z);

    return 0;
}