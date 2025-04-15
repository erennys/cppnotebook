@echo off

REM Sahte değişiklik: postBuild.txt'ye boş satır ekle ve hemen geri sil
echo.>> postBuild.txt
powershell -Command "(Get-Content postBuild.txt) | Where-Object { $_ -ne '' } | Set-Content postBuild.txt"

REM Değişiklikleri sahnele
git add .

REM Commit + Pull + Push
git commit -m "Otomatik güncelleme"
git pull origin main
git push origin main

exit
