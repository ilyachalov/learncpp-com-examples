// исходный текст программы сохранен в кодировке UTF-8 без BOM

// printing-chars.cpp
// вывод в окно консоли значений переменных типа char

// эта программа у меня компилируется без ошибок в операционных системах
// Windows 10 (компилятор MSVC) и Ubuntu (компилятор g++), при этом
// могут выдаваться предупреждения

#include <iostream>

int main()
{
    char ch1{ 'a' };  // (предпочтительный способ инициализации)
    std::cout << ch1; // cout выведет в консоль символ 'a'

    char ch2{ 98 };           // кодовая позиция символа 'b'
                              // (не предпочтительный способ инициализации)
    std::cout << ch2 << '\n'; // cout выведет в консоль символ 'b'

    // вывод в окно консоли символьного литерала

    std::cout << 'c' << '\n';

    // вывод в окно консоли символа из русского алфавита в кодировке UTF-8

    // char ch3{ 'я' }; // ошибка: сужающее преобразование,
                        // тип char занимает 1 байт, а символ 'я'
                        // в кодировке UTF-8 занимает 2 байта (D18F)

    char ch3[]{ '\xD1', '\x8F' }; // для определения символа 'я'
                                  // возьмем массив элементов типа char
                                  // (массивы еще не проходили пока)
    std::cout << ch3 << '\n'; // вывод в консоль символа 'я'

    std::cout << 'я' << '\n'; // 53647 (десятичная) = D18F (шестнадцатеричная)
                              // (вывести символьный литерал не получается:
                              // выводится кодовая позиция, а не сам символ)

    std::cout << "я" << '\n'; // вот так символ выводится правильно, но
                              // на самом деле "я" — это тоже массив элементов
                              // типа char (тут в массиве целых 3 элемента:
                              // D1, 8F и 0 как маркер конца строки)

    return 0;
}