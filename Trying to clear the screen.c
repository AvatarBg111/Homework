#include<stdio.h>
#include<stdlib.h>

int main()
{
 char helo[100];
 for(int i=0;i<10;i++)
 {
  for(int i=0;i<10;i++)
  {
  printf("hello there,");
  }
  printf("\n");
 }
 printf("Should I clear the screen(write anything else but ''DOIT'', if you don't want to clear the screen):");
// scanf("%s",&helo[0]);
// if(helo[0]=='d')
//{
 delay(2000);
 system("cls");
// printf("I did it");
// return 0;
 }
//}
