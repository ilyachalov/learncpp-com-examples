// исходный текст программы сохранен в кодировке UTF-8 без BOM

// view-modification-func.cpp
// методы объекта типа std::string_view, уменьшающие обзор

#include <iostream>
#include <string_view> // для std::string_view

int main()
{
    std::string_view str{ "Peach" };
    std::cout << str << '\n';

    // Удалить 1 символ с левой стороны обзора
    str.remove_prefix(1);
    std::cout << str << '\n';

    // Удалить 2 символа с правой стороны обзора
    str.remove_suffix(2);
    std::cout << str << '\n';

    str = "Peach"; // сбросить обзор к первоначальной строке
    std::cout << str << '\n';

    // те же манипуляции с русскими буквами
    // (напомню, в кодировке UTF-8 русские буквы занимают по 2 байта)

    str = "Персик";
    std::cout << str << '\n';
    str.remove_prefix(2); // урезать обзор на 2 байта (1 русскую букву) слева
    std::cout << str << '\n';
    str.remove_suffix(4); // урезать обзор на 4 байта (2 русских буквы) справа
    std::cout << str << '\n';
    str = "Персик";       // сбросить обзор к первоначальной строке
    std::cout << str << '\n';

    return 0;
}