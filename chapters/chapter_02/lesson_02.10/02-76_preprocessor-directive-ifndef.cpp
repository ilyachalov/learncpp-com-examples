// исходный текст программы сохранен в кодировке UTF-8 без BOM

// preprocessor-directive-ifndef.cpp
// директивы препроцессора для условной компиляции

#include <iostream>

int main()
{
#ifndef PRINT_BOB
    std::cout << "Боб\n";
#endif

    return 0;
}