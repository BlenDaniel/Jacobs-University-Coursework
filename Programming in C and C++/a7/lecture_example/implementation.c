#include "header_file.h"
#include <stdio.h>

void print_list(struct node * head) {
	struct node *cursor =  head;
	while(cursor) {
		printf("%d ", cursor->value);
		cursor = cursor->next;
	}
	printf("\n");
}