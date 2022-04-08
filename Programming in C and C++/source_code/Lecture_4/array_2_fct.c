# include <stdio.h>
# include <stdlib.h>
void strange_function(int v[], int dim) {
	int i;
	for(i = 0; i < dim; i++)
		v[i] = 287;
		// v = ( int *) malloc ( sizeof ( int ) * 1000) ;
}
int main () {
	int a[4] = {1 , 2 , 9 , 16};
	 char c[] = "Hello\n\0";
	 // sizeof = 7
	 // strlen = 6
	 c[strlen(c)-1] = '\0'; // "Hello\0\0"
	 // strlen = 5
	int * p = &array[0];
	strange_function(a, 4);
	printf("%p %p %p\n", a[3], p, array);
	return 0;
}