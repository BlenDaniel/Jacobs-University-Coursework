# include <stdio.h>
int main() {
	int c;
	for(c = 0; c <= 4; c ++) {
		printf("c: %d\n", c);
		switch(c) {
			case 1: 
				printf ("Here is 1\n");
				break;
			case 2:
				printf("Here is 2\n");
				/* Fall through */
			case 3: 
			case 4:
				printf("Here is 3, 4\n");
				break;
			default :
				printf("Here is default\n");
		}

	}
	return 0;
}
