// исходный текст программы сохранен в кодировке UTF-8 без BOM

// function-reusing2.cpp
// программа, иллюстрирующая использование функции для устранения
// повторяющихся фрагментов кода

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
    int x{ getValueFromUser() }; // первый вызов функции getValueFromUser
    int y{ getValueFromUser() }; // второй вызов функции getValueFromUser

    std::cout << x << " + " << y << " = " << x + y << '\n';

    return 0;
}
