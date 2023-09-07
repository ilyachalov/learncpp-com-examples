// исходный текст программы сохранен в кодировке UTF-8 без BOM

// quiz-time-q3-hint1.cpp
// программа в ответ на вопрос 3 проверочного опроса к подглаве 4.x,
// являющейся итоговой для главы 4 учебника

// Задание. Запросить у пользователя 2 вещественных числа (тип double).
// Попросить пользователя ввести символ, представляющий одну из четырех
// математических операций: +, -, * или /. Программа должна вычислить
// результат применения введенной операции к двум введенным числам и вывести
// в консоль этот результат. Если пользователь введет в качестве математической
// операции непредусмотренный символ, программа не должна ничего выводить в
// консоль.

// Подсказка 1. Автор советует создать три функции: для получения числа
// от пользователя, для получения знака операции от пользователя, для 
// выполнения вычислений и вывода результата в консоль.

#include <iostream>

double getNumber()
{
    std::cout << "Введите вещественное число: ";
    double num{};
    std::cin >> num;
    return num;
}

char getSymbol()
{
    std::cout << "Введите знак операции (+, -, * или /): ";
    char oper{};
    std::cin >> oper;
    return oper;
}

void calcAndPrint(double num1, double num2, char oper)
{
    double res{};
    bool error{ false };
    if (oper == '+')
        res = num1 + num2;
    else if (oper == '-')
        res = num1 - num2;
    else if (oper == '*')
        res = num1 * num2;
    else if (oper == '/')
        res = num1 / num2;
    else
        error = true;

    if (!error)
        std::cout << num1 << ' ' << oper << ' ' << num2
                  << " равно " << res << '\n';
}

int main()
{
    double num1{ getNumber() };
    double num2{ getNumber() };
    char oper{ getSymbol() };
    calcAndPrint(num1, num2, oper);

    return 0;
}