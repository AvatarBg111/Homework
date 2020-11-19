set /a	a=30
set /a	b=20
if %a% LSS %b% set /a c=%b% && set /a d=%a%
if %a% GTR %b% set /a c=%a% && set /a d=%b%
set	/a  x=1
:bla  
if %x% LEQ 0 x=%c% % %d% && c=%d% && if %x% GTR 0 d=%x% && goto bla
set /a NOK=a*b/d 
echo %NOK% 
pause