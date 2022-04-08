/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SWAP(A, B, T){ T help = A; A = B; B = help;}

int main(){

    int i, j;    
    double k, z;
    /*
        Prompt the user to enter a number
        Save it in the defined variable
    */
    scanf("%d", &i);
    scanf("%d", &j);
    /*
        Prompt the user to enter a doubles
        Save it in the defined variable
    */
    scanf("%lf", &k);
    scanf("%lf", &z);

    /* Calling the SWAP macro with the inputted values */
    SWAP(i, j, int);
    SWAP(k, z, double);

    /* Printing the new values */
    printf("After swapping:\n");
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%lf\n", k);
    printf("%lf\n", z);

}