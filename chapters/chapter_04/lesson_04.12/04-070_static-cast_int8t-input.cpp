// исходный текст программы сохранен в кодировке UTF-8 без BOM

// static-cast-int8t-input.cpp
// обращение со значением типа std::int8_t при вводе значения из консоли,
// а затем его выводе в консоль

#include <cstdint>  // для типа std::int8_t
#include <iostream>

int main()
{
    std::cout << "Введите число от 0 до 127 включительно: ";
    std::int8_t myInt{};
    std::cin >> myInt;

    std::cout << "Вы ввели: " << static_cast<int>(myInt) << '\n';

    // Здесь возникает проблема. Скажем, если на вводе будет 35, то для
    // типа std::int8_t этот ввод будет интерпретирован как два символа '3' и
    // '5'. Считается только символ '3' (код ASCII 51). В результате будет
    // выведено число 51, а не 35. Эта проблема происходит из-за того, что
    // тип std::int8_t на многих системах интерпретируется как тип char.

    return 0;
}