# include <stdio.h>

int find_element(int v[100], int dim, int t);

int main () {
	int array[5] = {2 , 4 , 8 , 16 , 32};
	int result;
	result = find_element(array, 5, 8);
	if (result == -1)
		printf ("37 is not present\n");
	else
		printf("8 is on position %d\n", result);
	return 0;
}

int find_element(int v[100], int dim, int t) {
	int i ;
	for(i = 0; i < dim; i++) {
		if (v[i] == t)
			return i ;
	}
	return -1;
}


int f(int x) {
	printf(...);
	x =  x + 1;
	return x;
	printf(...);
	fdadafaff
}

void f(int x) {
	printf(...);
	x =  x + 1;
	printf(...);
}