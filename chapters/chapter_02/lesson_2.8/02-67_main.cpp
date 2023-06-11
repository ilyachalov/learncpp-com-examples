// исходный текст программы сохранен в кодировке UTF-8 без BOM

// main.cpp
// главный файл многофайловой программы, содержит функцию main

#include <iostream>

int getInteger(); // предварительное объявление
                  // определение этой функции вынесено в файл input.cpp

int main()
{
    int x{ getInteger() };
    int y{ getInteger() };

    std::cout << x << " + " << y << " равно " << x + y << '\n';
    return 0;
}