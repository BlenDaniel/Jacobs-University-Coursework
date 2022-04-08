/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include "stack.h"

/* Pushing elements in the list */
Stack* push(Stack *my_stack, int value){
    printf("Pushing ");

    /* Checking if the list is already full */
    if(my_stack -> count == 12){
        printf("Stack Overflow\n");
        return my_stack;
    }

    /* Adding the new value */
    int index = my_stack -> count; 
    /* Assigning the new value to the next empty index in the list */
    my_stack -> array[index] = value;
    /* Incrementing the count of the elements in the stack */
    my_stack -> count++;
    /* Printing After adding */
    printf("%d\n", value);
    return my_stack;
}

/* Popping elements in the stack */
Stack* pop(Stack * my_stack){
    printf("Popping ");

    /* Checking if the list is already Empty */
    if (my_stack->count == 0) {
        printf("Stack Underflow\n");
        return my_stack;
    }
    /* Getting the last index of the stack */
    int index = my_stack -> count-1; 
    printf("%d\n", (my_stack -> array[index]));
    my_stack -> array[index] = 0;
    /* Decrementing the size of the list */
    my_stack -> count = index--;
    return my_stack;
}


/* empty */
void empty(Stack *my_stack){
    /* Checking if the list is already Empty */
    if (my_stack-> count == 0) {
        printf("Stack Underflow\n");
    }
    printf("Emptying Stack ");
    for(int i = 0; my_stack -> count != 0; i++) {
        int index = my_stack -> count - 1; 
        printf("%d ", my_stack->array[index]);
        my_stack->count--;
    }     
    printf("\n");
}

/* Printing if the Stack was already empty or not */
int isEmpy(Stack *my_stack){
    if (my_stack->count == 0)
        return 1;
    return 0;
}

