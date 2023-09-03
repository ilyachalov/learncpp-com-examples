// исходный текст программы сохранен в кодировке UTF-8 без BOM

// string-view-constexpr.cpp
// константные (constexpr) объекты типа std::string_view

#include <iostream>
#include <string_view> // для std::string_view

int main()
{
    constexpr std::string_view s{ "Привет, мир!" }; // s — строковая
                                                    // символическая константа
    std::cout << s << '\n'; // s будет заменена литералом "Привет, мир!" во
                            // время компиляции программы

    return 0;
}