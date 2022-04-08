/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>

float convert(int cm) {
    return cm / 100000.0;
}

int main(){
    int length;
    printf("Enter a length in cm: ");
    scanf("%d", &length);
    printf("Result of conversion: %f", convert(length));
    return 0;
}