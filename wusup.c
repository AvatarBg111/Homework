#include<stdio.h>
#include<stdlib.h>

void main()
{
 int b=1;
 int a[2];
 char chur;
 char seachess[3][3];

 for(int p=0;p<3;p++)
 {
  for(int o=0;o<3;o++)
  {
   seachess[p][o]='0';
  }
 }
 printf("Print only numbers\n");

 neshto:

 scanf("%d",&a[0]);
 scanf("%d",&a[1]);
 printf(" Sign:");
 doit:
 scanf("%c",&chur);
 if(b>0)
{
 b--;
 goto doit;
}

 seachess[a[0]][a[1]]=chur;

for(int y=0;y<3;y++)
{

 for(int x=0;x<3;x++)
 {
  printf("%c",seachess[y][x]);
  if(x<2)
  {
  printf("|");
  }
 }

 if(y<2)
 {
 printf("\n");
 printf("-----");
 }
 printf("\n");
}


 b++;
 printf("\n\n\n");
 goto neshto;
}
