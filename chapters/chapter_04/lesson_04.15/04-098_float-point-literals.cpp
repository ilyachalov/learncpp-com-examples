// исходный текст программы сохранен в кодировке UTF-8 без BOM

// float-point-literals.cpp
// использование числовых литералов вещественных чисел

#include <iostream>

int main()
{
    std::cout << 5.0 << '\n';  // 5.0 (без суффикса) имеет тип double
                               // (по умолчанию)
    std::cout << 5.0f << '\n'; // 5.0f имеет тип float

    float f{ 4.1 }; // предупреждение компилятора: 4.1 — литерал типа double,
                    // а не литерал типа float; компилятор совершает
                    // преобразование double --> float, из-за которого может
                    // произойти потеря точности

    // правильные способы инициализации переменных с вещественными числами

    float f1{ 4.1f }; // использовать суффикс f, тогда литерал имеет тип float,
                      // соответствующий типу переменной
    double d{ 4.1 };  // изменить тип переменной на тип double, тогда тип
                      // переменной будет соответствовать типу литерала
                      // по умолчанию (double)

    return 0;
}