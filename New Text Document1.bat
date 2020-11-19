@echo off
set /a n=10
set /a t=n-1
set /a b=0
goto :qust
:qust
if /i "%t%" GTR "%b%" goto hello   
goto what ok  
:hello 
set /a list[t]=%RANDOM%   
echo %t%
set /a t=%t%-1
goto qust 
:what ok
pause
  