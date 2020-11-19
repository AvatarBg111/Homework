#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#include<winuser.h>

#define Number_of_Options 2
#define Number_of_arrays 5
int static_click_flag = 0, dynamic_click_flag = 0, right_mouse_button = 0;
static int spacebar_click_flag = 0;

struct options{
  char options[Number_of_Options][400];
  int  NOPT;                                                                                                ///NUMBER OF OPTIONS///
}menu_options;

struct SSA{
  char arrays[Number_of_arrays][400];
}ssa;




void main(){
  int var_for_startup = 0;
  LPPOINT point;

  load_option_texts();
  spacebar();
  while(1){
    spacebar();
    static int x = 0, y = 0, flag_printf_again = 0, i = 0;

    GetCursorPos(point);
    system("cls");
    printf("x = %ld, y = %ld", point->x, point->y);

    for(i; i < 25; i++) printf("\n");
    i = 0;
    for(i; i < 6; i++) printf("\t");
    i = 0;
    printf("Special menu   ");

    if(dynamic_click_flag != !GetKeyState(VK_RBUTTON)){
      dynamic_click_flag = !GetKeyState(VK_RBUTTON);
      if(point->x < 433 && point->x > 345 && point->y < 415 && point->y > 400){
        if(right_mouse_button)  right_mouse_button = 0;
        else                    right_mouse_button = 1;
      }
    }


    if(point->x < 433 && point->x > 345 && point->y < 415 && point->y > 400){
      if(static_click_flag == 0 && right_mouse_button == 1)      {}
      else if(static_click_flag == 1 && right_mouse_button == 0) {}
      else goto skip;

      special_menu();
      if(static_click_flag)  static_click_flag = 0;
      else                   static_click_flag = 1;
    }


  skip:while(0){}
  }
}

void load_option_texts(){
  spacebar();
  for(int i = 0; i < Number_of_Options; i++){  for(int o = 0; o < 400; o++)  menu_options.options[i][o] = 0;}
  strcpy(menu_options.options[0], "show real time clock");
  strcpy(menu_options.options[1], "do some for loop prints of scanned char arrays");
  strcpy(menu_options.options[2], "read some scanned structure arrays");
  strcpy(menu_options.options[3], "do some prints of scanned structure arrays");
  strcpy(menu_options.options[4], "see details about special menu");
  menu_options.NOPT = Number_of_Options;
}

void special_menu(){
  int previous_line_index = 0, line_index = 2;

  while(1){
    spacebar();
    if(line_index != previous_line_index){
      system("cls");
      previous_line_index = line_index;
    }

    for(int i = 0; i < menu_options.NOPT; i++){                                                            ///PRINT SPECIAL MENU OPTIONS///
      if(i != line_index - 1)  printf("%s\n\n\n", menu_options.options[i]);
      else                     UPPER_printf(menu_options.options[i]);
    }
    printf("\n\n\tPress \"e\" to enter submenu");

    while(1){
      spacebar();
      switch(getch_input()){
        case 80:
          if(line_index < Number_of_Options)        line_index++;
          else if(line_index == Number_of_Options)  line_index = 1;
          break;
        case 72:
          if(line_index > 1)                        line_index--;
          else if(line_index == 1)                  line_index = Number_of_Options;
          break;
        case 101:
          switch(line_index){
            case 1:
             RTC();
             break;
            case 2:
             SM_Details();
             break;
          }
          break;
        default:
          system("cls");
          break;
      }
      break;
    }
  }
}

void RTC(){
  while(1){
    system("cls");
    printf("\t\t\t\tRTC menu");
    time_t get_time;
    time(&get_time);
    printf("\n\t\t\t\t%s", ctime(&get_time));
    printf("\nPress SPACE to exit submenu");
    if(spacebar()){
      system("cls");
      break;
    }
  }
}


void SM_Details(){
  while(1){
    system("cls");
    printf("\t\t\t\tSM_Details menu");
    printf("\nI dont like that some of my other subjects are interfering with my education in programming. Its awful!\n  I had some ideas for more submenus, but I decided not to add more.");
    printf("\nPress SPACE to exit submenu");
    if(spacebar()){
      system("cls");
      break;
    }
  }
}



void UPPER_printf(char op_array_elem[400]){
  char uppercased_array[400];
  for(int i = 0; i < 400; i++){
    if(!isalpha(op_array_elem[i])) uppercased_array[i] = op_array_elem[i];
    else  uppercased_array[i] = toupper(op_array_elem[i]);
  }
  printf("%s\n\n\n", uppercased_array);
  for(int i = 0; i < 400; i++)  uppercased_array[i] = 0;
  return;
}


int getch_input(){
  char input = 0;
  input = _getch();
  if(input == 101)  return input;
  input = _getch();
  return input;
}

int spacebar(){
    if(!GetKeyState(VK_SPACE) && spacebar_click_flag == 0){
      spacebar_click_flag = 1;
      return 1;
    }else if(GetKeyState(VK_SPACE) && spacebar_click_flag == 1){
      spacebar_click_flag = 0;
      return 1;
    }
    return 0;
}
