#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "src/mylib.h"

#define N 10
#define M 20

void cleanup_pointer(void **p);

void check_pointer(void *p);

int main(void){

    float x, y, ret;
    x = 1.0;
    y = 2.0;
    ret = bigger(x,y);
    printf("%g \n", ret);
    return 0;
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