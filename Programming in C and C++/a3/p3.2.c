/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>

int main(){

    char c = getchar();
    int n;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf(" %c ", c - i);
    }
    return 0;
}