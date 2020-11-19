///INCLUDED FILES///
#include<stdio.h>
#include<stdlib.h>

///VARIABLES///
char Fstr[] = "Brother...BROTHER...", *Fsptr = &Fstr;
char Sstr[] = "My brother is dead!...", *Ssptr = &Sstr;

///FUNCTIONS///
void _strcpy(char *ptr0, char *ptr1);
void _strcat(char *ptr0, char *ptr1);
void init_ptr(char *ptr, char *_string);
int _strlen(char *_string);
int _strchar(char *_string, char wanted_char);
int _strrchar(char *_string, char wanted_char);

/////////////////////////////////////////////////////////////////////////////////////////////////////////
void main(){
    char *ptr;
    ptr = calloc(_strlen(Fsptr), sizeof(char));
    init_ptr(ptr, Fsptr);
///Call some function with appropriate parameters
///Example: _strcpy(ptr, Ssptr);
///printf("This is the second string copied into the first one: %s", ptr);
    free(ptr);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
void init_ptr(char *ptr, char *_string){
   for(int i = 0; i < _strlen(_string); i++)  ptr[i] = _string[i];
   ptr[_strlen(_string)] = '\0';
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
int _strlen(char *_string){
    int i = 0;
    for(i; _string[i] != '\0'; i++){}
    return i;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
int _strchar(char *_string, char wanted_char){
    int i = 0;
    for(i; _string[i] != wanted_char; i++){}
    return i + 1;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
int _strrchar(char *_string, char wanted_char){
    int i = 0, index_wanted_char = 0;
    for(i; i < _strlen(_string); i++)
    if(_string[i] == wanted_char)  index_wanted_char = i;
    return index_wanted_char + 1;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
void _strcpy(char *ptr0, char *ptr1){
    realloc(ptr0, _strlen(ptr1));
    for(int i = 0; i < _strlen(ptr1); i++)  ptr0[i] = ptr1[i];
    ptr0[_strlen(ptr1)] = '\0';
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
void _strcat(char *ptr0, char *ptr1){
    int ptr0_len = _strlen(ptr0);
    int ptr1_len = _strlen(ptr1);
    char ptr0_str[_strlen(ptr0)];
    _strcpy(&ptr0_str, ptr0);

    realloc(ptr0, _strlen(ptr1) + _strlen(ptr0));
    for(int i = 0; i < ptr0_len; i++)  ptr0[i] = ptr0_str[i];
    for(int i = 0; i < ptr1_len; i++)  ptr0[i + ptr0_len] = ptr1[i];
    ptr0[ptr0_len + ptr1_len] = '\0';
}
