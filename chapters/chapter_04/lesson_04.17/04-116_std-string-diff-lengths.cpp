// исходный текст программы сохранен в кодировке UTF-8 без BOM

// std-string-diff-lengths.cpp
// объект типа std::string может хранить строки разной длины (размера)

#include <iostream>
#include <string>   // для std::string

int main()
{
    std::string name{ "Alex" }; // инициализировать name строковым
                                // литералом "Alex"
    std::cout << name << '\n';

    name = "Джейсон";           // изменить значение name на более длинное
    std::cout << name << '\n';

    name = "Ян";                // изменить значение name на более короткое
    std::cout << name << '\n';

    // заметьте, я использовал строки с буквами английского и русского
    // алфавитов

    return 0;
}