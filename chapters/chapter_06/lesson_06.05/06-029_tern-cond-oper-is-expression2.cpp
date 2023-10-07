// исходный текст программы сохранен в кодировке UTF-8 без BOM

// tern-cond-oper-is-expression2.cpp
// троичный условный оператор ?: является выражением, его можно вставлять
// там, где может быть использовано выражение

#include <iostream>

int main()
{
    constexpr bool inBigClassroom{ false };
    // constexpr int classSize{ inBigClassroom ? 30 : 20 };
    // std::cout << "Размер класса: " << classSize << '\n';

    // пробуем реализовать то же самое с помощью ветвления if:

    if (inBigClassroom)
        constexpr int classSize{ 30 };
    else
        constexpr int classSize{ 20 };
    std::cout << "Размер класса: " << classSize << '\n'; // ошибка

    // ошибка при попытке компиляции происходит из-за того, что объявление
    // переменной classSize происходит внутри веток ветвления if, которые
    // обладают собственной областью видимости

    return 0;
}