/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    double d1;
    double d2;


    scanf("%lf", &d1);
    scanf("%lf", &d2);

    printf("sum of doubles=%lf", d2 + d1);
    printf("difference of doubles=%lf", d1 - d2);
    printf("square=%lf", d1 * d1);

    int i1;
    int i2;


    scanf("sum of integers=%d", &i1);
    scanf("product of integers=%d", &i2);

    int sumI = i1 + i2;
    int proI = i1 + i2;

    printf("sum of chars=%d", sumI);
    printf("product of chars=%d", proI);


    char c1 = getchar();
    char c2 = getchar();
    
    int sumC = c1 + c2;
    int proC = c1 + c2;

    printf("sum of chars=%d", sumC);
    printf("product of chars=%d", proC);

    return 0;
}