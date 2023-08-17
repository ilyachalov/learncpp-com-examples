// исходный текст программы сохранен в кодировке UTF-8 без BOM

// implicit-type-conversion.cpp
// пример неявного преобразования типа значения

#include <iostream>

void print(double x) // функция print принимает параметр типа double
{
    std::cout << x << '\n';
}

int main()
{
    print(5); // что тут происходит при передаче в функцию значения типа int?

    return 0;
}