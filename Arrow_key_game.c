#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int arrow_input(), X = 0, Y = 0;

#define MIN_X  0
#define MAX_X  120
#define MIN_Y  0
#define MAX_Y  29





void main(){
  while(1){
    if(arrow_input() == 4){       if(X > MIN_X)  X--;}
    else if(arrow_input() == 3){  if(Y > MIN_Y)  Y--;}
    else if(arrow_input() == 2){  if(X < MAX_X)  X++;}
    else if(arrow_input() == 1){  if(Y < MAX_Y)  Y++;}

    system("cls");

    for(int y = Y; y > 0; y--)  printf("\n");
    for(int x = X - 1; x > 0; x--)  printf(" ");
    printf("^");
  }
}

int arrow_input(){
getch_again:
  _getch();
  char arrow_input = _getch();
  switch(arrow_input){
    case 75:
      return 4;
    case 72:
      return 3;
    case 77:
      return 2;
    case 80:
      return 1;
    default:
      goto getch_again;
  }
}
