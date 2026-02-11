
#include <stdio.h>
#include <string.h>

int change_value(int *input);

int main(void){
    
    int x = 101;
    int y = change_value(&x);

    printf("x = %d | y = %d\n", x, y);

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