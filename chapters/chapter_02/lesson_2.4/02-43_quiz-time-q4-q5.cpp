// исходный текст программы сохранен в кодировке UTF-8 без BOM

// quiz-time-q4-q5.cpp
// программа к вопросам 4 и 5 проверочного опроса

// задание 4: написать функцию с названием doubleNumber(), которая принимает
// один целочисленный параметр и возвращает удвоенное значение параметра

// задание 5: написать полную программу, которая использует ранее написанную
// функцию doubleNumber()

#include <iostream>

int doubleNumber(int x)
{
    return x * 2;
}

int main()
{
    std::cout << "Введите целое число: ";
    int x{};
    std::cin >> x;

    std::cout << x << " умноженное на 2 равняется " << doubleNumber(x) << '\n';

    return 0;
}