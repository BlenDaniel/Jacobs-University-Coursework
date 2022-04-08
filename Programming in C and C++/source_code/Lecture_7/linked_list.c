#include "linked_list.h"
#include <stdio.h>
void print_list(struct node * head) {
	struct node *cursor =  head;
	while(cursor) {
		printf("%d ", cursor->info);
		cursor = cursor->next;
	}
	printf("\n");
}
