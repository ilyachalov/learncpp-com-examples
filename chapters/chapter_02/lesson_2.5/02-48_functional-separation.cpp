// исходный текст программы сохранен в кодировке UTF-8 без BOM

// functional-separation.cpp
// в разных функциях — разные области видимости, что дает возможность
// использовать в разных функциях переменные с одинаковыми именами

#include <iostream>

int add(int x, int y) // x и y функции add создаются и становятся видимы здесь
{
    // x и y функции add видимы/доступны только внутри функции add
    return x + y;
} // y и x функции add становятся невидимы и ликвидируются здесь

int main()
{
    int x{ 5 }; // x функции main создается, инициализируется, становится видимой
    int y{ 6 }; // y функции main создается, инициализируется, становится видимой

    // x и y функции main доступны для использования только внутри функции main
    std::cout << add(x, y) << '\n'; // вызывает функцию add с x=5 и y=6

    return 0;
} // y и x функции main становятся невидимы и ликвидируются здесь