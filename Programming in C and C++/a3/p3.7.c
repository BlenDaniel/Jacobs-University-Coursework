/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c);

int main()
{
    char c;
    int n, m;
    /* Get two numbers */
    scanf("%d %d", &n, &m);
    scanf("%c", &c);
    print_form(n, m, c);
    return 0;
}

void print_form(int n, int m, char c)
{
    int times = m;
    for (int i = 0; i < n; i++)
    {
        if (times <= (m + n - 1))
        {
            for (int j = 0; j < times; j++)
            {
                printf("%c ", c);
            }
            times++;
        }

        printf("\n");
    }
}
