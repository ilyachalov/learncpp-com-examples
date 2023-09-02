// исходный текст программы сохранен в кодировке UTF-8 без BOM

// quiz-time-q1.cpp
// программа в ответ на вопрос 1 проверочного опроса подглавы 4.17

// Задание: написать программу, запрашивающую у пользователя его полное
// имя (имя и фамилию) и его возраст. Подсчитать сумму возраста пользователя
// с числом букв в его имени и вывести результат на экран. Для простоты
// пробельные символы в полном имени включаются в длину полного имени.

#include <iostream>
#include <string>   // для std::string

int main()
{
    std::cout << "Введите ваше полное имя (имя и фамилию): ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Введите ваш возраст: ";
    int age{};
    std::cin >> age;

    std::cout << "Сумма вашего возраста и длины имени: "
              << age + static_cast<int>(name.length()) << '\n';

    // метод length класса std::string возвращает значение типа size_t,
    // которое является целым без знака; по условиям задания в выражении
    // нельзя смешивать целое со знаком (int) с целым без знака (size_t),
    // поэтому для преобразования используется static_cast

    // при тестировании программы следует помнить, что русские буквы
    // в кодировке UTF-8 занимают по 2 байта, то есть в строке занимают
    // по 2 позиции

    return 0;
}