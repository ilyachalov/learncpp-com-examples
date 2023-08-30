Этот файл является дополнением к основному описанию проекта в файле «[README.md](README.md)».

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
Для работы с черновыми нововведениями будущей версии C++23 стандарта я использую следующие команды:
```
cl /EHsc /utf-8 /std:c++latest "program.cpp"
```
```
g++ "program.cpp" -o "program" -std=c++2b
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

## Указание дополнительных путей к включаемым (`#include`) файлам

Указание дополнительного _абсолютного_ пути с помощью [опции](https://learn.microsoft.com/en-us/cpp/build/reference/i-additional-include-directories) `/I` компилятора MSVC в операционной системе «Windows 10»:
```
cl /EHsc /utf-8 /std:c++20 /W4 /I"C:\Users\Илья\source\repos\learncpp" "program.cpp" /link /out:"program.exe"
```
Указание дополнительного _относительного_ пути (указана текущая папка с помощью символа точки `.`) с помощью опции `/I` компилятора MSVC в операционной системе «Windows 10»:
```
cl /EHsc /utf-8 /std:c++20 /W4 /I"." "program.cpp" /link /out:"program.exe"
```
Указание дополнительного пути с помощью [опции](https://gcc.gnu.org/onlinedocs/gcc/Directory-Options.html) `-I` компилятора g++ (GCC) в операционной системе «Ubuntu»:
```
ilya@IlyaComp:~/learncpp$ g++ -I"/mnt/c/Users/Илья/source/repos/learncpp" "/mnt/c/Users/Илья/source/repos/learncpp/program.cpp" -o "program" -std=c++20 -Wall
```
Опция `-I` компилятора g++ (GCC) тоже может принимать как абсолютные, так и относительные пути. Но в моем случае для компилятора g++ (GCC) мне приходится указывать только абсолютные пути, так как исходный код я храню в файловой системе операционной системы «Windows 10».
