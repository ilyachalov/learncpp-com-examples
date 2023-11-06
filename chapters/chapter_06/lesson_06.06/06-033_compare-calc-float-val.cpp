// исходный текст программы сохранен в кодировке UTF-8 без BOM

// compare-calc-float-val.cpp
// сравнение вычисленных числовых значений с плавающей запятой может
// стать проблемой

#include <iostream>

int main()
{
    double d1{ 100.0 - 99.99 }; // математически должно быть равно 0,01
    double d2{ 10.0 - 9.99 };   // математически должно быть равно 0,01

    if (d1 == d2)
        std::cout << "d1 == d2" << '\n';
    else if (d1 > d2)
        std::cout << "d1 > d2" << '\n';
    else if (d1 < d2)
        std::cout << "d1 < d2" << '\n';

    // мой компилятор вычисляет следующие значения:
    // d1 = 0.010000000000005116
    // d2 = 0.009999999999999787
    // в итоге программа выдает результат "d1 > d2", хотя математически
    // должно быть "d1 == d2"

    return 0;
}