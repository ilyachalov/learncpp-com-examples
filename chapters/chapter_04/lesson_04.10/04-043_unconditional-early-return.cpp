// исходный текст программы сохранен в кодировке UTF-8 без BOM

// unconditional-early-return.cpp
// безусловный ранний возврат из функции бесполезен

#include <iostream>

void print()
{
    std::cout << "А\n";

    return; // функция всегда будет возвращаться в вызывающую функцию здесь

    std::cout << "Б\n"; // буква «Б» никогда не будет выведена в окно консоли
}

int main()
{
    print();

    return 0;
}