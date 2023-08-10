// исходный текст программы сохранен в кодировке UTF-8 без BOM

// chaining-if-statements.cpp
// сцепление ветвлений if-else

#include <iostream>

int main()
{
    std::cout << "Введите целое число: ";
    int x{};
    std::cin >> x;

    if (x > 0)
        std::cout << "Введенное значение является положительным\n";
    else if (x < 0)
        std::cout << "Введенное значение является отрицательным\n";
    else
        std::cout << "Введенное значение является нулем\n";

    return 0;
}