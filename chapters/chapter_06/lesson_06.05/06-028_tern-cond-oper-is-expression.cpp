// исходный текст программы сохранен в кодировке UTF-8 без BOM

// tern-cond-oper-is-expression.cpp
// троичный условный оператор ?: является выражением, его можно вставлять
// там, где может быть использовано выражение

#include <iostream>

int main()
{
    constexpr bool inBigClassroom{ false };
    constexpr int classSize{ inBigClassroom ? 30 : 20 };
    std::cout << "Размер класса: " << classSize << '\n';

    return 0;
}