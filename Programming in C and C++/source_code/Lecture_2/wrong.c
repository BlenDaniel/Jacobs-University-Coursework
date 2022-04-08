#include <stdio.h>
int main() {
    int a = 12345;
    int * int_ptr = & a;
    char * char_ptr;
    char_ptr = int_ptr; /* WRONG */
    printf("%d\n", *int_ptr);
    printf("%d\n", *char_ptr);
    return 0;
}