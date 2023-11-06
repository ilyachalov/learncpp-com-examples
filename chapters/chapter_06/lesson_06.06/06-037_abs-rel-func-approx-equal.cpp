// исходный текст программы сохранен в кодировке UTF-8 без BOM

// abs-rel-func-approx-equal.cpp
// реализация функции, определяющей примерное равенство двух чисел с применением
// сразу двух подходов: абсолютная разница (эпсилон) и относительная

#include <algorithm> // для функции std::max
#include <cmath>     // для функции std::abs
#include <iostream>

// возвращает true (истина), если разница между a и b меньше или равна
// доле от большего из двух сравниваемых чисел a и b; эта доля определяется
// произведением relEpsilon с большим из двух сравниваемых чисел
// (я думаю, что подразумевается, что relEpsilon < 1)
bool approximatelyEqualRel(double a, double b, double relEpsilon)
{
    return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

// возвратить true (истина), если разница между a и b меньше или равна absEpsilon,
// либо эта разница находится внутри доли от большего из сравниваемых чисел,
// определяемой числом relEpsilon
bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
    // проверить близость чисел с помощью absEpsilon — это особенно важно
    // при сравнении чисел, близких к нулю
    if (std::abs(a - b) <= absEpsilon)
        return true;

    // чтобы компенсировать проблемы проверки с помощью absEpsilon, используем
    // алгоритм Дональда Кнута
    return approximatelyEqualRel(a, b, relEpsilon);
}

int main()
{
    // число a очень близко к 1.0, но не равно 1.0 из-за ошибок округления
    constexpr double a{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 +
                        0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

    constexpr double relEps{ 1e-8 };
    constexpr double absEps{ 1e-12 };

    std::cout << approximatelyEqualRel(a, 1.0, relEps) << '\n';       // почти 1.0 с 1.0
    std::cout << approximatelyEqualRel(a - 1.0, 0.0, relEps) << '\n'; // почти 0.0 с 0.0

    std::cout << approximatelyEqualAbsRel(a, 1.0, absEps, relEps) << '\n';
    std::cout << approximatelyEqualAbsRel(a - 1.0, 0.0, absEps, relEps) << '\n';
    std::cout << approximatelyEqualAbsRel(10000.0, 10000.0001, absEps, relEps) << '\n';

    // результат работы программы на моем компьютере:
    // 1  // разумно (алгоритм Кнута)
    // 0  // неверно (алгоритм Кнута, сравнение чисел, близких к нулю)
    // 1  // разумно (объединенный алгоритм, часть с absEps)
    // 1  // разумно (объединенный алгоритм, часть с absEps, сравнение чисел, близких к нулю)
    // 1  // разумно (объединенный алгоритм, часть с алгоритмом Кнута)

    // предполагается, что объединенный алгоритм позволит избежать проблем,
    // характерных алгоритму Кнута

    return 0;
}