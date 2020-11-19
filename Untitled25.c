#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define jailbreak break;

char seachess[3];
char pmove;

int main(){
for(int i=0;i<2;i++){
 printf("%d character:",i);
 pmove=getchar();
 seachess[i]=pmove;
 break;
 }
for(int j=0;j<2;j++){
  printf("%s",seachess[j]);
  break;
 }
printf("next one");
 pmove='\0';
printf("pmove:%c",pmove);
 return 0;
}
