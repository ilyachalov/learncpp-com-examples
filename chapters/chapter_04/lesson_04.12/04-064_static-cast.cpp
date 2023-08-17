// исходный текст программы сохранен в кодировке UTF-8 без BOM

// static-cast.cpp
// использование оператора статического приведения

#include <iostream>

void print(int x)
{
    std::cout << x << '\n';
}

int main()
{
    print( static_cast<int>(5.5) ); // явно преобразовать значение 5.5 (double)
                                    // в значение типа int

    return 0;
}