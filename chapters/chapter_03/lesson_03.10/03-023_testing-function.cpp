// исходный текст программы сохранен в кодировке UTF-8 без BOM

// testing-function.cpp
// программа, иллюстрирующая, что такое «тестирующая функция» или
// «функция для тестирования» (примитивная форма модульного тестирования,
// по-английски «unit testing»)

#include <iostream>

int add(int x, int y)
{
    return x + y;
}

void testAdd() // функция для тестирования функции add()
{
    std::cout << "Эта функция должна вывести: 2 0 0 -2\n";
    std::cout << add(1, 1) << ' ';
    std::cout << add(-1, 1) << ' ';
    std::cout << add(1, -1) << ' ';
    std::cout << add(-1, -1) << '\n';
}

int main()
{
    testAdd();

    return 0;
}