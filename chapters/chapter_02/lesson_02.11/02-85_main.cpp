// исходный текст программы сохранен в кодировке UTF-8 без BOM

// main.cpp
// главный файл многофайловой программы, содержит функцию main

#include "add.h"    // вставить содержимое файла add.h сюда
                    // (заметьте, что здесь используются двойные кавычки)
#include <iostream>

int main()
{
    std::cout << "Сумма 3 и 4 равна " << add(3, 4) << '\n';
    return 0;
}