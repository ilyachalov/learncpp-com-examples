// исходный текст программы сохранен в кодировке UTF-8 без BOM

// string-view-literals.cpp
// литералы типа std::string_view

#include <iostream>
#include <string>      // для std::string
#include <string_view> // для std::string_view

int main()
{
    using namespace std::string_literals;      // доступ к суффиксу s
    using namespace std::string_view_literals; // доступ к суффиксу sv

    std::cout << "строка А\n";   // без суффикса: строковый литерал в стиле Си
    std::cout << "строка Б\n"s;  // с суффиксом s: литерал типа std::string
    std::cout << "строка В\n"sv; // с суффиксом sv: литерал std::string_view

    return 0;
}