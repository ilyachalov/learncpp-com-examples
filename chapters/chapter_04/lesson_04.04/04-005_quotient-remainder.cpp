// исходный текст программы сохранен в кодировке UTF-8 без BOM

// quotient-remainder.cpp
// частное и остаток при целочисленном делении,
// при отрицательных значениях

// В учебнике в подглаве 4.4 этот момент не раскрыт как следует,
// есть только упоминание и упражнение, в котором, похоже, есть
// ошибка. Чтобы ответить на задание b вопроса 2 проверочного
// опроса, я написал эту программу. Оператор % (получение остатка
// от целочисленного деления) к этому моменту в учебнике еще
// не рассматривался.

#include <iostream>

int main()
{
    std::cout << -13 / 5 << '\n'; // частное: -2
    std::cout << -13 % 5 << '\n'; // остаток: -3

    return 0;
}