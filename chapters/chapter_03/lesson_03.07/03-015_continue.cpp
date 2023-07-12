// исходный текст программы сохранен в кодировке UTF-8 без BOM

// continue.cpp
// программа для изучения команды отладки «continue»

// после запуска отладки эта команда доступна
// в среде «Visual Studio»: по-русски «Продолжить» (F5)
// в редакторе «VS Code»: по-русски «Продолжить» (F5)

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