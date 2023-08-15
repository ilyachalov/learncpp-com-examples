// исходный текст программы сохранен в кодировке UTF-8 без BOM

// quiz-q2-author3.cpp
// Задание вопроса 2 в проверочном опросе подглавы 4.10:
// написать программу, которая просит пользователя ввести число от 0 до 9
// (включительно). Если пользователь введет число из этого диапазона,
// которое является простым (2, 3, 5 или 7), вывести в консоль фразу
// «Число является простым». В противном случае вывести фразу «Число не
// является простым».

// решение от автора учебника, вариант 3
// (с использованием понятий из будущих подглав учебника)

#include <iostream>

bool isPrime(int x)
{
    switch (x)
    {
        case 2: // если пользователь ввел 2
        case 3: // или если пользователь ввел 3
        case 5: // или если пользователь ввел 5
        case 7: // или если пользователь ввел 7
            return true; // то число является простым
    }

    return false; // иначе число не является простым
}

int main()
{
    std::cout << "Введите целое число от 0 до 9 (включительно): ";
    int x{};
    std::cin >> x;

    if ( isPrime(x) )
        std::cout << "Число является простым\n";
    else
        std::cout << "Число не является простым\n";

    return 0;
}