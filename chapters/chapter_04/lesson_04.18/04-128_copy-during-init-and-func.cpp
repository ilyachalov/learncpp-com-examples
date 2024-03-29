// исходный текст программы сохранен в кодировке UTF-8 без BOM

// copy-during-init-and-func.cpp
// При списочной инициализации происходит копирование инициализатора
// в переменную. Также копирование происходит при передаче аргумента
// в функцию по значению. Копирование в обоих этих случаях выполняется
// относительно медленно для типа std::string.

#include <iostream>
#include <string>   // для std::string

void printString(std::string str) // str получает копию своего инициализатора
                                  // (инициализатором является аргумент при
                                  // вызове данной функции)
{
    std::cout << str << '\n';
}

int main()
{
    std::string s{ "Привет, мир!" }; // s получает копию своего инициализатора
    printString(s);

    return 0;
}