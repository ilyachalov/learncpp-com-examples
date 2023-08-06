// исходный текст программы сохранен в кодировке UTF-8 без BOM

// whole-number-precision.cpp
// точность (число значимых цифр) в числе типа с плавающей запятой
// с большим количеством цифр, но без дробной части

#include <iomanip>  // для манипулятора вывода std::setprecision()
#include <iostream>

int main()
{
    float f{ 123456789.0f }; // значение переменной f имеет 10 значимых цифр
    std::cout << std::setprecision(9); // отобразить 9 цифр значения f
    std::cout << f << '\n';

    return 0;
}