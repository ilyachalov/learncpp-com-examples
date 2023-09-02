// исходный текст программы сохранен в кодировке UTF-8 без BOM

// init-assign-std-string.cpp
// инициализация объекта типа std::string и присваивание ему значений

#include <string> // для std::string

int main()
{
    std::string name{ "Alex" }; // инициализировать name строковым
                                // литералом "Alex"
    name = "John";              // изменить значение name на "John"

    // для букв русского алфавита

    std::string name2{ "Илья" };
    name2 = "Вова";

    // строки из символов-цифр

    std::string myID{ "45" }; // "45" — не то же самое, что число 45!

    return 0;
}