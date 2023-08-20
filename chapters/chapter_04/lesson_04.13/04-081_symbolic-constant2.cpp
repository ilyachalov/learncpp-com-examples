// исходный текст программы сохранен в кодировке UTF-8 без BOM

// symbolic-constant2.cpp
// с помощью макроопределения для препроцессора тоже можно создать
// символическую константу (постоянное значение с именем)

#include <iostream>

#define MAX_STUDENTS_PER_CLASS 30

int main()
{
    std::cout << "Класс содержит " << MAX_STUDENTS_PER_CLASS << " студентов.\n";

    return 0;
}