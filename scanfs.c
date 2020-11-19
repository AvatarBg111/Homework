#include<stdio.h>
#include<stdlib.h>



int main()
{
 int a[2];
 char seachess[3][3];
 char hello;
 printf("Print only numbers\n");

 neshto:

for(int h=0;h<2;h++){
 scanf("%d",&a[h]);
}
 scanf("%c",&hello);
 seachess[a[0]][a[1]]=hello;


for(int y=0;y<2;y++)
{
 for(int x=0;x<2;x++)
 {
  printf("%c",seachess[y][x]);
 }
 printf("\n");
}

for(int g=0;g<1;g++)
{
 a[g]=0;
}

goto neshto;
}
