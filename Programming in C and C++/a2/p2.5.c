/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int a;
    scanf("%d", &a);

    printf("The number is %d", a);
    int *ptr_a;
    ptr_a = &a;


    printf("The address is %p", ptr_a);
    printf("The value is %d", *ptr_a);
    
    *ptr_a = *ptr_a + 5;
    printf("The address is %p", ptr_a);
    printf("The value is %d", *ptr_a);
    return 0;
}