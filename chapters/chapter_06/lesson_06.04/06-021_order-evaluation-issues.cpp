// исходный текст программы сохранен в кодировке UTF-8 без BOM

// order-evaluation-issues.cpp
// побочные эффекты могут стать причиной проблем с порядком вычисления
// выражений

#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int x{ 5 };
    int value{ add(x, ++x) }; // неопределенное поведение: 5 + 6 или 6 + 6?

    // результат вышеприведенного выражения зависит от того, в каком порядке
    // ваш компилятор вычисляет аргументы, передаваемые в функцию, два варианта:
    // 1) слева направо, результат: 5 + 6 = 11
    // 2) справа налево, результат: 6 + 6 = 12
    // (стандарт языка C++ не регламентирует порядок вычисления аргументов
    // функции)

    std::cout << value << '\n'; // 11 или 12, в зависимости от того, какой
                                // порядок вычисления в выражении выше
                                // выберет ваш компилятор

    // в моем случае (Windows 10, компилятор MSVC; WSL, Ubuntu, компилятор
    // g++ (GCC)) я получаю результат 12, то есть мои компиляторы вычисляют
    // аргументы, передаваемые в функцию, справа налево

    return 0;
}