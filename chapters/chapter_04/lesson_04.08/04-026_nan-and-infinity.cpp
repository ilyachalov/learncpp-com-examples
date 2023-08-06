// исходный текст программы сохранен в кодировке UTF-8 без BOM

// nan-and-infinity.cpp
// специальные значения NaN (не число) и ± бесконечность (infinity),
// предусмотренные стандартом IEEE 754

#include <iostream>

int main()
{
    double zero{ 0.0 };
    double posInf{ 5.0 / zero }; // положительная бесконечность
    std::cout << posInf << '\n';

    double negInf{ -5.0 / zero }; // отрицательная бесконечность
    std::cout << negInf << '\n';

    double nan{ zero / zero }; // не число (выражение математически невалидно)
    std::cout << nan << '\n';

    return 0;
}