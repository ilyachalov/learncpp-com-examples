// исходный текст программы сохранен в кодировке UTF-8 без BOM

// printing-char.cpp
// вывод в консоль однобайтового символа из переменной типа char

#include <iostream>

int main()
{
    char ch{ 97 };           // 97 — это код символа 'a' из таблицы ASCII
    std::cout << ch << '\n'; // a

    return 0;
}