// исходный текст программы сохранен в кодировке UTF-8 без BOM

// adding-subtracting.cpp
// программа, выдающая результат сложения и вычитания двух заданных чисел

#include <iostream>

int main()
{
    std::cout << "Введите целое число: ";
    int num1{};
    std::cin >> num1;

    std::cout << "Введите еще одно целое число: ";
    int num2{};
    std::cin >> num2;

    std::cout << num1 << " + " << num2 << " равно " << num1 + num2 << ".\n";
    std::cout << num1 << " - " << num2 << " равно " << num1 - num2 << ".\n";

    return 0;
}