// исходный текст программы сохранен в кодировке UTF-8 без BOM

// cin-few-values.cpp
// получение (ввод) нескольких значений

#include <iostream> // для std::cout и std::cin

int main()
{
    std::cout << "Введите два числа, разделенных пробелом: ";

    int x{}; // определить переменную для первого числа
    int y{}; // определить переменную для второго числа
    std::cin >> x >> y; // получить два числа и сохранить их в переменные

    std::cout << "Вы ввели " << x << " и " << y << '\n';

    return 0;
}
