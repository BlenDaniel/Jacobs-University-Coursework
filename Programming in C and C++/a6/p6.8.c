#include <stdio.h>
#include <stdlib.h>

/* Defining list struct */
struct list {
    int value;
    struct list *pointer; /* Self reference */
};
 

/* To remove the first element of the list */ 
struct list *remove_element(struct list *my_list) {
    
    if (my_list == NULL) {
        return my_list;
    }
    /* remoing the value and setting the pointer to point to the next element */
    my_list -> value = 0;

    return my_list -> pointer; 
}
 
/* To an element at the start of the list */ 
struct list *push_front(struct list * my_list, int value) {
    struct list *newel;

    /* Constructing a new element */
    newel = (struct list *)malloc(sizeof(struct list));

    /* Check if allocation was successful */
    if (newel == NULL) {
        printf(" Error allocating memory \n");
        return my_list;
    }

    /* Adding the struct to the first position */
    newel -> value = value;
    newel -> pointer = my_list;
    return newel;
}
 
/* To add */
struct list *push_back(struct list *my_list, int value) {
    struct list *cursor, *newel;

    /* Saving my_list for later use */
    cursor = my_list;

    /* Constructing a new element */
    newel = (struct list *)malloc(sizeof(struct list));

    /* Check if allocation was successful */
    if (newel == NULL) {
        printf(" Error allocating memory \n");
        return my_list;
    }

    /* Setting the values of newel */
    newel -> value = value;
    newel -> pointer = NULL;

    /* If my_list was empty, returing newel */
    if (my_list == NULL)
        return newel;

    /* changing the cursors pointer */
    while (cursor -> pointer != NULL) {
        cursor = cursor -> pointer;
    }

    /* making the cursor's pointer to the newel struct list */
    cursor -> pointer = newel;

    return my_list;
}
 
/* Printing the value of the struct list */
void print_list (struct list * my_list) {
    struct list *p;
    /* Until p is NULL print*/
    for (p = my_list; p != NULL; p = p->pointer) {
        printf("%d ", p -> value);
    }
    printf("\n");
}
 
/* Freeing the struct*/
void freelist(struct list *my_list)
{
    struct list *nextelement;
    while (my_list != NULL)
    {
        nextelement = my_list -> pointer;
        free(my_list);
        my_list = nextelement;
    }
}
 
int main() {
    /* Defining the variables */
    char c;
    int a, b;
    struct list *linkedlist = NULL;

    /* Prompting user to input choices */
    do {
        scanf("%c",&c);
        switch (c) {
            case 'a':
                scanf("%d",&a);
                linkedlist = push_back(linkedlist,a);
                break;
            case 'b':
                scanf("%d",&b);
                linkedlist = push_front(linkedlist,b);
                break;
            case 'r':
                linkedlist = remove_element(linkedlist);
                break;
            case 'p':
                print_list(linkedlist);
                break;
            case 'q':
                freelist(linkedlist);
            default:
                break;
        }
    /* Until user inputs q, the loop will not break */
    } while (c !='q');    

    return 0;
}
