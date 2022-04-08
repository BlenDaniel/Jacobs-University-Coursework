/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Macro for getting the least significant bit of a character*/
#define LEAST_SIGNIFICANT_BIT(value) { \
    if (value & 1) { \
        value = 1; \
    } else { \
        value = 0; \
    } \
}

int main(){
    /* Getting the character */
    unsigned char value;
    scanf("%c", &value);

    /* Printing the decimal representation of the character */        
    printf("The decimal representation is: %d\n", value);

    /* Printing the least significant bit of the character */
    LEAST_SIGNIFICANT_BIT(value);
    printf("The least significant bit is: %d\n", value);
    return 0;
}