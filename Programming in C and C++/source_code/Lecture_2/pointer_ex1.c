# include <stdio.h>
int main () 
{
    int a = 7;
    int * ptr;
    ptr = &a;
    printf("Address of : %p\n", ptr);
    printf("Value of a : %d\n", *ptr);
    printf("Size of pointer %lu \n", sizeof(ptr));
    return 0;
}