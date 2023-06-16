// исходный текст программы сохранен в кодировке UTF-8 без BOM

// preprocessor-directive-if0.cpp
// директивы препроцессора для условной компиляции

#include <iostream>

int main()
{
    std::cout << "Джо\n";

#if 0  // не компилировать ничего, начиная отсюда...
    std::cout << "Боб\n";
    std::cout << "Стив\n";
#endif // ...и заканчивая тут

    return 0;
}