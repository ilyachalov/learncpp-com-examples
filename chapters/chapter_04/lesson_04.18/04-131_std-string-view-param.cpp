// исходный текст программы сохранен в кодировке UTF-8 без BOM

// std-string-view-param.cpp
// параметр функции типа std::string_view может принять аргумент
// трех видов: строка в стиле Си, std::string или std::string_view

#include <iostream>
#include <string>      // для std::string
#include <string_view> // для std::string_view

void printSV(std::string_view str)
{
    std::cout << str << '\n';
}

int main()
{
    printSV("Привет, мир!"); // вызвать функцию с передачей строкового
                             // литерала в стиле языка Си

    std::string s2{ "Привет, мир!" };
    printSV(s2); // вызвать функцию с передачей аргумента типа std::string

    std::string_view s3{ s2 };
    printSV(s3); // вызвать функцию с передачей аргумента типа std::string_view

    return 0;
}