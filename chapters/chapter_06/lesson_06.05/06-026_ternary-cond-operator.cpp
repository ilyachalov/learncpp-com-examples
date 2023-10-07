// исходный текст программы сохранен в кодировке UTF-8 без BOM

// ternary-cond-operator.cpp
// троичный условный оператор ?:

#include <iostream>

int main()
{
    int x{ 5 };
    int y{ 7 };
    int larger{};

    if (x > y)
        larger = x;
    else
        larger = y;
    std::cout << larger << '\n'; // 7

    larger = 0; // возвратиться к первоначальному значению

    larger = (x > y) ? x : y; // то же самое, что и с помощью ветвления if
                              // выше, только короче и с лучшей читаемостью
    std::cout << larger << '\n'; // 7

    return 0;
}