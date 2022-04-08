# include <stdio.h>
int main() {
	int first, second;
	printf("Type the first number:\n");
	scanf("%d" , &first);
	printf("Type the second number:\n");
	scanf("%d", &second);
	if ( first > second ) {
		printf("The larger one is %d\n", first);
	}
	else if (first < second) {
		printf("The larger one is %d\n", second);
	}
	else {
		printf("The numbers are the same\n");
	}
	printf("Can you see the logical error?\n");
	return 0;
}
