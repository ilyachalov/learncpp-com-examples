// исходный текст программы сохранен в кодировке UTF-8 без BOM

// start.cpp
// программа для изучения команды отладки «start»

// перед запуском отладки эта команда доступна
// в среде «Visual Studio»: по-русски «Начать отладку» (F5)
// в редакторе «VS Code»: по-русски «Запустить отладку» (F5)

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