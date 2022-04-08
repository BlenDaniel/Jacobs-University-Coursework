/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include "linked_list.h"

int main()
{
    struct list *mylist = NULL;
    char choice;
    int var;

    /* Looping until q is pressed  */
    while (1){
        /* Get user input choice */
        scanf("%c", &choice);
        /*
        * Switch statment to switch between choices until 'q' is given
        * If 'q' is given, the program terminates since while loop will face break
        */
        switch (choice){
            case 'a':
                /* Add number at the start of the list */
                scanf("%d", &var);
                mylist = add_back(mylist, var);
                break;
            case 'b':
                /* Add number at the end of the list */
                scanf("%d", &var);
                mylist = add_front(mylist, var);
                break;            
            case 'p':
                /* Print myList */
                print_list(mylist);
                break;
            case 'r':
                /* Remove at the start of the list */
                mylist = remove_front(mylist);
                break;
            case 'q':
                /* To quit the program */
                free_list(mylist);
                return 0;
                break;
        }
        getchar();
    }
    return 0;
}