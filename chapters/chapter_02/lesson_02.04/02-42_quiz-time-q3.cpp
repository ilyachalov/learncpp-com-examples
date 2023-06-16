// исходный текст программы сохранен в кодировке UTF-8 без BOM

// quiz-time-q3.cpp
// программа к вопросу 3 проверочного опроса

#include <iostream>

int add(int x, int y, int z)
{
    return x + y + z;
}

int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    std::cout << multiply(add(1, 2, 3), 4) << '\n';
    return 0;
}
