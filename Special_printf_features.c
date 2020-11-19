#include <stdio.h>
#include <time.h>

time_t time_tt;
int lst_sec = 0, scan_sec = 0;

void delay_sec();
void init_sec_cnt();

void main(){
  printf("Type in seconds for delay:");
  while(scan_sec == 0)  scanf("%d", &scan_sec);
  system("cls");
  printf("Starting:");
  delay_sec(scan_sec);
}

void delay_sec(int sec){
  while(1){
    time(&time_tt);
    struct tm *local_time2 = localtime(&time_tt);

    if(local_time2->tm_sec != lst_sec){
      lst_sec = local_time2->tm_sec;
      sec--;
      if(sec == 0)  break;
    }
  }
}

void init_sec_cnt(){
  time(&time_tt);
  struct tm *local_time2 = localtime(&time_tt);
  lst_sec = local_time2->tm_sec;
}

