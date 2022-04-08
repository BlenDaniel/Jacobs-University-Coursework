/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

/* List with a value variable and a value pointer */
struct list {
    int number;
    struct list *next;
};


/* function prototypes */
struct list *add_back(struct list *mylist, int value);
struct list *add_front(struct list *mylist, int value);
void free_list(struct list *mylist);
void print_list(struct list *mylist);
struct list *remove_front(struct list *mylist);

