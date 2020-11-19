#include <stdio.h>

void strcat(char arr1[], char arr2[], char arr3[]);
int strchr(char arr[], char c);
int strrchr(char arr[], char c);
int strlen(char arr[]);

int main() {
    char arr[] = "This is a string!";
    char arr2[] = " This is a second string";
    char arr3[strlen(arr) + strlen(arr2)];
    for(int i = 0; i < strlen(arr) + strlen(arr2); i ++)  arr3[i] = 0;

    printf("Len: %d\n", strlen(arr));

    printf("Position: %d\n", strchr(arr, 'T'));

    strcat(&arr, &arr2, &arr3);
    printf("Strcat: %s", arr3);

    return 0;
}

int strchr(char arr[], char c) {
    char cc;
    int i = 0;
    while((cc = arr[i]) != '\0') {
        if (cc == c) {
            return i;
        }
        ++i;
    }

    return i;
}
int strrchr(char arr[], char c){
    int len = strlen(arr);
    int pos = -1;

    for (int i = len - 1; i >= 0; ++i) {
        if (arr[i] == c) {
            pos = i;
        }
    }

    return pos;
}
int strlen(char arr[]){
    int i;

    for(i = 0; arr[i + 1] != '\0'; i++);

    return i + 1;
}
void strcat(char *arr1, char *arr2, char *arr3){
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    int i;

    for(i = 0; i < len1; ++i)      arr3[i] = arr1[i];
    for(int j = 0; j < len2; ++j)  arr3[i++] = arr2[j];
    arr3[i] = '\0';
}
