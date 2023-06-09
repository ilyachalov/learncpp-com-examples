// исходный текст программы сохранен в кодировке UTF-8 без BOM

// macros-not-affect-other.cpp
// макросы, похожие на объекты, не воздействуют на другие директивы
// препроцессора

#include <iostream>

#define FOO 9 // это макрос, определяющий замену

int main()
{
#ifdef FOO // вхождение «FOO» здесь не будет заменено, так как это часть
           // другой директивы препроцессора
    std::cout << FOO << '\n'; // вхождение «FOO» здесь будет заменено текстом
                              // замены «9», так как это часть обычного кода
#endif

    return 0;
}