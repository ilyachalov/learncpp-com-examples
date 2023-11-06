// исходный текст программы сохранен в кодировке UTF-8 без BOM

// prefix-inc-dec.cpp
// префиксный инкремент (+1) и префиксный декремент (-1)

#include <iostream>

int main()
{
    int x{ 5 };
    int y{ ++x }; // x увеличивается до 6, затем x вычисляется в 6,
                  // и 6 записывается в y
    std::cout << x << ' ' << y << '\n'; // 6 6

    x = 5;
    y = --x; // x уменьшается до 4, затем x вычисляется в 4,
             // и 4 записывается в y
    std::cout << x << ' ' << y << '\n'; // 4 4

    return 0;
}