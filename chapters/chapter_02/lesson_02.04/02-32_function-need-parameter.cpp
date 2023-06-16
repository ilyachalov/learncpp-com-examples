// исходный текст программы сохранен в кодировке UTF-8 без BOM

// function-need-parameter.cpp
// выделение функции для вывода результата вычислений
// (в данном случае эта новая функция нуждается в параметре)

#include <iostream>

int getValueFromUser()
{
    std::cout << "Введите целое число: ";
    int input{};
    std::cin >> input;

    return input;
}

// эта функция не скомпилируется
void printDouble()
{
    std::cout << num << " умноженное на 2 равняется " << num * 2 << '\n';
}

int main()
{
    int num{ getValueFromUser() };

    printDouble();

    return 0;
}
