/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>

int main(){
    float a, b, h;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);

    printf("square area=%f", (a * a));
    printf("rectangle area=%f", (a * b));
    printf("triangle area=%f", (0.5 * a * h));
    printf("trapezoid area=%f", ((0.5 * (a + b)) * h));
    return 0;
}