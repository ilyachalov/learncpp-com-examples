# learncpp-com-examples
*...проект начат в 2023 году, находится в работе, тут пока мало материалов...*

Примеры с известного и популярного англоязычного сайта www.learncpp.com, представляющего собой бесплатный учебник по изучению языка программирования C++ для начинающих. В некоторые из этих примеров я внес свои комментарии и исправления. Где это возможно, я постарался перевести англоязычные литералы и комментарии на русский язык.

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
