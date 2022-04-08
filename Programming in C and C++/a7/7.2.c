#include <stdlib.h>
#include <stdio.h>

struct DoublyLinkedList
{
    char value;
    struct DoublyLinkedList *front;
    struct DoublyLinkedList *back;
};

typedef struct DoublyLinkedList DoublyLinkedList;

DoublyLinkedList *push_front(DoublyLinkedList *my_list, char value);

DoublyLinkedList *delete_node(DoublyLinkedList *my_list, char value);

void print_list(DoublyLinkedList *my_list);

void print_list_reverse(DoublyLinkedList *my_list);

void free_list(DoublyLinkedList *list);

int main()
{

    int num;
    DoublyLinkedList *theList;
    theList = NULL;
    char c, r;

    do
    {

        scanf("%d", &num);
        switch (num)
        {
        case 1:
            getchar();
            scanf("%c", &c);
            theList = push_front(theList, c);
            break;
        case 2:

            getchar();
            scanf("%c", &r);
            theList = delete_node(theList, r);
            break;
        case 3:
            print_list(theList);
            printf("\n");
            break;
        case 4:
            print_list_reverse(theList);
            printf("\n");
            break;
        case 5:

            free_list(theList);
            printf("\n");
            break;
        default:
            printf("Invalid Input\n");
            break;
        }

    } while (num != 0);
}

DoublyLinkedList *push_front(DoublyLinkedList *my_list, char value)
{
    DoublyLinkedList *newElement;
    newElement = (DoublyLinkedList *)malloc(sizeof(DoublyLinkedList));

    if (newElement == NULL)
    {
        printf("Error allocating memory\n");
        return my_list;
    }

    newElement->value = value;
    newElement->front = NULL;
    newElement->back = my_list;

    if (my_list != NULL)
    {
        my_list->front = newElement;
    }

    my_list = newElement;

    return my_list;
}

DoublyLinkedList *delete_node(DoublyLinkedList *my_list, char ref)
{
    DoublyLinkedList *p = my_list;
    /* Checking if the list has elements or not */
    if (p == NULL)
    {
        printf("Invalid List");
        return my_list;
    }

    while (p->back != NULL)
    {
        if (p->value == ref)
        {
            p->value = p->back->value;
            p->back = p->back->back;
        }
        else
        {
            p = p->back;
        }
    }

    return my_list;
}

void print_list(DoublyLinkedList *my_list)
{
    DoublyLinkedList *p = my_list;
    while (p != NULL)
    {
        printf("%c ", p->value);
        p = p->back;
    }
}

void print_list_reverse(DoublyLinkedList *my_list)
{
    DoublyLinkedList *p = my_list;
    while (p->back != NULL)
    {
        p = p->back;
    }

    while (p != my_list->front)
    {
        printf("%c ", p->value);
        p = p->front;
    }
}

void free_list(DoublyLinkedList *list)
{
    while (list != NULL)
    {
        free(list);
        list = list->back;
    }
}