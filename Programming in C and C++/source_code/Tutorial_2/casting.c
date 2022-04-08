#include <stdio.h>
int main() {
	int a ;
	float f1 = 3.456;	
	float f2 = 1.22;
	/* these operations imply demotions */
	a = (int) f1 * f2 ; /* a is now 3 */
	printf("a = %d\n", a);
	a = (int) (f1 * f2) ; /* a is now 4 */
	printf("a = %d\n", a);
	return 0;
}
