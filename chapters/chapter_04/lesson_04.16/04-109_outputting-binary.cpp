// исходный текст программы сохранен в кодировке UTF-8 без BOM

// outputting-binary.cpp
// вывод в консоль значений в двоичной форме

#include <bitset>   // для типа (шаблона класса) std::bitset
#include <iostream>

int main()
{
    // std::bitset<8> означает, что мы хотим хранить 8 битов
    std::bitset<8> bin1{ 0b1100'0101 }; // двоичный литерал для числа 1100 0101
    std::bitset<8> bin2{ 0xC5 };        // шестнадцатеричный литерал для
                                        // того же числа 1100 0101

    std::cout << bin1 << '\n' << bin2 << '\n';
    std::cout << std::bitset<4>{ 0b1010 } << '\n'; // создать временный объект
                                                   // типа std::bitset и
                                                   // вывести его в консоль

    return 0;
}