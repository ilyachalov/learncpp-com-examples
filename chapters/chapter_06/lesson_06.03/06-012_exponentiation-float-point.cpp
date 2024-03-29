// исходный текст программы сохранен в кодировке UTF-8 без BOM

// exponentiation-float-point.cpp
// операция возведения числа в степень (для чисел с плавающей запятой)

#include <cmath>    // для функции pow
#include <iostream>

int main()
{
    double x{ std::pow(3.0, 4.0) };
    std::cout << x << '\n'; // 81 (число 3 в степени 4)

    // в языке C++ знак ^ используется не для возведения в степень, а для
    // обозначения операции побитового XOR; название функции pow является
    // сокращением слова power (по-русски «степень» в данном контексте)

    return 0;
}