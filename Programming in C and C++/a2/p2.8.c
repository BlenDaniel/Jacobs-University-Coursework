/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if((n % 2 == 0) && (n % 7 == 0)){
        printf("The number is divisible by 2 and 7");
    }else{
        printf("The number is NOT divisible by 2 and 7");
    }
    return 0;
}