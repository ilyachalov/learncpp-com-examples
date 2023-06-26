// исходный текст программы сохранен в кодировке UTF-8 без BOM

// main-step3.cpp
// решение задачи вопроса 1 проверочного опроса к подглаве 2.x
// шаг 3: реализация и тестирование функции readNumber

#include <iostream>

int readNumber()
{
    std::cout << "Введите целое число: ";
    int input{};
    std::cin >> input;
    return input;
}

int main()
{
    // получить первое целое число от пользователя
    int num1{ readNumber() };
    std::cout << num1 << '\n';

    // получить второе целое число от пользователя
    // int readNumber();

    // сложить два целых числа и получить результат

    // вывести результат сложения в консоль
    // void writeAnswer(int);

    return 0;
}