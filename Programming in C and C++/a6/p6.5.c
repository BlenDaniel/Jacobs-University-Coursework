/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* Getting the character */
    unsigned char value;
    int binary = 0;
    scanf("%c", &value);    
    getchar();

    /* Printing the decimal representation of the character */        
    printf("The decimal representation is: %d\n", value);

    /* Counting the significant bits */
    for (binary = 0; ( 1 << binary) <= value; binary++ ){ }     
    /* until binary code matches c */

    /* Since we know the size */
    printf("The backwards binary representation is: ");
    for (int i = 0; i < binary; i++){   
        /* 1s and 0s are shifted to right */
        printf("%d", ((value >> i) & 1));  
    }

    printf("\n");
    return 0;
}