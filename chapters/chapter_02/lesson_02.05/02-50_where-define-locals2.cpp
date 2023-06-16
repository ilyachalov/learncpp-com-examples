// исходный текст программы сохранен в кодировке UTF-8 без BOM

// where-define-locals2.cpp
// определение локальных переменных в начале функции

#include <iostream>

int main()
{
    int x{}, y{}, sum{}; // для чего они будут использованы?

    std::cout << "Введите целое число: ";
    std::cin >> x;

    std::cout << "Введите еще одно целое число: ";
    std::cin >> y;

    sum = x + y;
    std::cout << "Сумма этих чисел: " << sum << '\n';

    return 0;
}
