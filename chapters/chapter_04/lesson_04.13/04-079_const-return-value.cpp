// исходный текст программы сохранен в кодировке UTF-8 без BOM

// const-return-value.cpp
// константное (неизменяемое) возвращаемое из функции значение

#include <iostream>

const int getValue()
{
    return 5;
}

int main()
{
    std::cout << getValue() << '\n';

    return 0;
}