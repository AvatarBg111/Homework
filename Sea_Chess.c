#include<stdio.h>
#include<stdlib.h>

void main()
{
 int a;
 char chur=0;
 char seachess[9];
 printf("Print only numbers\n");
 for(int h=0;h<sizeof(seachess);h++)
 {
  seachess[h]=' ';
 }
 neshto:
 for(int i=0;i<sizeof(seachess);i++)
 {
  if(i==2 || i==5 || i==8)
  {
   if(i==8)
   {
    printf("%c\n",seachess[i]);
   }else{
   printf("%c\n-----\n",seachess[i]);
   }
  }else{
   printf("%c|",seachess[i]);
  }
 }
 printf("Place:");
 scanf("%d",&a);
 if(chur==0)
 {
  chur++;
  seachess[a-1]='X';
 }else{
  chur--;
  seachess[a-1]='O';
 }

 for(int y=0;y<sizeof(seachess)/4;y++)
 {
  if(y==2 || y==5 || y==8)
  {
   if(y==8)
   {
    printf("%c\n",seachess[y]);
   }else{
   printf("%c\n-----\n",seachess[y]);
   }
  }else{
   printf("%c|",seachess[y]);
  }
 }
 system("cls");
 goto neshto;
}
