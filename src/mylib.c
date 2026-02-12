#include <stdlib.h>

#include "mylib.h"

int total_time = 0;
float bigger(float y, float z){
    total_time++;

    if (y>z){
        return y;
    }
    return z;
}