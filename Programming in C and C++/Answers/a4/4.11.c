/*
CH-230-A
a4 p11.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Count the character 'c' present in the string(char array) called str
void count_insensitive(char *str, char c)
{
    int count = 0;
    char *arr = str;

    while (*arr != '\n')
    {
        //converting the char *arr and 'c' to upper for matching purposes
        if (toupper(*arr) == toupper(c))
        {
            if (*arr != ' ')
                count++;
        }

        arr++;
    }
    printf("The character '%c' occures %d times.\n", c, count);
}

int main()
{

    char *value;
    value = (char *)malloc(sizeof(char) * 50);

    if (value == NULL)
    {
        //do sth
    }
    printf("Enter your string: ");
    //To get the string from user
    fgets(value, sizeof(value), stdin);
    //To break if the user hits enter
    value[strlen(value) - 1] = '\0';

    char *condenced;
    condenced = (char *)malloc(sizeof(char) * strlen(value));
    if (value == NULL)
    {
        //do sth
    }

    strcpy(condenced, value);

    free(value);

    //To get the count of the 'C' in the value given from user
    count_insensitive(value, 'C');

    //To get the count of the 'b' in the value given from user
    count_insensitive(value, 'b');

    //To get the count of the 'H' in the value given from user
    count_insensitive(value, 'H');

    //To get the count of the '8' in the value given from user
    count_insensitive(value, '8');

    //To get the count of the 'u' in the value given from user
    count_insensitive(value, 'u');

    //To get the count of the '$' in the value given from user
    count_insensitive(value, '$');

    return 0;
}
