// исходный текст программы сохранен в кодировке UTF-8 без BOM

// binary-literals.cpp
// использование числовых литералов двоичных чисел (с префиксом 0b)

#include <iostream>

int main()
{
    int bin{};        // полагаем, что переменная типа int имеет размер 16 бит
    bin = 0b1;        // присвоить двоичное число 0000 0000 0000 0001 переменной
    bin = 0b11;       // присвоить двоичное число 0000 0000 0000 0011 переменной
    bin = 0b1010;     // присвоить двоичное число 0000 0000 0000 1010 переменной
    bin = 0b11110000; // присвоить двоичное число 0000 0000 1111 0000 переменной

    return 0;
}