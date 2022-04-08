#include <stdio.h>

#define DEBUG

int function(int x, int y, int z) {
	int sum = x + y;
	#if defined(DEBUG) // short : # ifdef DEBUG
		printf("sum: %d\n", sum);
	#endif
	int prod = y * z;
	#if defined(DEBUG) // short : # ifdef DEBUG
		printf("prod: %d\n", prod);
	#endif
	return sum + prod;
}

int main() {
	int result = function(2, 3, 5);
	printf("Result = %d\n", result);
	return 0;
}
