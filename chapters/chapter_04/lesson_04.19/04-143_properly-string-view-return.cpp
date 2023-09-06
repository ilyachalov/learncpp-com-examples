// исходный текст программы сохранен в кодировке UTF-8 без BOM

// properly-string-view-return.cpp
// программа показывает один из способов правильного возвращения из функции
// значения типа std::string_view: если возвращаемый объект смотрит на
// строковый литерал в стиле языка Си (такие литералы не уничтожаются
// в конце функции)

#include <iostream>
#include <string_view> // для std::string_view

std::string_view getBoolName(bool b)
{
    if(b)
        return "истина"; // возвратить std::string_view, смотрящий на "истина"

    return "ложь";       // возвратить std::string_view, смотрящий на "ложь"
} // литералы "истина" и "ложь" не уничтожаются в конце этой функции

int main()
{
    // ошибки нет
    std::cout << getBoolName(true) << ' ' << getBoolName(false) << '\n';

    return 0;
}