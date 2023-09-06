// исходный текст программы сохранен в кодировке UTF-8 без BOM

// properly-string-view-return2.cpp
// программа показывает один из способов правильного возвращения из функции
// значения типа std::string_view: можно возвращать параметры функции,
// имеющие тип std::string_view

#include <iostream>
#include <string>      // для std::string
#include <string_view> // для std::string_view

std::string_view firstAlphabetical(std::string_view s1, std::string_view s2)
{
    if (s1 < s2)
        return s1;
    return s2;
}

int main()
{
    std::string a{ "World" };
    std::string b{ "Hello" };

    std::cout << firstAlphabetical(a, b) << '\n'; // выведет в консоль "Hello"

    // то же самое для слов на русском языке

    a = "Мир";
    b = "Привет";

    std::cout << firstAlphabetical(a, b) << '\n'; // выведет в консоль "Мир"

    return 0;
}