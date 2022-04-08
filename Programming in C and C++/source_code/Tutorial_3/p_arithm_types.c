#include <stdio.h>
#include <stdlib.h>
int main () {
    char ch_arr[2] = {'A', 'B'};
    char * ch_ptr;
    float f_arr[2] = {1.1, 2.2};
    float * f_ptr;
    ch_ptr = &ch_arr[0];
    printf("%p\n", ch_ptr);
    ch_ptr++;
    printf("%p\n", ch_ptr);
    printf("%c\n", *ch_ptr);
    f_ptr = f_arr;
    f_ptr = &f_arr[0];
    printf("%p\n", f_ptr);
    f_ptr ++;
    printf("%p\n", f_ptr);
    printf("%f\n", *f_ptr);
    return 0;
}