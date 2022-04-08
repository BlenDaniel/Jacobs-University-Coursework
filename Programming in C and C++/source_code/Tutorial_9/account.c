// shows problems of imperative programs
#include <stdio.h>

void show_account(double balance) {
	printf("Balance: %f\n", balance);
}

void show_age(long int age) {
	printf("Age: %ld\n", age);
}

int main() {
	double g = 123.45; // supposed to be balance
	long int a = 33;   // supposed to be age
	
	show_account(g);
	show_account(a);  // wrong
	show_age(a);
	show_age(g);	// wrong

	return 0;
}
