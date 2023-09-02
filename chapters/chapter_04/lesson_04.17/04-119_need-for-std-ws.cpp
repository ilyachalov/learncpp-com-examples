// исходный текст программы сохранен в кодировке UTF-8 без BOM

// need-for-std-ws.cpp
// эта программа показывает необходимость в манипуляторе ввода std::ws
// (этот манипулятор ввода заставляет программу игнорировать пробельные
// символы в начале извлекаемой из входного буфера std::cin строки)

#include <iostream>
#include <string>   // для std::string и std::getline

int main()
{
    std::cout << "Введите 1 или 2: ";
    int choice{};
    std::cin >> choice;

    std::cout << "Теперь введите ваше имя: ";
    std::string name{};
    std::getline(std::cin, name); // заметьте: здесь не используется std::ws

    std::cout << "Привет, " << name << ", вы выбрали число " << choice << '\n';

    return 0;
}