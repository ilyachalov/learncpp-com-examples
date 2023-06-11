// исходный текст программы сохранен в кодировке UTF-8 без BOM

// quiz-time-q1.cpp
// программа к вопросу 1 проверочного опроса подглавы 2.8

#include <iostream>

int getInteger()
{
    std::cout << "Введите целое число: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    int x{ getInteger() };
    int y{ getInteger() };

    std::cout << x << " + " << y << " равно " << x + y << '\n';
    return 0;
}