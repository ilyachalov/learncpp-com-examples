// исходный текст программы сохранен в кодировке UTF-8 без BOM

// calc-implementation-step2.cpp
// пример создания функции getUserInput программы на шаге 2 реализации
// для задачи «Калькулятор»

#include <iostream>

// полная реализация функции getUserInput
int getUserInput()
{
    std::cout << "Введите целое число: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    // получить первое число от пользователя
    int value{ getUserInput() }; // Заметьте, мы вставили сюда код для
                                 // тестирования возвращаемого значения!
    std::cout << value << '\n';  // Отладочный код, чтобы убедиться, что
                                 // функция getUserInput работает. Мы удалим
                                 // его позже.

    // получить математическую операцию от пользователя
    // getMathematicalOperation();

    // получить второе число от пользователя
    // getUserInput();

    // вычислить результат
    // calculateResult();

    // вывести результат в консоль
    // printResult();

    return 0;
}