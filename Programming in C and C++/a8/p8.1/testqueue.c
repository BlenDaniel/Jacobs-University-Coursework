/**
 * @file testqueue.c
 * CH-230-A
 * a4 p2.[c]
 * Blen Assefa
 * bassefa@jacobs-university.de
 */

#include <stdio.h>
#include "queue.h"

int main() 
{
	Queue line;
	Item temp;
	char ch;
	
	/* Initialize my queue */
	initialize_queue(&line);
	
	while (((ch = getchar()) != EOF) && (ch != 'q'))
	{
		switch (ch)	{
			/* Adding values to the queue */
			case 'a':
				printf("add int: ");
				scanf("%d", &temp);
				if (!queue_is_full(&line))
				{
					printf("Putting %d into queue\n", temp);
					enqueue(temp, &line);
				}
				else
					puts("Queue is full");
				break;
            /* Removing values from the queue */
			case 'd':
				if (queue_is_empty(&line))
					puts("Nothing to delete!");
				else
				{
					dequeue(&temp, &line);
					printf("Removing %d from queue\n", temp);
				}
				break;  
			/* Printing values in the queue */
			case 'p':
				printf("content of the queue: ");
				/*Using temp to copy the original queue*/
				Queue temp;
    			initialize_queue(&temp);
				print_queue(&line, &temp);				
				break;         
			/* Default prints */
			default:
				printf("%d items in queue\n", queue_item_count(&line));
				puts("Type a to add, d to delete, p to print, q to quit:");
		}
	}	
	//empty_queue(&line);
	puts("Bye.");
	return 0;
}