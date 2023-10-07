// исходный текст программы сохранен в кодировке UTF-8 без BOM

// tern-cond-oper-is-expression3.cpp
// троичный условный оператор ?: является выражением, его можно вставлять
// там, где может быть использовано выражение

#include <iostream>

int getClassSize(bool inBigClassroom)
{
    if (inBigClassroom)
        return 30;
    return 20;
}

int main()
{
    // constexpr bool inBigClassroom{ false };
    // constexpr int classSize{ inBigClassroom ? 30 : 20 };
    // std::cout << "Размер класса: " << classSize << '\n';

    // вот как можно в данном случае написать примерно то же самое с помощью
    // ветвления if:

    const int classSize{ getClassSize(false) };
    std::cout << "Размер класса: " << classSize << '\n';

    // Тут ошибки нет, но зато есть много лишней работы, например, создание
    // отдельной функции. Кроме того, в данном случае не получается использовать
    // служебное слово constexpr, пришлось заменить его на const.

    return 0;
}