// исходный текст программы сохранен в кодировке UTF-8 без BOM

// overflow-from-subtraction.cpp
// переполнение при вычитании одного целого без знака из другого

#include <iostream>

// значение типа int имеет размер в 4 байта
int main()
{
    unsigned int x{ 2 };
    unsigned int y{ 3 };

    std::cout << x - y << '\n'; // 2 - 3 = 4294967295

    return 0;
}