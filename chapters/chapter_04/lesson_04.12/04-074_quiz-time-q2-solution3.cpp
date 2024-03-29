// исходный текст программы сохранен в кодировке UTF-8 без BOM

// quiz-time-q2-solution3.cpp
// задание в вопросе 2 проверочного опроса подглавы 4.12 (введение
// в преобразование типов и оператор static_cast)

// предыдущее задание:
// требуется написать короткую программу, которая просит пользователя
// ввести один однобайтовый символ, а затем выводит полученный символ
// и его код по таблице ASCII с помощью оператора static_cast

// задание:
// модифицировать программу, написанную для предыдущего задания, используя
// неявное преобразование типов вместо оператора static_cast; сколько разных
// способов можно придумать для этого?

// это третье решение от автора учебника

#include <iostream>

int getInt(int c)
{
    return c;
}

int main()
{
    std::cout << "Введите один символ: ";
    char c{};
    std::cin >> c;

    std::cout << "Вы ввели символ '" << c
              << "', который имеет по таблице ASCII код "
              << getInt(c) << ".\n";

    return 0;
}