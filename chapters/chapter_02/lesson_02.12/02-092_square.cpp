// исходный текст программы сохранен в кодировке UTF-8 без BOM

// square.cpp
// один из файлов многофайловой программы, содержит два определения функций

#include "square.h" // файл square.h будет включен сюда один раз

int getSquareSides() // определение функции
{
    return 4;
}

int getSquarePerimeter(int sideLength) // определение функции
{
    return sideLength * getSquareSides();
}