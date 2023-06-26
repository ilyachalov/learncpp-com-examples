# исходный текст скрипта сохранен в кодировке UTF-8 без BOM, с окончаниями
# строк CRLF, для запуска из программы-оболочки «PowerShell 7» в «Windows 10»

# скрипт переименовывает файлы в текущем каталоге и подкаталогах текущего
# каталога и так далее вглубь иерархии каталогов; файлы переименовываются
# по следующему принципу:

# 00-00_имя-файла.ext   # было
# 00-000_имя-файла.ext  # стало

$total = 0
$renamed = 0
Get-ChildItem -File -Recurse |
    Rename-Item -NewName {
        $old = $_.Name
        $new = $old -replace '^(\d\d)-(\d\d)_(.*)', '$1-0$2_$3'
        $script:total++
        if ($old -ne $new) {
            Write-Host "$old --> $new"
            $script:renamed++
        } else {
            Write-Host "$new"
        }
        $new
    }
"Проверено файлов всего: $total, из них переименовано: $renamed"