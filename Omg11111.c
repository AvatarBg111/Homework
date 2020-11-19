#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define jailbreak break;

char seachess[3][3];
char pmove;

int main(){
printf("Print X, or O(o not 0)\n");
printf("BE SURE YOU'RE WITH CAPS LOCK\n");
printf("First player:\n");
for(int i=0;i<2;i++){
 for(int j=0;j<2;j++){
   scanf("%c",&pmove);
   seachess[i][j]=pmove;
  }
 }
for(int p=0;p<2;p++){
 for(int q=0;q<2;q++){
  if(q=2){
   printf("%c",seachess[p][q]);

  }
 }
}
