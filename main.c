
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cleanup_pointer(void **p);

void check_pointer(void *p);

int main(void){
    int size;
    char str[64];
    char *new_str = NULL;

    strcpy(str, "Hello");
    size = strlen(str);

    new_str = malloc(sizeof(char) * (size+1));
    check_pointer((void*) new_str);

    strcpy(new_str, str);

    printf("%s %s\n", str, new_str);
    strcat(str, " There");

    printf("%s\n", str);

    cleanup_pointer((void**)&new_str);

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