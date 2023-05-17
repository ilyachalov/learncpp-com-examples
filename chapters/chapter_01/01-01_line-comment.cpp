// исходный текст программы сохранен в кодировке UTF-8 без BOM

// line-comment.cpp
// однострочные комментарии

#include <iostream>

int main()
{
    std::cout << "Привет, мир!\n"; // всё отсюда и до конца строки игнорируется

    std::cout << "Привет, мир!\n"; // std::cout есть в библиотеке iostream
    std::cout << "Приятно познакомиться с тобой!\n"; // эти комментарии в коде тяжело читать
    std::cout << "О, да!\n"; // особенно когда строки разной длины

    std::cout << "Привет, мир!\n";                   // std::cout есть в библиотеке iostream
    std::cout << "Приятно познакомиться с тобой!\n"; // так читать код намного легче
    std::cout << "О, да!\n";                         // не так ли?

    // std::cout есть в библиотеке iostream
    std::cout << "Привет, мир!\n";

    // так читать код намного легче
    std::cout << "Приятно познакомиться с тобой!\n";

    // не так ли?
    std::cout << "О, да!\n";

    return 0;
}