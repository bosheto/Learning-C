
#include <stdio.h>
#include <string.h>

void print_array(int arr[], int size);

void modify_array(int arr[], int size);

int main(void){
    char str1[10];
    char str2[10];
    int len;

    str1[0] = 'h';
    str1[1] = 'i';
    str1[2] = '\0';
    
    len = strlen(str1);

    printf("%s %d\n", str1, len);

    strcpy(str2, str1);
    printf("%s\n", str2);

    strcpy(str2, "hello");
    len = strlen(str2);

    printf("%s %d\n", str2, len);

    return 0;
} 

void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }
}

void modify_array(int arr[], int size){

}