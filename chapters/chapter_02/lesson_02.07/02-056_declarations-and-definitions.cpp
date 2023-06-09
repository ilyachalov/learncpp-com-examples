// исходный текст программы сохранен в кодировке UTF-8 без BOM

// declarations-and-definitions.cpp
// разница между объявлением и определением

#include <iostream>

// примеры объявлений

int add(int x, int y); // Сообщает компилятору о существовании функции add с
                       // двумя параметрами типа int и возвращаемым значением
                       // типа int. Здесь нет определения тела функции!

int x; // сообщает компилятору о существовании целочисленной переменной
       // с именем x

// примеры определений

int add(int x, int y) // определение функции add
{
    int z{ x + y };   // определение переменной z

    return z;
}

int main()
{
    return 0;
}
