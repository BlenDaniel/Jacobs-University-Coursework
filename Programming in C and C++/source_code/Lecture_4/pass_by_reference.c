# include <stdio.h>
void increase(int * par) {
	*par = *par + 1;
}
int main () {
	int number = 5;
	increase(&number); /* pass pointer */
	printf("Increased number is %d", number);
	return 0;
}
