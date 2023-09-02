// исходный текст программы сохранен в кодировке UTF-8 без BOM

// output-empty-string.cpp
// вывод в консоль пустой строки

#include <iostream>
#include <string>   // для std::string

int main()
{
    std::string empty{};
    std::cout << '[' << empty << "]\n";

    return 0;
}