#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>

int main(){
  printf("hello");
  int gd = DETECT, gm;
  initgraph(&gd, &gm, (char*)("C:\\TC\\BGI"));
  initwindow(1000, 1000);
  rectangle(30, 30, 100, 100);
  closegraph();
  return 0;
}
