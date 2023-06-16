// исходный текст программы сохранен в кодировке UTF-8 без BOM

// quiz-time-q5d.cpp
// программа к вопросу 5d проверочного опроса подглавы 2.7

#include <iostream>

int add(int x, int y, int z); // объявление функции

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n'; // вызов функции
    return 0;
}

int add(int x, int y, int z) // определение (реализация) функции
{
    return x + y + z;
}
