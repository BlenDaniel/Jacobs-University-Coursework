/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/


#include <stdio.h>

int main() {
    /* The result of our calculation */
    int result; 
    result = (2 + 7) * 9 / 3;
    /* 
        The error happens because result was not called in the print function. The %d needs to actually take
        a variable with an integer value or just an integer.
    */
    printf("The result is %d\n", result);
    return 0;
}