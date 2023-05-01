// исходный текст программы сохранен в кодировке UTF-8 без BOM

// helloworld-wait.cpp
// добавление ожидания в конец программы на языке C++

#include <iostream>
#include <limits>

int main()
{
    std::cout << "Привет, мир!\n";

    std::cin.clear(); // сбросить все флаги ошибок;
                      // игнорировать любые символы во входном буфере
                      // до появления символа новой строки
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();   // получить еще один символ от пользователя
                      // (ждет нажатия клавиши «Enter»)
    return 0;
}