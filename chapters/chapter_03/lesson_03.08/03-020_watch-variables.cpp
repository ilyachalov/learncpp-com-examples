// исходный текст программы сохранен в кодировке UTF-8 без BOM

// watching-variables.cpp
// программа для изучения наблюдения за значениями переменных с помощью
// встроенного отладчика

// В учебнике упоминается инструмент среды «Visual Studio», который называется
// «QuickWatch». В официальном переводе на русский он называется «Быстрая
// проверка...» (Shift+F9).

// В учебнике упоминается инструмент среды «Visual Studio», который называется
// «Watch Window». В официальном переводе на русский он называется «Контрольные
// значения» (Ctrl+Alt+W, 1 — «Контрольные значения 1»; при наборе этого
// сочетания клавиш сначала набирается сочетание «Ctrl+Alt+W», затем все
// клавиши следует отпустить, после чего нужно нажать клавишу «1»).

// В редакторе «VS Code» инструмент «Watch Window» по умолчанию расположен
// при отладке слева. По-русски он называется «Контрольное значение» и
// расположен ниже инструмента «Переменные» и выше инструмента «Стек вызовов».

// В среде «Visual Studio» инструмент «Add Watch» в официальном переводе на
// русский называется «Добавить контрольное значение». Его можно увидеть в
// контекстном меню, открываемом в режиме отладки по щелчку правой кнопки
// мыши по нужной переменной в исходном коде. (В редакторе «VS Code» этот
// инструмент доступен таким же способом и с таким же названием.)

#include <iostream>

int main()
{
    int x{ 1 };
    std::cout << x << ' ';

    x = x + 2;
    std::cout << x << ' ';

    x = x + 3;
    std::cout << x << '\n';

    return 0;
}