/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>

int main(){
    double x, y;

    scanf("%lf", &x);
    scanf("%lf", &y);

    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    printf("The address of ptr_one is %p", ptr_one);
    printf("The address of ptr_two is %p", ptr_two);
    printf("The address of ptr_three is %p", ptr_three);



    return 0;
}