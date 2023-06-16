// исходный текст программы сохранен в кодировке UTF-8 без BOM

// preprocessor-directive-ifdef.cpp
// директивы препроцессора для условной компиляции

#include <iostream>

#define PRINT_JOE

int main()
{
#ifdef PRINT_JOE
    std::cout << "Джо\n"; // будет скомпилировано, так как идентификатор
                          // PRINT_JOE определен
#endif

#ifdef PRINT_BOB
    std::cout << "Боб\n"; // будет проигнорировано, так как идентификатор
                          // PRINT_BOB не определен
#endif

    return 0;
}