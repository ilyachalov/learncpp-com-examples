// исходный текст программы сохранен в кодировке UTF-8 без BOM

// if-statement.cpp
// программа показывает, как можно использовать ветвление if

#include <iostream>

int main()
{
    std::cout << "Введите целое число: ";
    int x{};
    std::cin >> x;

    if (x == 0)
        std::cout << "Введенное значение является нулем\n";

    // Данная программа рассчитана только на ввод целых чисел.

    // Если вы введете какие-нибудь слова, программа выдаст утверждение,
    // что введенное значение является нулем, а это не соответствует
    // действительности.

    // Почему так происходит? Оператор>> ожидает ввода целого числа,
    // поскольку x является значением типа int. Если пользователь
    // вводит буквы, переменной x присваивается число 0, в информации
    // о состоянии входящего потока делается отметка об ошибке. Получается,
    // что ошибка дает число 0, из-за чего выдается утверждение, что
    // введенное значение является нулем.

    return 0;
}