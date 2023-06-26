// исходный текст программы сохранен в кодировке UTF-8 без BOM

// one-definition-violation2.cpp
// нарушение правила одного определения для функции

#include <iostream>

int foo() // это определение функции foo
{
    return 5;
}

int foo() // ошибка компиляции: дублирующее определение
{
    return 5;
}

int main()
{
    std::cout << foo();
    return 0;
}