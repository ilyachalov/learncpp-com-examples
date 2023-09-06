// исходный текст программы сохранен в кодировке UTF-8 без BOM

// not-always-need-copy.cpp
// программа с избыточным использованием типа-владельца std::string

#include <iostream>
#include <string>   // для std::string

void printString(std::string str) // str получает копию своего инициализатора
{
    std::cout << str << '\n';
}

int main()
{
    std::string s{ "Привет, мир!" };
    printString(s);

    return 0;
}