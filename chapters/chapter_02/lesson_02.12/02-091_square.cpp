// исходный текст программы сохранен в кодировке UTF-8 без BOM

// square.cpp
// один из файлов многофайловой программы, содержит определение
// функции getSquarePerimeter

#include "square.h" // файл square.h будет включен сюда один раз

int getSquarePerimeter(int sideLength)
{
    return sideLength * getSquareSides();
}