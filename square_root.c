#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

///*//////////////////////////////////////////////////////////////////////////////////////////////////////
void files();

char filepath[] = "E:\\MyWork\\FILESSSS\\";

///*//////////////////////////////////////////////////////////////////////////////////////////////////////
void main(){
    char answer = 'i', file_name[400];

    printf("\n\nDo you want to write in a file and create it?(y/n):");
    while(answer != 'y' || answer != 'Y'){
      scanf("%c", &answer);
      if(answer == 'n' || answer == 'N')  exit(0);
      else if(answer == 'y' || answer == 'Y')  break;
    }
    for(int i = 0; i < 400; i++)    file_name[i] = '0';
    printf("Type in a name for the file, please:");
    scanf("%s", file_name);
    files(&file_name);
}

///*//////////////////////////////////////////////////////////////////////////////////////////////////////
void files(char *filename){
    strcat(filename, ".txt");
    strcat(filepath, filename);

    FILE *myfile;
    myfile = fopen(filepath, "a");
    char s_t[] = "Howdy fella!...";
    fprintf(s_t, "%s", myfile);
    fclose(filepath);
}

///*//////////////////////////////////////////////////////////////////////////////////////////////////////
