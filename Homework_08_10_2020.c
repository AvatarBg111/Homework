#include<stdio.h>
/////////////////////////////////////////
int _strlen();
int _strchr(char *str, char character);
int _strrchr(char *str, char character);
char _strcpy();
char _strcat();

/////////////////////////////////////////
void main(){
    static char _string1[5] = "hello", _string2[5] = "fdfhg", _cat_string[10], *ptr1 = &_string1, *ptr2 = &_string2, *ptr3 = &_cat_string;
    _strcat(ptr1, ptr2, ptr3);
    printf("%s", _cat_string);
}

int _strlen(char *pointer){
    int string_length = 0;
    for(string_length; pointer[string_length] != 0; string_length++){}
    return string_length;
}

char _strcpy(char *str1, char *str2){
    for(int i = 0; i < 5; i++) str1[i] = str2[i];
}

char _strcat(char *str1, char *str2, char *str3){
    for(int i = 0; i < 5; i++) str3[i] = str1[i];
    for(int i = 5; i < 9; i++) str3[i] = str2[i - 5];
}

int _strchr(char *str, char character){
    int i = 0, flag = 1;
    for(i; i < _strlen(str) && str[i] != character; i++){
        if(i == _strlen(str))  flag = 0;
    }
    if(flag == 0)  return  -1;
    else  return i + 1;
}

int _strrchr(char *str, char character){
    int cnt = 0, flag = 0;
    for(int i = 0; i < _strlen(str); i++)  if(str[i] == character){
        cnt = i;
        flag = 1;
    }
    if(flag == 0)  return  -1;
    else  return cnt + 1;
}

