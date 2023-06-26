// исходный текст программы сохранен в кодировке UTF-8 без BOM

// function-more-examples.cpp
// дополнительные примеры вызовов функций

#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int multiply(int z, int w)
{
    return z * w;
}

int main()
{
    std::cout << add(4, 5) << '\n'; // внутри add() x=4, y=5, поэтому x+y=9
    std::cout << add(1 + 2, 3 * 4) << '\n'; // внутри add() x=3, y=12, x+y=15

    int a{ 5 };
    std::cout << add(a, a) << '\n'; // вычисляет (5 + 5)

    std::cout << add(1, multiply(2, 3)) << '\n'; // вычисляет 1 + (2 * 3)
    std::cout << add(1, add(2, 3)) << '\n'; // вычисляет 1 + (2 + 3)

    return 0;
}
