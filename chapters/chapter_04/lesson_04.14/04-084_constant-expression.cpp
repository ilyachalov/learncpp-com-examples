// исходный текст программы сохранен в кодировке UTF-8 без BOM

// constant-expression.cpp
// константное выражение — это выражение, которое может быть вычислено
// компилятором во время компиляции (compile-time)

#include <iostream>

int main()
{
    // int x{ 3 + 4 };      // в скобках — константное выражение
    int x{ 7 };             // это утверждение оптимизирующий компилятор
                            // компилирует на самом деле вместо вышеуказанного
    std::cout << x << '\n';

    return 0;
}