// исходный текст программы сохранен в кодировке UTF-8 без BOM

// integral-literals-init.cpp
// инициализация целочисленных литералов

#include <iostream>

int main()
{
    int a{ 5 };          // корректно: типы совпадают
    unsigned int b{ 6 }; // корректно: компилятор преобразует в unsigned int
    long c{ 7 };         // корректно: компилятор преобразует в long

    return 0;
}