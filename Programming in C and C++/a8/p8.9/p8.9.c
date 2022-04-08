
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

int main()
{
    int size;
    /* For getting strings of dynamic size */
    size_t n = 0;
    size_t d = 0;
    scanf("%d\n", &size);
    /* Getting a list array of dynamic size */
    char **names = malloc(size * sizeof(char *));
    /* Checking to see if the malloc failed */
    if (!names)
        perror("malloc failed"), exit(EXIT_FAILURE);

    for (int i = 0; i < size; i++)
    {
        char *file_name = NULL;
        d = getline(&file_name, &n, stdin);
        if (d != -1)
        {
            file_name[--d] = 0;
        }
        /* Adding the string into the list */
        names[i] = file_name;
    }

    FILE *fPtr;
    FILE *fPout;
    /* Opening the output file */
    fPout = fopen("output.txt", "wb");
    

    if (fPout == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
    printf("Concating the content of 3 files ...\n");
    printf("The result is:\n");
    for (int i = 0; i < size; i++)
    {
        char enter[] = "\n";
        /* Buffer of size 64 */
        char buffer[64];
        /* Opening the file */
        fPtr = fopen(names[i], "rb");

        if (fPtr == NULL)
        {
            // File not created hence exit
            printf("Unable to create file.\n");
            exit(EXIT_FAILURE);
        }

        while (!feof(fPtr))
        {
            /* Reading 64 bytes */
            int count = fread(buffer, 1, 64, fPtr);
            /* Writing the read file length */
            fwrite(buffer, count, 1, fPout);
            fwrite(buffer, count, 1, stdout);            
        }
        fwrite(enter, 1, 1, fPout);
    }
    fclose(fPtr);
    fclose(fPout);
    printf("The result was written into output.txt\n");
    return 0;
}
