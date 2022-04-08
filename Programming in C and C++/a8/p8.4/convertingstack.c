/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"


int main(){

    /* Creating my variables for the int */
    unsigned int temp;
    scanf("%d",&temp);
    print_binary(temp);
    
    /* frees the memory allocated for the stack */
    //free(temp);
    return 0;       
}