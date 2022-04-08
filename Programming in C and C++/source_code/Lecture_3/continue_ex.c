#include <stdio.h>
int main () {
    char c ;
    /* code assumes th= getcharat the input is
    provided in one line like :
    "abf23cdef" followed by enter */
    while((c = getchar()) != '\n') {
        // ignore the letter b
        if (c == 'b')
            continue;
        printf("%c", c);
    }
    return 0;
}


if ((c>='0') && (c<='9'))
else if (((c>='A') && (c<='Z')) ||  ((c>='a') && (c<='z')))
else 

int x = 5;
int * ptr = &x;
int ** ptrptr = &ptr;