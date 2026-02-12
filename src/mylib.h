#ifndef _MYLIB_H
#define _MYLIB_H

#define MAX_FOO 20

struct foo_struct {
    int x;
    float y;
};

extern int total_time;

/*
    Get the larger of two floats
*/
extern float bigger(float y, float z);

#endif

