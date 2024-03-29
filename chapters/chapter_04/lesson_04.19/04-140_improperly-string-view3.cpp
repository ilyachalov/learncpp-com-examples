// исходный текст программы сохранен в кодировке UTF-8 без BOM

// improperly-string-view3.cpp
// программа иллюстрирует один из случаев неправильного использования объекта
// типа std::string_view: просматриваемая строка будет изменена раньше, чем
// мы закончим использование ее просмотра

#include <iostream>
#include <string>      // для std::string
#include <string_view> // для std::string_view

int main()
{
    std::string s{ "Привет, мир!" };
    std::string_view sv{ s }; // sv теперь смотрит на s

    s = "Привет, вселенная!"; // изменяет s, что делает объект sv невалидным
                              // (при этом объект s остается валидным)

    std::cout << sv << '\n';  // неопределенное поведение

    return 0;
}