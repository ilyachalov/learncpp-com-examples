// исходный текст программы сохранен в кодировке UTF-8 без BOM

// std-string-getline.cpp
// ввод из консоли строк типа std::string через std::cin с помощью
// метода std::getline

#include <iostream>
#include <string>   // для std::string и std::getline

int main()
{
    std::cout << "Введите ваше полное имя (имя и фамилию): ";
    std::string name{};
    std::getline(std::cin >> std::ws, name); // считать всю строку текста (с
                                             // пробельными символами) в name,
                                             // пробельные символы в начале
                                             // строки будут отброшены

    std::cout << "Введите ваш любимый цвет: ";
    std::string color{};
    std::getline(std::cin >> std::ws, color); // считать всю строку текста (с
                                              // пробельными символами) в color,
                                              // пробельные символы в начале
                                              // строки будут отброшены

    std::cout << "Ваше имя — " << name
              << " и ваш любимый цвет — " << color << '\n';

    return 0;
}