/**
 * @file queue.c
 * 
 * CH-230-A
 * a4 p2.[c]
 * Blen Assefa
 * bassefa@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/* Function to initialize the queue */
void initialize_queue(Queue *pq)
{
	pq -> front = pq -> rear = NULL;
	pq -> items = 0;
}

/* Function to check if the queue is full */
int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

/* Function to check if the queue is empty */
int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

/* Function to return size of the queue */
int queue_item_count(const Queue *pq)
{
	return pq->items;
}

/* Function to add item at the back of the queue */
int enqueue(Item item, Queue *pq)
{
    Node* newnode = (Node *) malloc(sizeof(Node));

    /* Checking if the allocation worked */
    if (newnode == NULL) {
        printf("Error allocation memory");
        return -1;
    }

    /* Node item will be the new item(aka int) */
	newnode -> item = item;
    /* Making the next pointer temporary null */
    newnode -> next = NULL;

    /* Checking to see if the queue was empty to add the newnode*/
    if(pq -> items == 0) {
        pq -> front = newnode;        
    }/* If queue was not empty add it to the end of the list in queue */
    else
    {
        pq -> rear -> next = newnode;
    }
    /* Whatever the case the rear node is going to be the newnode */
    pq-> rear = newnode;
    /* Incrementing the count */
    pq -> items ++;    
    return 0;
}



/* Function to remove an item */
int dequeue(Item *pitem, Queue *pq)
{
   
    Node *temp = pq -> front;    
    /* Dummy Item holder */    
    
    *pitem = pq -> front -> item;
    /* Making the front node of the queue to be the next node */
    pq -> front  = pq -> front -> next;    

    free(temp);
    /* Checking if the front it null so that when we remove we will also make rear null */
    if(pq -> front == NULL){
        pq -> front = pq -> rear = NULL;
    }
    /* Decreasing the count */
    pq -> items --;
    
    return 0;
}

void print_queue(Queue *pq, Queue *temp)
{
    /* q is used to store the values of my queue*/
    while (pq -> front != NULL)
    {
        printf("%d ", pq -> front -> item);
        /* Adding the values in q */
        enqueue(pq -> front -> item, temp);
        pq -> front = pq -> front -> next;
    }
    /* Copying q to pq again */
    *pq = *temp; 
    printf("\n");    
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}