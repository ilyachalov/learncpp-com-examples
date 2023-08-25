# learncpp-com-examples
🚧 *...проект начат в 2023 году, находится в работе...*

Примеры с известного и популярного англоязычного сайта www.learncpp.com, представляющего собой бесплатный учебник по изучению языка программирования C++ для начинающих. В некоторые из этих примеров я внес свои комментарии и исправления. Где это возможно, я постарался перевести англоязычные литералы и комментарии на русский язык.

Учебник содержит 24 номерные главы 0-23, две главы с номерами-буквами O и M, а также три приложения A, B и C. В папке «[chapters](chapters/)» пока что содержатся только тексты примеров и упражнений глав 0, 1, 2 и 3, разбитых на подпапки по главам. Со второй главы еще введено разбиение глав на подпапки по урокам (подглавам). Для некоторых уроков (подглав) подпапок нет, так как в этих уроках нет ни примеров, ни упражнений, а только излагается теория.

🚧 *...примеры и упражнения из главы 4 есть пока только частично, по подглавам 4.1-4.15...*

В файле «[eng-rus-dictionary.md](eng-rus-dictionary.md)» я составляю небольшой англо-русский словарик терминов из учебника. Это очень полезная вещь, так как даже некоторые простейшие термины, бывает, вызывают трудности при переводе. В словарике есть мои замечания и памятка по английскому алфавиту.

В папке «[scripts](scripts/)» я планирую хранить различные вспомогательные скрипты на языке PowerShell. Сейчас там пока что есть один скрипт «[rename-files.ps1](scripts/rename-files.ps1)», который я написал для группового переименования файлов в папках проекта.

В файл «[math-memos.md](math-memos.md)» я записываю некоторые вещи (памятки) из области математики, полезные при изучении языка C++.

В файл «[unicode-utf8.md](unicode-utf8.md)» я записываю полезную информацию, ссылки и некоторые соображения по работе с символами в кодировке UTF-8 из программ на языке C++.

## Инструменты и кроссплатформенность

Исходные тексты программ я сохраняю в кодировке UTF-8 без BOM. Окончания строк&nbsp;— CRLF. Отступы выполняю пробелами, длина отступа&nbsp;— 4 пробела (такой способ лучше подходит для публикации в интернете, чем использование символа горизонтальной табуляции, который популярные браузеры трактуют как 8 пробелов, это слишком большой отступ). 

Для редактирования исходных текстов программ я использую редакторы кода «[VS Code](https://ru.wikipedia.org/wiki/Visual_Studio_Code)» (с расширением «[ms-vscode.cpptools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)») и «[Notepad++](https://ru.wikipedia.org/wiki/Notepad%2B%2B)». (Также я использую интегрированную среду разработки «[Visual Studio Community 2022](https://visualstudio.microsoft.com/vs/community/)» компании «Microsoft», но только чтобы следить за мыслью автора учебника, который _в частности_ использует эту среду разработки. Мне неудобно использовать эту среду для работы с маленькими программами, так как она у меня довольно долго загружается при открытии. Ко многим примерам я оставляю комментарии о том, как пользоваться функциями этой среды для выполнения задач, описываемых в учебнике.)

Программы я компилирую и тестирую в двух средах:

1. Система «Windows 10», [компилятор MSVC](https://ru.wikipedia.org/wiki/Microsoft_Visual_C%2B%2B) (cl.exe) версии 19.35.32216.1 для x64 из командной строки, программы-оболочки «cmd.exe» и «PowerShell» версии 7 и выше.
2. Система «Ubuntu» (через «[WSL 2](https://learn.microsoft.com/en-us/windows/wsl/)»), компилятор «g++» ([GCC](https://ru.wikipedia.org/wiki/GNU_Compiler_Collection)) версии 11.3.0 из командной строки, программа-оболочка «bash».

Перед запуском исполняемых файлов в системе «Windows 10» в программах-оболочках требуется предварительное переключение активной кодовой страницы на кодовую страницу с номером 65001 (UTF-8). Вот какие команды можно для этого использовать:

1. В программе-оболочке «cmd.exe»: `chcp 65001` (я ввожу эту команду вручную в начале сеанса работы с «cmd.exe»);
2. В программах-оболочках «PowerShell» (версии 7 и выше) или в «Windows PowerShell» (версии 5.1):
   
   ```
   [System.Console]::InputEncoding = [System.Text.Encoding]::UTF8
   [System.Console]::OutputEncoding = [System.Text.Encoding]::UTF8
   ```
   Эти команды для программы-оболочки «PowerShell» удобно прописать в [профиле](https://learn.microsoft.com/en-us/powershell/module/microsoft.powershell.core/about/about_profiles) пользователя (после этого не нужно будет вводить эти команды вручную в начале сеанса работы с «PowerShell»).

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

Описание других ключей (опций) этих двух компиляторов, которые я использую при изучении вышеуказанного учебника, я вынес в отдельный файл «[compiler-options.md](compiler-options.md)», так как оно стало занимать слишком много места.

## Полезные ссылки

_Язык программирования C++:_

- [Справочник (cppreference.com)](https://en.cppreference.com) по языку программирования C++;
- [wg21.link/std](https://wg21.link/std) — открыть (скачать) черновик текущей версии стандарта C++ в формате PDF;
- [eel.is/c++draft/](https://eel.is/c++draft/) — черновик текущей версии стандарта C++ в формате HTML (неофициальный источник, автор&nbsp;— [@Eelis](https://github.com/Eelis)).

_Инструменты:_

- [Руководство пользователя](https://gcc.gnu.org/onlinedocs/gcc/) к набору компиляторов GCC (GNU Compiler Collection);
- [Документация на сайте компании «Microsoft»](https://learn.microsoft.com/en-us/cpp/) (инструменты, справочники, руководства и так далее) по языку C++;
- [Документация редактора кода «Visual Studio Code»](https://code.visualstudio.com/docs);
- [Справочник по счетаниям клавиш (для «Windows»)](https://code.visualstudio.com/shortcuts/keyboard-shortcuts-windows.pdf) редактора кода «Visual Studio Code» (в формате PDF).

_Для вопросов по программированию:_

- [Stack Overflow](https://stackoverflow.com) — на английском языке;
- [Stack Overflow на русском](https://ru.stackoverflow.com) — на русском языке;
- [Хабр Q&A](https://qna.habr.com) — на русском языке.
