// исходный текст программы сохранен в кодировке UTF-8 без BOM

// function.cpp
// один из файлов многофайловой программы, тут определена функция doSomething

#include <iostream>

void doSomething()
{
#ifdef PRINT
    std::cout << "Вывожу в консоль!\n";
#endif
#ifndef PRINT
    std::cout << "Не вывожу в консоль!\n";
#endif
}