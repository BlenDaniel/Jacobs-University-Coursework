#include <stdio.h>
int factorial(int n) {
    int val;
    if (( n == 0) || ( n == 1) ) {
        printf("base\n");
        return 1;
    } else {
        printf("called with par = %d\n", n);
        val = n * factorial( n - 1);
        printf("returning %d\n", val);
        return val ;
    }
}
int main () {
    printf("%d\n", factorial(4));
    return 0;
}