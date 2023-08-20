// исходный текст программы сохранен в кодировке UTF-8 без BOM

// symbolic-constant.cpp
// константная (неизменяемая) переменная является одним из видов символической
// константы (постоянного значения с именем)

#include <iostream>

int main()
{
    const int maxStudentsPerClass{ 30 }; // это символическая константа
    std::cout << "Класс содержит " << maxStudentsPerClass << " студентов.\n";

    return 0;
}