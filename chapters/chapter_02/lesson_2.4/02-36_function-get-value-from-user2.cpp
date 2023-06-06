// исходный текст программы сохранен в кодировке UTF-8 без BOM

// function-get-value-from-user2.cpp
// пример использования параметра функции и аргумента для него

#include <iostream>

int getValueFromUser()
{
    std::cout << "Введите целое число: ";
    int input{};
    std::cin >> input;

    return input;
}

void printDouble(int value) // эта функция теперь имеет целочисленный параметр
{
    std::cout << value << " умноженное на 2 равняется " << value * 2 << '\n';
}

int main()
{
    int num{ getValueFromUser() };

    printDouble(num);

    return 0;
}