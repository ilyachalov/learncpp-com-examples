// исходный текст программы сохранен в кодировке UTF-8 без BOM

// std-string-input.cpp
// ввод из консоли строк типа std::string через std::cin

#include <iostream>
#include <string>   // для std::string

int main()
{
    std::cout << "Введите ваше полное имя (имя и фамилию): ";
    std::string name{};
    std::cin >> name; // это не работает так, как ожидается, поскольку std::cin
                      // прекращает ввод на пробельном символе

    std::cout << "Введите ваш любимый цвет: ";
    std::string color{};
    std::cin >> color;

    std::cout << "Ваше имя — " << name
              << " и ваш любимый цвет — " << color << '\n';

    return 0;
}