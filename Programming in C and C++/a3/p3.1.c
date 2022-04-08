/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    float f;
    int num;

    scanf("%f", &f);
    scanf("%d", &num);

    while (num <= 0)
    {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &num);
    }

    for (int i = 0; i < num; i++)
    {
        printf("%f\n", f);
    }

    return 0;
}