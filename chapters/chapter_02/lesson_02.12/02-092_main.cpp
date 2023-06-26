// исходный текст программы сохранен в кодировке UTF-8 без BOM

// main.cpp
// главный из файлов многофайловой программы, содержит функцию main

#include "square.h" // файл square.h будет включен сюда один раз
#include <iostream>

int main()
{
    std::cout << "Квадрат имеет " << getSquareSides() << " стороны.\n";
    std::cout << "Периметр квадрата с длиной стороны 5 равен "
              << getSquarePerimeter(5) << ".\n";

    return 0;
}