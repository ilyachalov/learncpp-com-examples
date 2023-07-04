// исходный текст программы сохранен в кодировке UTF-8 без BOM

// debugging-tactic2.cpp
// тактика отладки: проверка хода (течения) выполнения кода

#include <iostream>

int getValue()
{
    std::cerr << "getValue() вызвана\n"; // для отладки
    return 4;
}

int main()
{
    std::cerr << "main() вызвана\n"; // для отладки

    // std::cout << getValue << '\n'; // было, с ошибкой
    std::cout << getValue() << '\n';  // стало, ошибка исправлена

    return 0;
}