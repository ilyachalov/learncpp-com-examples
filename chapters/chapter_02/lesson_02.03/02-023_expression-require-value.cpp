// исходный текст программы сохранен в кодировке UTF-8 без BOM

// expression-require-value.cpp
// некоторые виды выражений требуют входные значения

#include <iostream>

int main()
{
    std::cout << 5; // без ошибки: 5 — это литерал, который выводим в консоль
    std::cout << ;  // ошибка компиляции: нет одного из входных значений

    return 0;
}
