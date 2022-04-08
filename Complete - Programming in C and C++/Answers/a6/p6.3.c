/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Macro for finding the maximum number out of 3 integers */
#define MAX(A, B, C, max) { (A > B) ? ((A > C) ? (max = A) : (max = C)) : ((B > C) ? (max = B) : (max = C)); }

/* Macro for finding the minimum number out of 3 integers */
#define MIN(A, B, C, min) { (A < B) ? ((A < C) ? (min = A) : (min = C)) : ((B < C) ? (min = B) : (min = C)); }

/* Macro for finding the maximum number out of 3 integers */
#define MID_RANGE(max, min, res) {  res = (min + max)/ 2.0; }

int main() {
    int a, b, c, min, max;
    double res;

    /* Prompting user to input three integer values */
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    /* 
        Gettig the maximum number out of the three and storing it in the max variable. 
        This is done by calling my macro
    */
    MAX(a, b, c, max)

    /* 
        Gettig the minimum number out of the three and storing it in the min variable. 
        This is done by calling my macro
    */
    MIN(a, b, c, min)

    /* Getting the mid range from the maximum and minimum number */
    MID_RANGE(max, min, res)

    /* Printing out my result */
    printf("The mid-range is: %lf\n", res);
    return 0;
}