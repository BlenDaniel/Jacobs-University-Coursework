/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = getchar();
    /* Get size of string */
    int n;
    scanf("%d", &n);
    double *d;

    double sum = 0.0;

    d = (double *)malloc(sizeof(double) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", (d + i));
    }

    while (c != 'q')
    {
        switch (c)
        {
        case 's':
            for (int i = 0; i < n; i++)
            {
                sum += *(d + i);
            }
            printf("Sum of the doubles is: %lf\n", sum);
            c = getchar();
            break;
        case 'p':
            for (int i = 0; i < n; i++)
            {
                printf("Element at index %d is %lf\n", i, *(d + i));
            }
            c = getchar();
            break;
        case 't':
            for (int i = 0; i < n; i++)
            {
                printf("Element at index %d in Celsius is %lf\n", i, *(d + i));
                printf("In Fahrenheit is %lf\n", ((9.0 / 5.0) * (*(d + i))) + 32);
            }
            c = getchar();
            break;
        default:
            for (int i = 0; i < n; i++)
            {
                sum += *(d + i);
            }
            printf("Sum of the doubles is: %lf\n", sum);
            printf("Average of the doubles is: %lf\n+", (double) sum / n);
            c = getchar();
          }
    }

    free(d);
    return 0;
}