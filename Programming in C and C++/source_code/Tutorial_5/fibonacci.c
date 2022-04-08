#include <stdio.h>
int fibonacci(int n) {
	if ((n == 0) || (n == 1))
		return 1;
	else
		return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
	int nr;
	scanf("%d", &nr);
	printf("Fibonacci(%d) = %d\n", nr, fibonacci(nr));
	return 0;
}
