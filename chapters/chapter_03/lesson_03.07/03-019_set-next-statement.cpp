// исходный текст программы сохранен в кодировке UTF-8 без BOM

// set-next-statement.cpp
// программа для изучения команды отладки «set next statement»,
// другое ее название — «jump to cursor»

// после запуска отладки программы, в контекстном меню, открываемом
// по щелчку правой кнопки мыши:
// – в редакторе «VS Code»: по-русски «Перейти к курсору» (по умолчанию
//   у нее нет назначенного сочетания клавиш для запуска, но это сочетание
//   можно назначить самостоятельно);
// – в среде «Visual Studio»: по-русски «Задать следующую инструкцию»
//   (Ctrl+Shift+F10)
//   (не перепутайте с командой «Показать следующую инструкцию»!)

#include <iostream>

void printValue(int value)
{
    std::cout << value << '\n';
}

int main()
{
    printValue(5);
    printValue(6);
    printValue(7);

    return 0;
}