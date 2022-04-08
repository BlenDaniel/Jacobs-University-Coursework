#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_ELEMENTS 50

int my_compare_int(const void * va, const void * vb) {
    const int *a = va;
    const int *b = (const int *)vb;
    if (*a < *b) return -1;
    else if (*a > *b) return 1;
    else return 0;
}

int main () {
    srand(time(NULL)) ; // initialize random number generator
    int arr[NUM_ELEMENTS];
    int i;
    /* fill array with random numbers */
    for(i = 0; i < NUM_ELEMENTS; i++)
        arr[i] = rand() % 1000;
    qsort(arr, NUM_ELEMENTS, sizeof(int), my_compare_int);
    for(i = 0; i < NUM_ELEMENTS; i++)
        printf("%d\n", arr[i]);
    return 0;
}
