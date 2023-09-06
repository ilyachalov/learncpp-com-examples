// исходный текст программы сохранен в кодировке UTF-8 без BOM

// string-view-func-param.cpp
// тип std::string_view удобно использовать при работе со строковым
// параметром функции, предназначенным только для чтения

#include <iostream>
#include <string>      // для std::string
#include <string_view> // для std::string_view

void printSV(std::string_view str) // тип параметра изменен на std::string_view,
                                   // такой параметр смотрит на значение
                                   // аргумента, а не копирует его
{
    std::cout << str << '\n';
}

int main()
{
    printSV("Привет, мир!"); // вызвать функцию с передачей строкового
                             // литерала в стиле языка Си

    std::string s2{ "Привет, мир!" };
    printSV(s2); // вызвать функцию с аргументом типа std::string

    std::string_view s3{ s2 };
    printSV(s3); // вызвать функцию с аргументом типа std::string_view

    return 0;
}