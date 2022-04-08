/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dlist {
    char val;
    struct dlist *next;
    struct dlist *prev;
};

/* To make life simpler, renaming the data type */
typedef struct dlist Dlist;

/* Push front function */
Dlist *push_front(Dlist *my_list, char value){

    Dlist *new;
    new = (Dlist *) malloc(sizeof(Dlist));

    /* Checking for NULL condition */
    if (new == NULL) {
        printf("Error allocating memory\n");
        return my_list;
    }
     

    new -> val = value;
    new -> next = my_list;
    new -> prev = NULL;        

    /* Make the new node as head node */       
    if(my_list != NULL){
        my_list -> prev = new;
    }
    
    my_list = new;

    return my_list;
}

void delete_node(Dlist *my_list, Dlist *ref) { 
    /* base case */
    if (my_list == NULL || ref == NULL) 
        return; 
  
    /* If node to be deleted is head node */
    if (my_list == ref) { 
        my_list = ref -> next; 
        my_list -> prev = NULL;
    }
    /* Change next only if node to be deleted 
       is NOT the last node */
    if (ref -> next != NULL) {
        ref -> next -> prev = ref -> prev; 
    }else {
        ref -> prev = ref -> next;
    }
    /* Change prev only if node to be deleted  
       is NOT the first node */
    if (ref -> prev != NULL) 
        ref -> prev -> next = ref -> next; 
  
    /* Finally, free the memory occupied by del*/
    free(ref); 
} 

/* Remove from function, value specific removing */
Dlist *remove_value(Dlist *my_list, char value)
{
    Dlist *cursor, *next;
    int isFound = 0;
    cursor = my_list;

    /* Checking if the list has elements or not */
    if(cursor == NULL){
        printf("Invalid List");
        return my_list;
    }    
    /* Iterating through the list to delete the values */
    while (cursor != NULL) {
        if(cursor -> val == value){
            next = cursor-> next;
            delete_node(my_list, cursor);
            cursor = next;
            isFound = 1;
        }else{
            cursor = cursor -> next;
        }
    }
    if(isFound == 0){
        printf("The element is not in the list!\n");
    }
    isFound = 0;
    return my_list;
}



/* Printing all the elements in the list */
void print_list(Dlist *my_list){
    Dlist *p;
    /* Until p is NULL print*/
    for (p = my_list; p != NULL; p = p -> next) {
        printf("%c ", p -> val);
    }
    printf("\n");
}

/* Printing all the elements in the list reverse direction */

void print_list_reverse(Dlist *my_list){
    Dlist *prev;
    prev = my_list;
    /* Assigning prev pointer to point to the last element of the list*/
    while (prev->next != NULL) {
        prev = prev -> next;
    }
    /* While prev is different from null or is different from my_list -> prev, the loop will hold */
    while (prev != my_list-> prev) {
        printf("%c ", prev -> val);
        prev = prev -> prev;
    }   
    
    printf("\n");
}


void free_list(Dlist* list) {
    Dlist* next_element;
    /* To avoid reputations by copying the orignal list  and free memory*/
    while (list != NULL) {
        next_element = list->next;
        free(list);
        list = next_element;
    }
}

int main(){
    /* Defining the variables */
    char c, r;
    int num;
    Dlist *doubly_linkedlist = NULL;

    /* Prompting user to input choices */
    do {
        scanf("%d",&num);
        switch (num) {
            case 1:
                getchar();
                scanf("%c",&c);
                doubly_linkedlist = push_front(doubly_linkedlist, c);
                break;
            case 2:
                getchar();
                scanf("%c",&r);
                doubly_linkedlist = remove_value(doubly_linkedlist, r);
                break;
            case 3:
                print_list(doubly_linkedlist);
                break;
            case 4:
                print_list_reverse(doubly_linkedlist);
                break;
            case 5:
                free_list(doubly_linkedlist);
                break;
            default:
                break;
        }
    /* Until user inputs q, the loop will not break */
    } while (c !='q');    
    return 0;
}