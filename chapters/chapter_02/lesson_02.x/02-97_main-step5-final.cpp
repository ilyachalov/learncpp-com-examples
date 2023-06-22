// исходный текст программы сохранен в кодировке UTF-8 без BOM

// main-step5-final.cpp
// решение задачи вопроса 1 проверочного опроса к подглаве 2.x
// шаг 5: реализация функции writeAnswer, окончательное тестирование программы

#include <iostream>

int readNumber()
{
    std::cout << "Введите целое число: ";
    int input{};
    std::cin >> input;
    return input;
}

void writeAnswer(int answer)
{
    std::cout << "Ответ: " << answer << '\n';
}

int main()
{
    // получить первое целое число от пользователя
    int num1{ readNumber() };

    // получить второе целое число от пользователя
    int num2{ readNumber() };

    // сложить два целых числа и получить результат
    std::cout << "Вычисляю сумму заданных чисел...\n";
    int sum{ num1 + num2 };

    // вывести результат сложения в консоль
    writeAnswer(sum);

    return 0;
}