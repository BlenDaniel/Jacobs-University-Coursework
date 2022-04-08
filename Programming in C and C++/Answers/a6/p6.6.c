/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intToBinary(int n){
    /* For eight bits, I will assign the value of binary to 2 */
    int binary = 2;

    /* Size of bits is 8 */
    int nbits = sizeof(int) * binary - 1;

    /*
        First I will assign nbits value to i. Then until --i reaches zero, I will 
        shift 1 to the i position and using bitwise operation '&' I will set 1 or 0 
        to the bits that are on and off.
    */
    for (int i = nbits; i >= 0; --i) 
    {
        /* I will print the values according to the condition */
        if (n & (1 << i)) {
            printf("%d", 1);
        } else {
            printf("%d", 0);
        }        
    }  
    
}

int main(){
    /* Getting the character */
    unsigned char value;
    scanf("%c", &value);    
    getchar();

    /* Printing the decimal representation */
    printf("The decimal representation is: %d\n", value);

    /* Calling my method to print the binary represenation */
    printf("The binary representation is: ");
    intToBinary(value);
    
    printf("\n");
    return 0;
}