// исходный текст программы сохранен в кодировке UTF-8 без BOM

// improperly-string-view4-return.cpp
// программа иллюстрирует один из случаев неправильного использования объекта
// типа std::string_view: когда возвращаемое из функции значение имеет
// тип std::string_view

#include <iostream>
#include <string>      // для std::string
#include <string_view> // для std::string_view

std::string_view getBoolName(bool b)
{
    std::string t{ "истина" }; // локальная переменная
    std::string f{ "ложь" };   // локальная переменная

    if(b)
        return t; // возвратить объект типа std::string_view, смотрящий на t

    return f;     // возвратить объект типа std::string_view, смотрящий на f
} // t и f уничтожаются в конце этой функции

int main()
{
    // неопределенное поведение
    std::cout << getBoolName(true) << ' ' << getBoolName(false) << '\n';

    return 0;
}