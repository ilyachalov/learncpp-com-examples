// исходный текст программы сохранен в кодировке UTF-8 без BOM

// unsigned-number-to-signed.cpp
// преобразование числа без знака в число со знаком (речь про типы)

#include <iostream>

int main()
{
    unsigned int u{ 5 };
    int s{ static_cast<int>(u) }; // вернуть значение переменной u в виде
                                  // значения типа int

    std::cout << s << '\n';

    return 0;
}