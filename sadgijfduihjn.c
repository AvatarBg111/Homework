#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>

void main(){
  printf("hello");
  int gd = DETECT, gm;
  initgraph(&gd, &gm, "C:\\TC\\BGI");
  initwindow(1000, 1000);
  rectangle(30, 30, 100, 100);
  closegraph();
  return;
}
