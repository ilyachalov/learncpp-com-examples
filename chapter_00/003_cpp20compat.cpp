// исходный текст программы сохранен в кодировке UTF-8 без BOM

// cpp20compat.cpp
// программа для проверки компилятора на совместимость с C++20

#include <array>
#include <iostream>
#include <span>

struct Foo
{
    int a{ };
    int b{ };
    int c{ };
};

consteval int sum(std::span<const int> a) // std::span и consteval
{
    int s{ 0 };
    for (auto n : a)
        s += n;
    return s;
}

auto sum(auto x, auto y) -> decltype(x + y) // сокращённые шаблоны функций
{
    return x + y;
}

int main()
{
    constexpr std::array a{ 3, 2, 1 };
    constexpr int s{ sum(a) };
    std::cout << s << '\n';

    Foo f1{ .a = 1, .c = 3 }; // назначенные инициализаторы
    std::cout << sum(f1.a, f1.c) << '\n';

    return 0;
}