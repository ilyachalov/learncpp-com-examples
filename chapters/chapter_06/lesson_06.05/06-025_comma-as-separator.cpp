// исходный текст программы сохранен в кодировке UTF-8 без BOM

// comma-as-separator.cpp
// в языке C++ символ запятой часто используется в качестве разделителя,
// такое использование запятой не является вызовом оператора «запятая»

#include <iostream>

int add(int x, int y) // запятая используется для разделения параметров
{                     // в определении функции
    return x + y;
}

int main()
{
    int z{ 3 }, w{ 5 }; // запятая используется для разделения переменных
                        // при определении множества переменных в одном
                        // утверждении (не рекомендуется это делать)

    z = add(z, w); // запятая используется для разделения аргументов
                   // в вызове функции

    std::cout << z << '\n'; // 8

    return 0;
}