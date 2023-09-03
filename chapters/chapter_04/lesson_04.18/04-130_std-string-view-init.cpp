// исходный текст программы сохранен в кодировке UTF-8 без BOM

// std-string-view-init.cpp
// инициализация объекта типа std::string_view может быть произведена
// тремя разными способами

#include <iostream>
#include <string>      // для std::string
#include <string_view> // для std::string_view

int main()
{
    std::string_view s1{ "Привет, мир!" }; // инициализировать строковым
                                           // литералом в стиле языка Си
    std::cout << s1 << '\n';

    std::string s{ "Привет, мир!" };
    std::string_view s2{ s }; // инициализировать объектом типа std::string
    std::cout << s2 << '\n';

    std::string_view s3{ s2 }; // инициализировать объектом std::string_view
    std::cout << s3 << '\n';

    return 0;
}