// исходный текст программы сохранен в кодировке UTF-8 без BOM

// io.cpp
// решение задачи вопроса 2 проверочного опроса к подглаве 2.x
// один из файлов многофайловой программы, содержит определения двух функций

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