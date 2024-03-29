// исходный текст программы сохранен в кодировке UTF-8 без BOM

// early-returns-with-if.cpp
// ранние возвраты из функции, скомбинированные с ветвлениями if,
// очень полезны

#include <iostream>

// возвращает абсолютную величину значения переменной x
int abs(int x)
{
    if (x < 0)
        return -x; // ранний возврат (только если x < 0)

    return x;
}

int main()
{
    std::cout << abs(4) << '\n';  // выводит 4
    std::cout << abs(-3) << '\n'; // выводит 3

    return 0;
}