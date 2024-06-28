// исходный текст программы сохранен в кодировке UTF-8 без BOM

// print-standard.cpp
// Программа выводит в консоль номер стандарта языка C++, который на данный
// момент использует ваш компилятор. Программа распространяется свободно, код
// программы любезно предоставлен сайтом LearnCpp.com:
// https://www.learncpp.com/cpp-tutorial/what-language-standard-is-my-compiler-using/

#include <iostream>

const int numStandards = 7;
// номер версии стандарта C++26 в инициализации массива ниже является
// ориентировочным, поскольку точный номер для версии стандарта 2026 года
// пока не определен, так как окончательный вариант этой версии еще не вышел
const long stdCode[numStandards] = { 199711L, 201103L, 201402L, 201703L,
                                     202002L, 202302L, 202612L };
const char* stdName[numStandards] = { "до C++11", "C++11", "C++14", "C++17",
                                      "C++20", "C++23", "C++26" };

long getCPPStandard()
{
    // Среда «Visual Studio» имеет не соответствующую стандарту языка C++
    // поддержку макроса __cplusplus (если вы не включили соответствующую опцию
    // компилятора MSVC; по умолчанию предполагаем, что вы этого не сделали).
    // В версии 2015 (или новее) среды «Visual Studio» вместо вышеуказанного
    // макроса мы можем использовать макрос _MSVC_LANG. Подробнее про это
    // см. по ссылке
    // https://devblogs.microsoft.com/cppblog/msvc-now-correctly-reports-__cplusplus/
#if defined (_MSVC_LANG)
    return _MSVC_LANG;
#elif defined (_MSC_VER)
    // если используется версия среды «Visual Studio» старше версии 2015,
    // то умываем руки (отказываемся иметь дело с этим старьем)
    return -1;
#else
    // макрос __cplusplus — правильный способ запросить номер стандарта языка C++
    // (этот способ определен в самом стандарте языка C++)
    return __cplusplus;
#endif
}

int main()
{
    long standard = getCPPStandard();

    if (standard == -1)
    {
        std::cout << "Ошибка: не могу определить номер используемого вами "
                     "стандарта. Извините.\n";
        return 0;
    }

    for (int i = 0; i < numStandards; ++i)
    {
        // если полученный номер версии стандарта C++ является одним из
        // номеров полностью завершенных стандартов C++, то мы точно знаем,
        // какую версию стандарта C++ использует анализируемый компилятор
        if (standard == stdCode[i])
        {
            std::cout << "Ваш компилятор использует стандарт языка версии "
                      << stdName[i] << " (код: " << standard << "L)\n";
            break;
        }

        // если полученный номер версии стандарта C++ находится между двух
        // номеров полностью завершенных стандартов C++, то это, видимо,
        // предварительная/экспериментальная версия с поддержкой следующей
        // финальной версии, которая будет завершена в будущем
        if (standard < stdCode[i])
        {
            std::cout << "Ваш компилятор использует предварительную версию "
                      "стандарта языка " << stdName[i] << " (код: "
                      << standard << "L)\n";
            break;
        }
    }

    return 0;
}
