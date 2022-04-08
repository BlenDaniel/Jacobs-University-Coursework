# include <stdio.h>
# include <stdlib.h>

int main () {
    int length[2] = {7, 9};
    int *ptr1, *ptr2; 
    int n1, n2;
    ptr1 = &length[0];
    // & length [0] is pointer to first elem
    ptr2 = length;
    // length is pointer to first elem therefore
    // same as above
    n1 = length[0];
    // length [0] is value
    n2 = *ptr2;
    // * ptr2 is value therefore same as above
    printf("ptr1: %p, ptr2: %p \n", ptr1, ptr2);
    printf("n1: %d, n2: %d\n", n1, n2);
    return 0;
}