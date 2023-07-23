// исходный текст программы сохранен в кодировке UTF-8 без BOM

// integer-division.cpp
// целочисленное деление

#include <iostream>

int main()
{
    // если при целочисленном делении должен получиться результат без остатка,
    // то вы получите ожидаемый результат

    std::cout << 20 / 4 << '\n'; // результат: 5

    // если при целочисленном делении не получается результат без остатка,
    // то есть должен получиться дробный результат, то вы получите результат
    // деления, от которого отбросили (не округлили!) дробную часть, то есть
    // такой результат может стать для вас неожиданным (если вы не понимаете,
    // как работает целочисленное деление в языке C++)

    std::cout << 8 / 5 << '\n';  // результат: 1
    std::cout << -8 / 5 << '\n'; // результат: -1

    return 0;
}