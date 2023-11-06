// исходный текст программы сохранен в кодировке UTF-8 без BOM

// side-effects.cpp
// сторонние (побочные) эффекты

#include <iostream>

int main()
{
    int x{};
    x = 5;   // побочный эффект оператора присваивания: изменение x
    ++x;     // побочный эффект оператора инкремента: увеличение x на 1

    std::cout << x; // побочный эффект оператора вставки: изменяет
                    // состояние консоли

    return 0;
}