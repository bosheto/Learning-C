
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define R 3
#define C 6
int change_value(int *input);

void cleanup_pointer(void **p);

void check_pointer(void *p);

int main(void){

    int **two_d_arr;

    two_d_arr = malloc(sizeof(int *) * R);
    check_pointer((void *) two_d_arr);

    for(int i = 0; i < R; i++){
        two_d_arr[i] = malloc(sizeof(int) * C);
    }

    for(int r = 0; r < R; r++){
        for(int c = 0; c < C; c++){
            two_d_arr[r][c] = r * c;
        }
    }
    
    for(int r = 0; r < R; r++){
        for(int c = 0; c < C; c++){
            printf("%d ", two_d_arr[r][c]);
        }
        printf("\n");
    }

    cleanup_pointer((void**)&two_d_arr);

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