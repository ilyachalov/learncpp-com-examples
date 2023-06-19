# learncpp-com-examples
🚧 *...проект начат в 2023 году, находится в работе...*

Примеры с известного и популярного англоязычного сайта www.learncpp.com, представляющего собой бесплатный учебник по изучению языка программирования C++ для начинающих. В некоторые из этих примеров я внес свои комментарии и исправления. Где это возможно, я постарался перевести англоязычные литералы и комментарии на русский язык.

Учебник содержит 24 номерные главы 0-23, две главы с номерами-буквами O и M, а также три приложения A, B и C. В папке «[chapters](chapters/)» пока что содержатся только тексты примеров и упражнений глав 0 и 1, разбитых на подпапки по главам. Со второй главы еще введено разбиение главы на подпапки по урокам (подглавам).

🚧 *...примеры и упражнения из главы 2 есть только частично, по подглавам с 2.1 по 2.12...*

В файле «[eng-rus-dictionary.md](eng-rus-dictionary.md)» я составляю небольшой англо-русский словарик терминов из учебника. Это очень полезная вещь, так как даже некоторые простейшие термины, бывает, вызывают трудности при переводе. В словарике есть мои замечания и памятка по английскому алфавиту.

## Кроссплатформенность

Исходные тексты программ я сохраняю в кодировке UTF-8 без BOM. Окончания строк&nbsp;— CRLF. Отступы выполняю пробелами, длина отступа&nbsp;— 4 пробела (такой способ лучше подходит для публикации в интернете, чем использование символа горизонтальной табуляции, который популярные браузеры трактуют как 8 пробелов, это слишком большой отступ). Для редактирования исходных текстов программ я использую редакторы кода «[VS Code](https://ru.wikipedia.org/wiki/Visual_Studio_Code)» (с расширением «[ms-vscode.cpptools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)») и «[Notepad++](https://ru.wikipedia.org/wiki/Notepad%2B%2B)».

Программы я компилирую и тестирую в двух средах:

1. Система «Windows 10», [компилятор MSVC](https://ru.wikipedia.org/wiki/Microsoft_Visual_C%2B%2B) (cl.exe) версии 19.35.32216.1 для x64 из командной строки, программы-оболочки «cmd.exe» и «PowerShell» версии 7 и выше.
2. Система «Ubuntu» (через «[WSL 2](https://learn.microsoft.com/en-us/windows/wsl/)»), компилятор «g++» ([GCC](https://ru.wikipedia.org/wiki/GNU_Compiler_Collection)) версии 11.3.0 из командной строки, программа-оболочка «bash».

Перед запуском исполняемых файлов в системе «Windows 10» в программах-оболочках требуется предварительное переключение активной кодовой страницы на кодовую страницу с номером 65001 (UTF-8). Вот какие команды можно для этого использовать:

1. В программе-оболочке «cmd.exe»: `chcp 65001`.
2. В программах-оболочках «PowerShell» (версии 7 и выше) или в «Windows PowerShell» (версии 5.1):
```
[System.Console]::InputEncoding = [System.Text.Encoding]::UTF8
[System.Console]::OutputEncoding = [System.Text.Encoding]::UTF8
```
В системе «Ubuntu» (через «WSL 2») никакой предварительной настройки не требуется.

Для работы с программами-оболочками я использую программу-«эмулятор терминала» «[Windows Terminal](https://ru.wikipedia.org/wiki/Windows_Terminal)» (предполагается, что эта программа заменит устаревающую «[Windows Console](https://en.wikipedia.org/wiki/Windows_Console)»).

## Ключи компиляторов

Запуск компилятора MSVC из командной строки, программа-оболочка «Developer PowerShell for VS 2022» (построена на базе устаревающей программы-оболочки «Windows PowerShell» версии 5.1):
```
cl /EHsc /utf-8 "program.cpp"
```

Запуск компилятора «g++» (GCC) из программы-оболочки «bash»:
```
g++ "program.cpp" -o "program"
```
Исходные тексты программ храню в системе «Windows 10», а компилятору «g++» в системе «Ubuntu» (через «WSL 2») можно передать путь к файлу, хранящемуся в системе «Windows 10», следующим образом:
```
"/mnt/c/Users/Илья/source/repos/learncpp/program.cpp"
```
Это для файла `C:\Users\Илья\source\repos\learncpp\program.cpp`.

## Совместимость с текущей версией стандарта языка C++

По умолчанию компилятор MSVC настроен для работы с версией C++14 стандарта ([тут подробнее](https://learn.microsoft.com/en-us/cpp/build/reference/std-specify-language-standard-version)), а компилятор «g++» (GCC)&nbsp;— с версией C++17 стандарта ([тут подробнее](https://gcc.gnu.org/onlinedocs/gcc-11.3.0/gcc/Standards.html#C_002b_002b-Language)). На данный момент [действующей версией стандарта](https://isocpp.org/std/the-standard) является C++20, поэтому для работы с текущей версией в команды запуска компиляторов потребуется добавить дополнительные ключи:
```
cl /EHsc /utf-8 /std:c++20 "program.cpp"
```
```
g++ "program.cpp" -o "program" -std=c++20
```

## Регулировка предупреждений, выдаваемых компиляторами

По умолчанию оба названных выше компилятора не выдают часть предупреждений (выдают только сообщения об ошибках). Для повышения «чувствительности» компиляторов я добавляю соответствующие ключи в команды их запуска. Про соответствующие ключи компилятора MSVC можно [почитать в документации](https://learn.microsoft.com/en-us/cpp/build/reference/compiler-option-warning-level) (я использую ключ `/W4`). Про соответствующие ключи компилятора «g++» (GCC) можно почитать в [его документации](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html) (я использую ключ `-Wall`). Вот как при этом выглядят команды запуска компиляторов:
```
cl /EHsc /utf-8 /std:c++20 /W4 "program.cpp"
```
```
g++ "program.cpp" -o "program" -std=c++20 -Wall
```

## Компиляция многофайловых программ

Я использую следующие команды для компиляции многофайловых программ:

```
cl /EHsc /utf-8 /std:c++20 /W4 "file1.cpp" "file2.cpp" /link /out:"program.exe"
```
```
g++ "file1.cpp" "file2.cpp" -o "program" -std=c++20 -Wall
```

## Полезные ссылки

- [Руководство пользователя](https://gcc.gnu.org/onlinedocs/gcc/) к набору компиляторов GCC (GNU Compiler Collection);
- [Справочник (cppreference.com)](https://en.cppreference.com) по языку программирования C++.
