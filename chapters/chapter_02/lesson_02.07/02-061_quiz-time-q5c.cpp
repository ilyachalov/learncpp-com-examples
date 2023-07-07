// исходный текст программы сохранен в кодировке UTF-8 без BOM

// quiz-time-q5c.cpp
// программа к вопросу 5c проверочного опроса подглавы 2.7

// По сравнению с версией программы 5b в этой версии количество параметров
// при вызове функции add в функции main теперь совпадает с количеством
// параметров в объявлении функции add. Компилятор ошибку не выдаст.
// Однако, теперь ошибку выдаст компоновщик (linker), так как в этой программе
// отсутствует реализация (определение) функции add с двумя параметрами.
// Есть только определение функции add с тремя параметрами, которое
// не подойдет.

#include <iostream>

int add(int x, int y); // объявление функции add

int main()
{
    std::cout << "3 + 4 = " << add(3, 4) << '\n';
    return 0;
}

int add(int x, int y, int z) // определение функции
{
    return x + y + z;
}