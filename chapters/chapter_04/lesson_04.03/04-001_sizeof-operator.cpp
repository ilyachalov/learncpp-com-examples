// исходный текст программы сохранен в кодировке UTF-8 без BOM

// sizeof-operator.cpp
// оператор sizeof, который определяет размер типа данных
// или переменной в байтах

// При переводе на русский язык слова «bytes» требуется разное написание
// из-за разного склонения: 1 байт, 2-4 байта, 5-16 байтов и так далее.
// Но я решил в этой программе оставить в любом случае перевод «байтов»,
// чтобы не усложнять программу по сравнению с учебником. На данный момент
// для написания соответствующей функции не хватает изученных инструментов
// (пока не изучены ветвления, строки и так далее).

#include <iostream>

int main()
{
    std::cout << "bool:\t\t" << sizeof(bool) << " байтов\n";
    std::cout << "char:\t\t" << sizeof(char) << " байтов\n";
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " байтов\n";
    std::cout << "char16_t:\t" << sizeof(char16_t) << " байтов\n";
    std::cout << "char32_t:\t" << sizeof(char32_t) << " байтов\n";
    std::cout << "short:\t\t" << sizeof(short) << " байтов\n";
    std::cout << "int:\t\t" << sizeof(int) << " байтов\n";
    std::cout << "long:\t\t" << sizeof(long) << " байтов\n";
    std::cout << "long long:\t" << sizeof(long long) << " байтов\n";
    std::cout << "float:\t\t" << sizeof(float) << " байтов\n";
    std::cout << "double:\t\t" << sizeof(double) << " байтов\n";
    std::cout << "long double:\t" << sizeof(long double) << " байтов\n";

    return 0;
}