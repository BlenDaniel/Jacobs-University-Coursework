#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	Node *pnew;
	
	if (queue_is_full(pq)) 
		return 0;
		
	pnew = (Node *) malloc(sizeof(Node));
	if (pnew == NULL) {
		fprintf(stderr, "Unable to allocate memory!\n");
		exit(1);
	}
	
	pnew->item = item;
	pnew->next = NULL;
	if (queue_is_empty(pq)) 
		pq->front = pnew;
	else
		pq->rear->next = pnew;
	pq->rear = pnew;
	pq->items++;
	return 1;
}

int dequeue(Item *pitem, Queue *pq)
{
	Node *pt;
	
	if (queue_is_empty(pq))
		return 0;
	*pitem = pq->front->item;
	
	pt = pq->front;
	pq->front = pq->front->next;
	free(pt);
	pq->items--;
	if (pq->items == 0)
		pq->rear = NULL;
	return 1;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq))
		dequeue(&dummy, pq);
}

void printq(Queue *pq)
{
	Node *t=pq->front;
	while(t!=NULL)
	{
		printf("%d ",t->item);
		t=t->next;
	}
	printf("\n");
}
