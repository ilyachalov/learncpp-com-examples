// исходный текст программы сохранен в кодировке UTF-8 без BOM

// semantic-error-early-return.cpp
// семантическая ошибка из-за досрочного (раннего) возврата

#include <iostream>

int main()
{
    return 0;                      // выход из функции произойдет здесь,

    std::cout << "Привет, мир!\n"; // поэтому это утверждение не выполнится
}