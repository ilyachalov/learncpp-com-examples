// исходный текст программы сохранен в кодировке UTF-8 без BOM

// function-get-value-from-user.cpp
// выделение функции для получения значения от пользователя

#include <iostream>

int getValueFromUser()
{
    std::cout << "Введите целое число: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int num{ getValueFromUser() };

    std::cout << num << " умноженное на 2 равняется " << num * 2 << '\n';

    return 0;
}
