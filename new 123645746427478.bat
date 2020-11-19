@ECHO OFF
set /p hello=Sign in a number:
echo %hello%
for /L %%n IN (0,1,%hello%) DO echo %%n 
pause