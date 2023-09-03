// исходный текст программы сохранен в кодировке UTF-8 без BOM

// std-string-view.cpp
// использование типа std::string_view вместо типа std::string

#include <iostream>
#include <string_view> // для std::string_view

// str обеспечивает доступ только для чтения к любому аргументу, который
// будет передан в этот параметр
void printSV(std::string_view str) // тип изменен на std::string_view
{
    std::cout << str << '\n';
}

int main()
{
    std::string_view s{ "Привет, мир!" }; // тип изменен на std::string_view
    printSV(s);

    return 0;
}