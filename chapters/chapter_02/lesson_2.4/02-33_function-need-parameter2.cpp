// исходный текст программы сохранен в кодировке UTF-8 без BOM

// function-need-parameter2.cpp
// выделение функции для вывода результата вычислений
// (ошибку компиляции исправили, но функция всё еще нуждается в параметре)

#include <iostream>

int getValueFromUser()
{
    std::cout << "Введите целое число: ";
    int input{};
    std::cin >> input;

    return input;
}

void printDouble()
{
    int num{}; // мы добавили в код эту строку
    std::cout << num << " умноженное на 2 равняется " << num * 2 << '\n';
}

int main()
{
    int num{ getValueFromUser() };

    printDouble();

    return 0;
}