// исходный текст программы сохранен в кодировке UTF-8 без BOM

// debug-code-conditions.cpp
// обусловливание отладочного кода

#include <iostream>

#define ENABLE_DEBUG // закомментировать это, чтобы отключить отладочный код

int getUserInput()
{
#ifdef ENABLE_DEBUG
    std::cerr << "getUserInput() вызвана\n"; // для отладки
#endif
    std::cout << "Введите число: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
#ifdef ENABLE_DEBUG
    std::cerr << "main() вызвана\n"; // для отладки
#endif
    int x{ getUserInput() };
    std::cout << "Вы ввели: " << x << '\n';

    return 0;
}