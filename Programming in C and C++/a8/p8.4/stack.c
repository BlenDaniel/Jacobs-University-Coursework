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
    my_stack -> array[index] = value;
    my_stack -> count++;
    printf("%d\n", value);
    return my_stack;
}


void print_binary(unsigned int value){
    int result;
    Stack* my_stack = (Stack*) malloc(sizeof(Stack));
    /* Checking if the allocation worked */
    if (my_stack == NULL) {
        printf("Error allocation memory");
    }
    /* Initialzing the stack count to be 0 */
    my_stack -> count = 0;
    result = (int) value;

    while (result != 0)
    {
        my_stack = push(my_stack, result % 2);
        result = result / 2;
    }

    printf("The binary representation of %d is ", (int) value);

    for(int i = my_stack -> count; i > 0; i--){
        printf("%d", my_stack -> array[i-1]);
    }
    printf("\n");  
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

