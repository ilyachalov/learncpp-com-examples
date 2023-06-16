// исходный текст программы сохранен в кодировке UTF-8 без BOM

// scope-of-defines.cpp
// область видимости директив препроцессора #define

#include <iostream>

void foo()
{
#define MY_NAME "Илья"
}

int main()
{
    std::cout << "Моё имя — " << MY_NAME << '\n';

    return 0;
}