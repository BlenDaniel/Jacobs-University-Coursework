/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#ifndef STACK
#define STACK

/* List with a value variable and a value pointer */
struct stack {
    unsigned int count;
    int array[12]; // Container
};

/* To make life simpler */
typedef struct stack Stack;

/* function prototypes */

/* Push */
Stack *push(Stack *my_stack, int value);
/* Pop */
Stack *pop(Stack *my_stack);
/* empty */
void empty(Stack *my_stack);
/* isEmpty */
int isEmpy(Stack *my_stack);
/* Printing Binary */
void print_binary(unsigned int value);

#endif

