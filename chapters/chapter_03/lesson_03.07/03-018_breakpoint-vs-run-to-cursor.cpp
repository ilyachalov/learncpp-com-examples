// исходный текст программы сохранен в кодировке UTF-8 без BOM

// breakpoint-vs-run-to-cursor.cpp
// программа для изучения разницы между работой точек останова и
// работой команды отладки «run to cursor» (выполнить до курсора)

#include <iostream>

void printValue(int value)
{
    std::cout << value << '\n';
}

int main()
{
    printValue(5);
    printValue(6);
    printValue(7);

    return 0;
}