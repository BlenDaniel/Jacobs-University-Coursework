/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>

int main(){
    char ch = getchar();

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a letter", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit", ch);
    } else {
        printf("%c is some other symbol", ch);
    }

    return 0;
}