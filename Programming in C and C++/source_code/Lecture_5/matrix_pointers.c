#include <stdio.h>
#define ROW 2
#define COL 3
int main () {
    int arr[ROW][COL] = {{1, 2, 3}, {11, 12, 13}};
    int i = 1;
    int j = 2;
    int *p = (int *)arr;
    //int *p = arr;
    // needs explicit cast
    printf("Address of [1][2]: %p\n", &arr[1][2]);
    printf("Address of [1][2]: %p\n", p + (i * COL + j));
    printf("Value of [1][2]: %d\n", arr[1][2]);
    printf("Value of [1][2]: %d\n", *(p + ( i * COL + j)));
    printf("\n");
    printf("Address of [0][0]: %p\n", p + (0 * COL + 0));
    printf("Address of [0][1]: %p\n", p + (0 * COL + 1));
    printf("Address of [0][2]: %p\n", p + (0 * COL + 2));
    printf("Address of [1][0]: %p\n", p + (1 * COL + 0));
    printf("Address of [1][1]: %p\n", p + (1 * COL + 1));
    printf("Address of [1][2]: %p\n", p + (1 * COL + 2));
    printf("\n");
    printf("Content of [0][0]: %d\n", *(p + (0 * COL + 0)));
    printf("Content of [0][1]: %d\n", *(p + (0 * COL + 1)));
    printf("Content of [0][2]: %d\n", *(p + (0 * COL + 2)));
    printf("Content of [1][0]: %d\n", *(p + (1 * COL + 0)));
    printf("Content of [1][1]: %d\n", *(p + (1 * COL + 1)));
    printf("Content of [1][2]: %d\n", *(p + (1 * COL + 2)));
    return 0;
}
