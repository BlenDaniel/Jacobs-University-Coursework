/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/


#include <stdio.h>

int main() {
    /* The result of the division */
    float result; 
    int a = 5;
    /* B is a float and not an int */
    float b = 13.5;
    result = a / b;
    /*
        %f is used to print a float number and not an integer and since division is 
        by a float denominator will result in the actual result in being a float then, 
        the result is a float and not an int
    */
    printf("The result is %f\n", result);
    return 0;

}