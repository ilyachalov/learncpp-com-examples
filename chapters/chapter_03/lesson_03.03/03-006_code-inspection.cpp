// исходный текст программы сохранен в кодировке UTF-8 без BOM

// code-inspection.cpp
// визуальный осмотр кода с целью нахождения причины ошибки

void getNames()
{
}

void sortNames()
{
}

void printNames()
{
}

int main()
{
    getNames();   // попросить пользователя ввести группу имен
    sortNames();  // отсортировать их в алфавитном порядке
    printNames(); // вывести отсортированный список имен

    // Если предполагается, что программа выведет имена в алфавитном порядке,
    // а она вывела их в обратном алфавитному порядке, то, вероятно, причина
    // ошибки находится в коде функции sortNames.

    return 0;
}