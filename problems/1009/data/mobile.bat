@echo off
if "%1"=="" goto loop
copy mobile%1.in mobile.in >nul
echo Problem Test
echo Data %1
time<enter
mobile.exe
time<enter
copy mobile%1.out mobile.ans >nul
fc mobile.out mobile.ans
del mobile.in
del mobile.out
del mobile.ans
pause
goto quit
:loop
for %%i in (1 2 3 4 5 6 7 8 9 10) do call %0 %%i
:quit
