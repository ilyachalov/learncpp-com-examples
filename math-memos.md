# Математическая памятка для C++

При изучении языка программирования C++ бывают нужны некоторые знания из математики. Ничего особо сложного не требуется. Я буду записывать в этот файл некоторые вещи из этой области.

## Целочисленное деление с остатком

Для целочисленного деления в C++ верно следующее:
```
a = b · q + r       // формула
0 ≤ sgn(a)·r < |b|  // ограничение формулы для обеспечения уникальности результата
```
Здесь `a` — это делимое, `b` — делитель, `q` — частное и `r`&nbsp;— остаток. Математическая функция `sgn(x)`&nbsp;— это [функция знака](https://ru.wikipedia.org/wiki/Sgn) (сигнум). Не путать с [евклидовым делением](https://en.wikipedia.org/wiki/Euclidean_division), результаты деления там отличаются в некоторых случаях (в моем блоге про это есть [отдельный пост](https://ilyachalov.livejournal.com/342965.html))!

Начиная с версии стандарта C++11, знак остатка совпадает со знаком делимого (до этого в C++ определение знака оставлялось на волю конкретной реализации языка). [Тут про это подробнее](https://stackoverflow.com/a/13100805/16458042).

## Названия больших чисел

Возьмем для примера диапазон значений 64-битных целых без знака:
```
[0, 18'446'744'073'709'551'615]

18  — квинтиллионы
446 — квадриллионы
744 — триллионы
073 — миллиарды
709 — миллионы
551 — тысячи
615 — сотни, десятки, единицы
```
Большое число, являющееся границей этого диапазона справа, вычисляется по формуле `2^64 - 1`. Следует иметь в виду, что существует несколько разных шкал ([википедия](https://ru.wikipedia.org/wiki/%D0%A1%D0%B8%D1%81%D1%82%D0%B5%D0%BC%D1%8B_%D0%BD%D0%B0%D0%B8%D0%BC%D0%B5%D0%BD%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F_%D1%87%D0%B8%D1%81%D0%B5%D0%BB)) с разными названиями больших чисел. Я использовал здесь шкалу, которая называется «короткая шкала с миллиардом вместо биллиона», так как она используется в России.

## Полезные ссылки

https://math.stackexchange.com — для вопросов по математике (на английском языке).