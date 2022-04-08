/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EXIT_FAILURE 1
#define MAX 25

int checker(char c)
{
    switch (c)
    {
        case ' ':
        case ',':
        case '?':
        case '!':
        case '.':
        case '\t':
        case '\r':
        case '\n':
            return 1;
            break;
        default:
            return 0;
            break;
    }
}

int main()
{
    /* input buffer, NULL forces getline to allocate */
    char *file_name = NULL; 
    /* maximum characters to read (0 - no limit)      */
    size_t n = 0;  
    /* number of characters actually read            */         
    size_t d = 0;           
    char ch, pch;
    int count = 0;

    if ((d = getline(&file_name, &n, stdin)) != -1)
    {
        file_name[--d] = 0;
    }

    FILE *fptr;

    fptr = fopen(file_name, "r");

    if (fptr == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
    /* Previous char initially is the first char */
    pch = getc(fptr);

    while ((ch = getc(fptr)) != EOF)
    {
        /* Checking if the current ch is true (i.e It is ' ', '?'...) 
         * and checking if the previous
         * ch is not apart of  ' ', '?'... 
         */
        if(checker(ch) == 1 && checker(pch) == 0){
            count++;
        }
        /* Changing the previous character to the current one */
        pch = ch;
    }
    printf("Word count is %d", count);
    /* Closing the file */
    fclose(fptr);
    return 0;
}
