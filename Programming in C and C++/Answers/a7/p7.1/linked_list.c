/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include "linked_list.h"


void print_list(struct list *mylist) {
    /* print the elements in the list */
    while (mylist != NULL) {
        printf("%d ", mylist -> number);
        /* Move to the next value using a pointer */
        mylist = mylist -> next; 
    }
    printf("\n");
}


struct list *add_back(struct list *mylist, int value) {

    struct list *saved_list, *new_list;

    /* Ssaving the orignal list for later use */
    saved_list = mylist; 

    /* Dynamic struct list memory allocation to return the edited list */
    new_list = (struct list *)malloc(sizeof(struct list));
    
    /* Checking for NULL condition */
    if (new_list == NULL) {
        printf("Error allocating memory\n");
        return mylist;
    }

    /* adding values */
    new_list -> number = value;
    new_list -> next = NULL;

    /* Last list pointer */
    if (mylist == NULL) {
        return new_list;
    }

    while (saved_list -> next != NULL) {
        saved_list = saved_list -> next;
    }
    
    saved_list -> next = new_list;
    return mylist;
}

struct list *add_front(struct list *mylist, int value) {

    struct list *new_list;

    /* Dynamic struct list memory allocation to return the edited list */
    new_list = (struct list *)malloc(sizeof(struct list));
    
    /* Checking for NULL condition */
    if (new_list == NULL) {
        printf("Error allocating memory\n");
        return mylist;
    }
    /* add values */
    new_list -> number = value;
    new_list -> next = mylist;
    return new_list;
}

void free_list(struct list *mylist) {
    struct list *nl;
    /* To avoid reputations by copying the orignal list  and free memory*/
    while (mylist != NULL) {
        nl = mylist -> next;
        free(mylist);
        mylist = nl;
    }
}

struct list *remove_front(struct list *mylist) {
    struct list *new_list;
    new_list = mylist;

    /* single element list */
    if (new_list == NULL) {
        return mylist;
    }
    else {
        new_list = new_list -> next;
        mylist = new_list;
        return mylist;
        
    }
    /* free the list */
    free(new_list);       
}