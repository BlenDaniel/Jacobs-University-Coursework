/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIMIT 100 


int main(){
    
    /* variable declaration
       readinput is a method to get string from user */
    char first[LIMIT];
    char second[LIMIT];

    char *conc;

    fgets(first, sizeof(first), stdin);
    fgets(second, sizeof(second), stdin);

    first[strlen(first) - 1] = '\0';
    second[strlen(second) - 1] = '\0';

    conc = (char *)malloc( 1 + sizeof(first) + sizeof(second));

    strcpy(conc, first);
    strcat(conc, second);

    /* Printing result */
    printf("Result of concatenation: %s", conc);
    printf("\n");

    free(first);
    free(second);
    return 0;
}