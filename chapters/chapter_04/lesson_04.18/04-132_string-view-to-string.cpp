// исходный текст программы сохранен в кодировке UTF-8 без BOM

// string-view-to-string.cpp
// программа демонстрирует способы преобразования объекта типа std::string_view
// в объект типа std::string

#include <iostream>
#include <string>      // для std::string
#include <string_view> // для std::string_view

void printString(std::string str)
{
    std::cout << str << '\n';
}

int main()
{
    std::string_view sv{ "Привет, мир!" };

    // printString(sv); // ошибка компиляции: не разрешено неявное
                        // преобразование std::string_view в std::string
                        // при передаче аргумента функции

    std::string s{ sv }; // нет ошибки: мы можем создать std::string с помощью
                         // инициализатора типа std::string_view
    printString(s);      // и вызвать функцию, передав аргумент типа std::string

    printString(static_cast<std::string>(sv)); // нет ошибки: мы можем явно
                                               // привести std::string_view
                                               // к std::string

    return 0;
}