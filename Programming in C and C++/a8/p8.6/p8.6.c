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

int main()
{
    /* input buffer, NULL forces getline to allocate */
    char *file_name1 = NULL, *file_name2 = NULL;
    /* maximum characters to read (0 - no limit      */
    size_t n = 0;
    /* number of characters actually read            */
    size_t dOChar, dTChar = 0;
    /* Initializing my variables                     */
    double a, b, i, j, sum, product, difference, division;
    /* Getting two names                             */
    if ((dOChar = getline(&file_name1, &n, stdin)) != -1 && (dTChar = getline(&file_name2, &n, stdin)) != -1)
    {
        file_name1[--dOChar] = 0;
        file_name2[--dTChar] = 0;
    }

    /* Opening the two files in read mode and the output file in write mode */

    FILE *fOPtr, *fTPtr, *fPout;

    fOPtr = fopen(file_name1, "r");

    fTPtr = fopen(file_name2, "r");

    fPout = fopen("result.txt", "w");

    if (fOPtr == NULL || fTPtr == NULL || fPout == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }

    /* Getting the double number */
    i = fscanf(fOPtr, "%lf", &a);
    j = fscanf(fTPtr, "%lf", &b);

    while (i != EOF && j != EOF)
    {
        sum = a + b;
        product = a * b;
        difference = a - b;
        division = a / b;
        i = fscanf(fOPtr, "%lf", &a);
        j = fscanf(fTPtr, "%lf", &b);
    }

    fprintf(fPout, "Sum: %lf\nDifference: %lf\nProduct: %lf\nDivision: %lf\n", sum, difference, product, division);
    /* Closing the files */
    fclose(fPout);
    fclose(fOPtr);
    fclose(fTPtr);
    /* Freeing memory */
    free(file_name1);
    free(file_name2);
}
