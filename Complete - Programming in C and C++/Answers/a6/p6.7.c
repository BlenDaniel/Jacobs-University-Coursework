/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


const int maxbit = sizeof(int) * 2 - 1;
char str[sizeof(int) * 2 + 1];

char* itobin(int n, char *binstr){
    int i;
    for (i = 0; i <= maxbit; i++) {
        if(n & (1 << i)) {
            binstr[maxbit - i] = '1';
        }else{
            binstr[maxbit - i] = '0';
        }
    }
    binstr [maxbit + i] = '0';
    return binstr;
}

unsigned char* set3bits (int pos1, int pos2, int pos3, unsigned char binstr) {


    /* Getting the binary position number */
    pos1 = pow(2, pos1);
    pos2 = pow(2, pos2);
    pos3 = pow(2, pos3);

    /* Bitmarking it with the OR operator to set the values at the specific bit to one */
    binstr |= pos1;
    binstr |= pos2;
    binstr |= pos3;

    return &binstr;
}

int main() {
    unsigned char value;
    
    scanf ("%c", &value);

    /* Prompting user to enter the position of the arrays to change to 1 */
    int first, second, third;
    scanf ("%d", &first);
    scanf ("%d", &second);
    scanf ("%d", &third);

    /* Printing the decimal representation */
    printf("The decimal representation is: %d\n", value);

    /* Print the binary represenation */
    printf ("The binary representation is: %s\n", itobin(value, str));

    /* After setting the bits we print the result */ 
    printf("After setting the bits: %c\n", set3bits(first, second, third, value));

    return 0;
}