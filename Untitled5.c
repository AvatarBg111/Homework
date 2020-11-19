#include<stdio.h>
#include<stdlib.h>

void main()
{

char hello;
int a[2];
char seachess[3][3];
for(int h=0;h<2;h++){
 scanf("%d",&a[h]);
}
 scanf("%c",&hello);
 seachess[a[0]][a[1]]=hello;
}
