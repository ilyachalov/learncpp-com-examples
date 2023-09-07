// исходный текст программы сохранен в кодировке UTF-8 без BOM

// quiz-time-q4-fix.cpp
// программа в ответ на вопрос 4 проверочного опроса к подглаве 4.x,
// являющейся итоговой для главы 4 учебника

// Задание. Написать короткую программу, имитирующую сброс мяча с башни.
// Программа должна запросить у пользователя высоту башни в метрах.
// Предполагаем, что ускорение свободного падения g = 9,8 м/с^2 и мяч
// при сбросе не имеет начальной скорости (неподвижен). Программа должна
// вывести в консоль высоту мяча над землей после 0, 1, 2, 3, 4 и 5 секунд.
// Очевидно, что мяч не может уйти под землю (высота не может быть
// меньше нуля).

// Дополнительные требования. Создать функцию, вычисляющую высоту мяча
// над землей после заданного количества секунд x. Функция должна использовать
// следующую формулу: расстояние, пройденное мячом = (g * x^2) / 2.

// Исправление: я посмотрел решение от автора учебника и увидел, как можно
// исправить некрасивую двойную передачу одного и того же значения при
// вызове функции printHeight(0.0, getHeight(0.0, startHeight)).

#include <iostream>

double getHeight(double x, double startHeight)
{
    double height{};
    constexpr double g{ 9.8 }; // ускорение свободного падения
    height = startHeight - g * x * x / 2;
    if (height < 0.0)
        height = 0.0;
    return height;
}

void printHeight(double elapsedSeconds, double height)
{
    if (height == 0.0)
        std::cout << elapsedSeconds << " сек., мяч находится на земле.\n";
    else
        std::cout << elapsedSeconds << " сек., высота мяча над землей: "
                  << height << " метров\n";
}

// функция добавлена при исправлении: скрывает уродливую конструкцию
void calcAndPrintHeight(double elapsedSeconds, double startHeight)
{
    printHeight(elapsedSeconds, getHeight(elapsedSeconds, startHeight));
}

int main()
{
    std::cout << "Введите высоту башни в метрах: ";
    double startHeight{};
    std::cin >> startHeight;

    calcAndPrintHeight(0.0, startHeight);
    calcAndPrintHeight(1.0, startHeight);
    calcAndPrintHeight(2.0, startHeight);
    calcAndPrintHeight(3.0, startHeight);
    calcAndPrintHeight(4.0, startHeight);
    calcAndPrintHeight(5.0, startHeight);

    return 0;
}