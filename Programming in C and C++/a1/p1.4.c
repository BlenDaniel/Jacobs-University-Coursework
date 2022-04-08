/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/


#include <stdio.h>

int main() {
    /* The result of the division */
    int x = 17; 
    int y = 4;

    int sum = x + y;
    int product = x * y;
    int difference = x - y;
    float division = (float) x / y;
    int remainder = x % y;

    printf("x=%d\ny=%d\n", x, y);
    printf("sum=%d\n", sum);
    printf("product=%d\n", product);
    printf("difference=%d\n", difference);
    printf("division=%f\n", division);
    printf("remainder of division=%d\n", remainder);
    return 0;

}