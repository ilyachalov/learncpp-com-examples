// исходный текст программы сохранен в кодировке UTF-8 без BOM

// std-string-literals.cpp
// строковые литералы типа std::string

#include <iostream>
#include <string>   // для std::string

int main()
{
    using namespace std::string_literals; // легкий доступ к суффиксу s

    std::cout << "строка\n";  // без суффикса — строковый литерал в стиле Си
    std::cout << "строка\n"s; // с суффиксом s — литерал типа std::string

    return 0;
}