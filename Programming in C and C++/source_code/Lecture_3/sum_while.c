#include <stdio.h>
int main() {
	int idx, n, sum = 0;
	printf("Enter a positive number: ");
	scanf("%d", &n);
	idx = 1;
	while ( idx <= n ) {
		sum += idx ;
		idx ++;
	}
	printf("The sum is % d\n", sum);
	return 0;
}
