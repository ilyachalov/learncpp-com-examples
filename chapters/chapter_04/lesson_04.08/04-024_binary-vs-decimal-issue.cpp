// исходный текст программы сохранен в кодировке UTF-8 без BOM

// binary-vs-decimal-issue.cpp
// вещественные дробные числа, легко представимые в десятичном виде,
// но являющиеся бесконечной дробью в двоичном виде, на примере числа 0,1

#include <iomanip>  // для манипулятора вывода std::setprecision()
#include <iostream>

int main()
{
    double d{ 0.1 };
    std::cout << d << '\n'; // используем точность cout по умолчанию (6 цифр)
    std::cout << std::setprecision(17);
    std::cout << d << '\n';

    return 0;
}