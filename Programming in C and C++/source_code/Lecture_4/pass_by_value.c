# include <stdio.h>
void increase(int par) {
	par++;
}
/* In this case no prototype :
can you tell why ? */
int main() {
	int number = 5;
	increase(number);
	printf("Increased number is % d\n", number);
	/* not as expected ? */
	return 0;
}
