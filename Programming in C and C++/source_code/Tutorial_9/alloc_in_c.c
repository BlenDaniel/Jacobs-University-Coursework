/* alloc_in_c.c
   demonstrates dynamic memory allocation in C
*/	

#include <stdio.h>
#include <stdlib.h>

int main() {
	int* ptr;	// pointer to memory that will be allocated soon
	ptr = (int*) malloc(sizeof(int) * 20);
	
	if (ptr == NULL) {
		fprintf(stderr, "Out of memory!\n");
		exit(1);
	}
	
	ptr[3] = 81;
	
	free(ptr);
	return 0;
}

