// исходный текст программы сохранен в кодировке UTF-8 без BOM

// prefix-vs-postfix.cpp
// во многих случаях префиксные и постфиксные инкременты и декременты
// дают одинаковый результат

#include <iostream>

int main()
{
    int x{ 0 };
    ++x;        // увеличивает x до 1
    x++;        // увеличивает x до 2

    return 0;
}