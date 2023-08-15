// исходный текст программы сохранен в кодировке UTF-8 без BOM

// quiz-q2-author2.cpp
// Задание вопроса 2 в проверочном опросе подглавы 4.10:
// написать программу, которая просит пользователя ввести число от 0 до 9
// (включительно). Если пользователь введет число из этого диапазона,
// которое является простым (2, 3, 5 или 7), вывести в консоль фразу
// «Число является простым». В противном случае вывести фразу «Число не
// является простым».

// решение от автора учебника, вариант 2
// (с использованием понятий из будущих подглав учебника)

#include <iostream>

bool isPrime(int x)
{
    // если пользователь ввел 2, 3, 5 или 7, число является простым
    return (x == 2 || x == 3 || x == 5 || x == 7);
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