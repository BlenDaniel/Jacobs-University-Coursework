/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int nw, nd, nh;
    printf("Enter the number of weeks: ");
    scanf("%d", &nw);
    printf("Enter the number of days: ");
    scanf("%d", &nd);
    printf("Enter the number of hours: ");
    scanf("%d", &nh);

    printf("The total number of hours: %d", (nh + (168 * nw) + (24 * nd)));
    return 0;
}