#include "header_file.h"
#include <stdlib.h>

int main() {
	struct node a, b, c;
	a.value = 1;
	b.value = 2;
	c.value = 3;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	struct node *head = &a;
	print_list(head);
	return 0;
}
