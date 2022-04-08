/*
CH-230-A
a4 p4.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//To count consonants
void count_consonants(char str[], int length)
{

    int count = 0;

    for (int j = 0; j < length; j++)
    {
        //Check if str[j] is consonant or not
        if (str[j] != 'a' && str[j] != 'e' && str[j] != 'i' && str[j] != 'o' && str[j] != 'u' && str[j] != 'A' && str[j] != 'E' && str[j] != 'I' && str[j] != 'O' && str[j] != 'U')
        {
            if (str[j] != ' ')
                count++;
        }
    }
    printf("Number of consonants=%d\n", count);
}

int main()
{
    while (1)
    {
        char value[100];
        int length = 0;
        printf("Enter your string: ");
        //Gets string from user
        fgets(value, sizeof(value), stdin);
        if (!(strcmp(value, "\n")))
        {
            break;
        }
        while (value[length] != '\0')
            length++;
        //count consonants is called
        count_consonants(value, length);
    }
    return 0;
}