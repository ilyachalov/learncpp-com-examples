// исходный текст программы сохранен в кодировке UTF-8 без BOM

// early-return-in-not-void.cpp
// досрочный возврат из функции, возвращающей значение

#include <iostream>

int print() // заметьте: тип int
{
    std::cout << "А";

    return 5; // функция возвратится в вызывающую функцию здесь

    std::cout << "Б" << '\n'; // буква Б никогда не будет выведена в консоль
}

int main()
{
    std::cout << print() << '\n'; // функция print() возвращает значение 5,
                                  // которое будет выведено в консоль

    return 0;
}
