// исходный текст программы сохранен в кодировке UTF-8 без BOM

// preprocessor-directive-define.cpp
// директива препроцессора #define с текстом замены

#include <iostream>

#define MY_NAME "Илья"

int main()
{
    std::cout << "Моё имя — " << MY_NAME << '\n';

    return 0;
}