// исходный текст программы сохранен в кодировке UTF-8 без BOM

// const-function-params.cpp
// константные (неизменяемые) параметры функций

#include <iostream>

void printInt(const int x)
{
    std::cout << x << '\n';
}

int main()
{
    printInt(5); // число 5 будет инициализатором параметра x функции
    printInt(6); // число 6 будет инициализатором параметра x функции

    return 0;
}