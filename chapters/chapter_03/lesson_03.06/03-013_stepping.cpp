// исходный текст программы сохранен в кодировке UTF-8 без BOM

// stepping.cpp
// программа для изучения команд пошаговой отладки «step into»,
// «step over» и «step out»

// в редакторе кода «VS Code» и в среде «Visual Studio» функция «step into»
// по-русски называется «Шаг с заходом» (F11), функция «step over» —
// «Шаг с обходом» (F10), а функция «step out» — «Шаг с выходом» (Shift+F11)

// В среде «Visual Studio» должна быть выбрана конфигурация решения,
// позволяющая отладку. По умолчанию эта конфигурация называется «Debug».
// После этого для начала отладки достаточно нажать клавишу F11 или F10.
// При этом, если не установить ни одной точки останова, отладка остановится в
// начале функции main по умолчанию и далее можно продолжать пошаговое
// выполнение. (Возможно, для успешной компиляции в среде «Visual Studio»
// понадобится поменять кодировку исходного кода на UTF-8 с BOM.)

// В редакторе кода «VS Code» для первоначальной остановки пошагового
// выполнения в начале функции main (если не указаны точки останова) нужно
// прописать настройку "stopAtEntry": true в файле «launch.json» проекта.
// А далее можно будет продолжать пошаговое выполнение. Для начала отладки
// следует нажать клавишу F5.

#include <iostream>

void printValue(int value)
{
    std::cout << value << '\n';
}

int main()
{
    printValue(5);

    return 0;
}