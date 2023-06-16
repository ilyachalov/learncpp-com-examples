// исходный текст программы сохранен в кодировке UTF-8 без BOM

// function-get-value-from-user3.cpp
// возвращаемое из функции значение используем в качестве аргумента

#include <iostream>

int getValueFromUser()
{
    std::cout << "Введите целое число: ";
    int input{};
    std::cin >> input;

    return input;
}

void printDouble(int value)
{
    std::cout << value << " умноженное на 2 равняется " << value * 2 << '\n';
}

int main()
{
    printDouble(getValueFromUser());

    return 0;
}
