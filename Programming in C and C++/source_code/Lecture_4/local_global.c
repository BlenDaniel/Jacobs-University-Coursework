#include <stdio.h>

// global variable
int x = 7;

void xlocal(int y) {
    int x;
    x = y * y;
    printf("xlocal: %d\n", x);
    return;
}

void xglobal(int y) {
    x = y * x;
    printf("xglobal: %d\n", x);
    return;
}

int main () {
    //int x;
    // try to explain if
    // commented out
    x = 8;
    printf("main: %d\n", x);
    xlocal(x);
    printf("main: %d\n", x);
    xglobal(x);
    printf("main: %d\n", x);
    return 0;
}