// исходный текст программы сохранен в кодировке UTF-8 без BOM

// constexpr-std-string.cpp
// эта программа показывает, что будет, если попытаться определить
// константную переменную типа std::string с помощью служебного слова
// constexpr

#include <iostream>
#include <string>   // для std::string

int main()
{
    using namespace std::string_literals;

    constexpr std::string name{ "Илья"s }; // ошибка компиляции

    std::cout << "Моё имя — " << name << '\n';

    return 0;
}