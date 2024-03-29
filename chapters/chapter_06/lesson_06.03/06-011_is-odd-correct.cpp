// исходный текст программы сохранен в кодировке UTF-8 без BOM

// is-odd-correct.cpp
// демонстрация работы функции, определяющей нечетность заданного числа
// (корректно работающая версия)

#include <iostream>

bool isOdd(int x)
{
    //return (x % 2) == 1; // дает ошибку при нечетном отрицательном x
    //return (x % 2) != 0; // версия, работающая без ошибки
    return (x % 2);        // тоже без ошибки, но короче
                           // (в последнем варианте полученный остаток будет
                           // неявно преобразован в значение булева типа)
}

int main()
{
    std::cout << isOdd(5) << '\n';  // 1
    std::cout << isOdd(-5) << '\n'; // 1

    return 0;
}