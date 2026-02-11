
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int change_value(int *input);

void cleanup_pointer(void **p);

void check_pointer(void *p);

int main(void){

    int *arr;
    int s_arr[20];

    arr = malloc(sizeof(int) * 20);
    check_pointer((void*) arr);
    
    for(int i=0; i < 20; i++){
        s_arr[i] = i;
        arr[i] = i;
    }

    printf("%d %d \n", s_arr[3], arr[3]);
    cleanup_pointer((void**) &arr);
    return 0;
} 

int change_value(int *input){
    int val;
    val = *input;

    if (val < 100){
        *input = 100;
    }else{
        *input = val * 2;
    }
    return val;
}

void cleanup_pointer(void **p){
    free(*p);
    *p = NULL;
}

void check_pointer(void *p){
	if(p == NULL){
		printf("Pointer is NULL!\n");
		exit(1);
	}
}