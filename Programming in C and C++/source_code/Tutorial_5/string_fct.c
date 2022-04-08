/*
CH-230-A
a4_p12.c
Priontu Chowdhury
p.chowdhury@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

//replaceAll(..) replaces all occurances of a character with another.
void replaceAll(char *str, char c, char e)
{
    for (int i = 0; *(str + i) != '\0'; i++)
    {
        if (*(str + i) == c)
        {
            *(str + i) = e;
        }
    }
}

void process() {
    char line[80];
    char current;
    char replace;
	char stop[] = "stop\n";
	char copy[80];

    while (1) //Endless loop.
    {
        fgets(line, sizeof(line), stdin);
        if (strcmp(line, stop) == 0)
        {
            break;
        }

        scanf(" %c", &current); //Character to be replaced.
        scanf(" %c", &replace); //Character to be replaced with.

        replaceAll(strcpy(copy, line), current, replace); //Passing a copy of the line into replaceAll(..).

        printf("Character to be replaced: %c\n", current);
        printf("Character to be replaced with: %c\n", replace);
        printf("Before: \n%s", line);
        printf("After: \n%s\n", copy);

        getchar(); //Capturing trailing newline.
    }
}

int main()
{
    process();
    int x = 5;
    int *p =  &x;
    int **pp = &p;
    int a[10];
    int m[10][10];
    int *p[10]; // int **
    ...
    ...
    int **p // malloc

    return 0;
}
