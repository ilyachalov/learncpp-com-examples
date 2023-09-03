// исходный текст программы сохранен в кодировке UTF-8 без BOM

// string-view-assign.cpp
// присваивание нового значения объекту типа std::string_view

#include <iostream>
#include <string>      // для std::string
#include <string_view> // для std::string_view

int main()
{
    std::string name{ "Алекс" };
    std::string_view sv{ name }; // теперь sv смотрит на name
    std::cout << sv << '\n';     // выводит в консоль строку «Алекс»

    sv = "Джон";             // теперь sv смотрит на литерал "Джон"
                             // (присваивание не изменяет name)
    std::cout << sv << '\n'; // выводит в консоль строку «Джон»

    std::cout << name << '\n'; // выводит в консоль строку «Алекс»

    return 0;
}