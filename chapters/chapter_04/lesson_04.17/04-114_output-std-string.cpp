// исходный текст программы сохранен в кодировке UTF-8 без BOM

// output-std-string.cpp
// вывод в консоль объектов типа std::string через объект std::cout

#include <iostream>
#include <string>   // для std::string

int main()
{
    std::string name{ "Alex" };
    std::cout << "My name is: " << name << '\n';

    // для букв русского алфавита

    std::string name2{ "Илья" };
    std::cout << "Моё имя — " << name2 << '\n';

    return 0;
}