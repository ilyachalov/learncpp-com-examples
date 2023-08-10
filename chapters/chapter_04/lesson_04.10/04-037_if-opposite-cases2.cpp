// исходный текст программы сохранен в кодировке UTF-8 без BOM

// if-opposite-cases2.cpp
// обработка с помощью утверждения if противоположных случаев
// (второй вариант)

#include <iostream>

int main()
{
    std::cout << "Введите целое число: ";
    int x{};
    std::cin >> x;

    bool zero{ x == 0 };
    if (zero)
        std::cout << "Введенное значение является нулем\n";
    if (!zero)
        std::cout << "Введенное значение НЕ является нулем\n";

    return 0;
}