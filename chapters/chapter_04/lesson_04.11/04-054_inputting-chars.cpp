// исходный текст программы сохранен в кодировке UTF-8 без BOM

// inputting-chars.cpp
// получение из консоли от пользователя значений типа char

#include <iostream>

int main()
{
    std::cout << "Введите символ с клавиатуры: ";

    char ch{};
    std::cin >> ch;
    std::cout << "Вы ввели: " << ch << '\n';

    // получение любой буквы русского алфавита в кодировке UTF-8
    // (в этой кодировке любая буква русского алфавита имеет размер 2 байта)

    std::cout << "Введите одну любую букву русского алфавита: ";
    char chR[2];
    std::cin >> chR[0] >> chR[1];
    std::cout << "Вы ввели: " << chR << '\n';

    return 0;
}