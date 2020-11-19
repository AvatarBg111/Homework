#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<winuser.h>
#include<E:\MyWork\FILESSSS\Libraries\curses.h>

void main(){
  char ch = 0;
  while(1){
/*    if(!GetKeyState(VK_SHIFT))  printf("\nyes");
    else                        printf("damn");
*/
    LPPOINT point;
    GetCursorPos(point);
    system("cls");
    printf("x = %ld, y = %ld", point->x, point->y);
  }
}




