#include <stdio.h>
int main() {
	int a;
	printf("size int = %lu\n", sizeof(a));
	printf("size float = %lu\n", sizeof(float));
	printf("size double = %lu\n", sizeof(double));
	printf("size int * = %lu\n", sizeof(int *));
	printf("size double * = %lu\n", sizeof(double *));
	printf("size char * = %lu\n", sizeof(char *));
	return 0;
}
