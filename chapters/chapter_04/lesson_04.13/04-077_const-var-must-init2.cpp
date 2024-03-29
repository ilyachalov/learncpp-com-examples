// исходный текст программы сохранен в кодировке UTF-8 без BOM

// const-var-must-init2.cpp
// неизменяемые переменные обязательно должны быть инициализированы
// (из-за того, что их значение запрещено менять, это значение
// может быть задано только при инициализации)

#include <iostream>

int main()
{
    std::cout << "Введите ваш возраст: ";
    int age{};
    std::cin >> age;

    const int constAge{ age }; // инициализировать неизменяемую переменную
                               // с помощью значения изменяемой переменной

    age = 5;      // корректно: age — изменяемая переменная, поэтому мы можем
                  // изменить ее значение
    constAge = 6; // ошибка: constAge — неизменяемая переменная, поэтому мы
                  // не можем изменить ее значение

    return 0;
}