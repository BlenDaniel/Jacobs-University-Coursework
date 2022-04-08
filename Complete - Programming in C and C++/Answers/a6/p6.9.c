/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Defining list struct */
struct list {
    int data;
    struct list *ptr; /* Self reference */
};
 

/* To remove the first element of the list */ 
struct list *remove_element(struct list *my_list) {
    
    if (my_list == NULL) {
        return my_list;
    }
    /* remoing the data and setting the pointer to point to the next element */
    my_list -> data = 0;

    return my_list -> ptr; 
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
    newel -> data = value;
    newel -> ptr = my_list;
    return newel;
}

struct list *insert_element(struct list *my_list, int pos, int value){
    /* Checking if pos is not negative */
    if(pos < 0) {
        printf("Invalid position\n");
        return my_list;
    }

    struct list *cursor, *storage, *result_list;

    /* Constructing a new element */
    result_list = (struct list *)malloc(sizeof(struct list));

    
    /* Check if allocation was successful */
    if (result_list == NULL) {
        printf(" Error allocating memory \n");
        return my_list;
    }

    /* If the position is 0, then adding it to the front */
    if (pos == 0){
        result_list -> data = value;
        result_list -> ptr = result_list;
    }

    
    cursor = my_list;


    for (int i = 0; i < pos - 1; i++) {
        if(cursor->ptr == NULL){
            printf("Invalid position\n");
            return my_list;
        }else{
        cursor = cursor -> ptr;
        }
    }

    /* Adding the new element */

    storage = cursor -> ptr;    
    result_list -> data = value;
    result_list -> ptr = storage;
    cursor -> ptr = result_list;


    return my_list;


}

struct list *reverse(struct list *my_list){
    struct list *cursor;
    struct list *reversed_List = NULL;

    /* Constructing a new element */
    cursor = (struct list *)malloc(sizeof(struct list));

    /* Check if allocation was successful */
    if (cursor == NULL) {
        printf(" Error allocating memory \n");
        return my_list;
    }

    for(cursor = my_list; cursor != NULL; cursor = cursor -> ptr){
        reversed_List = push_front(reversed_List, cursor -> data);
    }

    return reversed_List;

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
    newel -> data = value;
    newel -> ptr = NULL;

    /* If my_list was empty, returing newel */
    if (my_list == NULL)
        return newel;

    /* changing the cursors ptr */
    while (cursor->ptr != NULL) {
        cursor = cursor -> ptr;
    }

    /* making the cursor's ptr to the newel struct list */
    cursor -> ptr = newel;

    return my_list;
}
 
/* Printing the data of the struct list */
void print_list (struct list * my_list) {
    struct list *p;
    /* Until p is NULL print*/
    for (p = my_list; p != NULL; p = p->ptr) {
        printf("%d ", p -> data);
    }
    printf("\n");
}
 
/* Freeing the struct*/
void freelist(struct list *my_list)
{
    struct list *nextelement;
    while (my_list != NULL)
    {
        nextelement = my_list -> ptr;
        free(my_list);
        my_list = nextelement;
    }
}
 
int main() {
    /* Defining the variables */
    char c;
    int a, b;
    int n, val;
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
            case 'i':
                //to add at a specific position
                scanf("%d", &n);
                scanf("%d", &val);
                linkedlist = insert_element(linkedlist, n, val);
                break;
            case 'R':
                //to reverse the list
                linkedlist = reverse(linkedlist);
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
