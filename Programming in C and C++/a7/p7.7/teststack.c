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
    /* Creating my variables for the char, int and stack and initializing the stack */
    char value;
    int check, data;

    Stack* my_stack = (Stack*) malloc(sizeof(Stack));
    /* Checking if the allocation worked */
    if (my_stack == NULL) {
        printf("Error allocation memory");
        return 1;
    }

    /* Initialzing the stack count to be 0 */
    my_stack->count = 0;

    /* Prompting user to enter choice of which function they want to execute */
    do {
        scanf("%c", &value);
        switch (value) {
            case 's':
                /*For adding elements to the stack LIFO style */
                scanf("%d", &data);
                my_stack = push(my_stack, data);
                break;
            case 'p':
                /* For removing elements */
                my_stack = pop(my_stack);
                break;
            case 'e':
                /* For emptying the list */
                empty(my_stack);
                break;
            case 'i':
                /* Checking if the list is empty or not */
                check = isEmpy(my_stack);
                if(check == 0){
                    printf("Stack not Empty.\n");
                }else{
                    printf("Stack is Empty.\n");
                }
                break;
            case 'q':
                /* Quiting the program */
                printf("Quit\n");
                break;
        default:
            break;
        } 
    } while (value != 'q');

    // frees the memory allocated for the stack
    free(my_stack);
    return 0;       
}