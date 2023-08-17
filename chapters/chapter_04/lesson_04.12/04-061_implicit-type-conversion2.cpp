// исходный текст программы сохранен в кодировке UTF-8 без BOM

// implicit-type-conversion2.cpp
// еще один пример неявного преобразования типа значения

#include <iostream>

void print(double x) // функция print принимает параметр типа double
{
    std::cout << x << '\n';
}

int main()
{
    int y{ 5 };
    print(y); // переменная y имеет тип int

    return 0;
}