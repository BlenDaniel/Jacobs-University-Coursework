/*
CH-230-A
a4 p10.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declaring my variables;
    int rows, columns, depth;
    /*Prompt user to enter values*/
    scanf("%d %d %d", &rows, &columns, &depth);

    /*This is going to be my 3D array with given rows, columns, depth*/
    int ***test;

    test = (int ***)malloc(sizeof(int **) * rows);

    /*Assigning values for the 3D list*/
    for (int i = 0; i < rows; ++i)
    {
        test[i] = (int **)malloc(sizeof(int *) * columns);
        for (int j = 0; j < columns; ++j)
        {
            test[i][j] = (int *)malloc(sizeof(int) * depth);
            for (int k = 0; k < depth; ++k)
            {
                scanf("%d", (test[i][j]+k));
            }
        }
    }

    /*Printing the values in the 3D list -- X Y*/
    for (int i = 0; i < depth; ++i)
    {
        printf("Section %d:\n", i + 1);
        for (int j = 0; j < rows; ++j)
        {
            for (int k = 0; k < columns; ++k)
            {
                printf("%d  ", *(*(*(test+j)+k)+i));
            }
            printf("\n");
        }
    }

    

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            free(test[i][j]);
        }
    }

    free(test);
    test = 0;
    return 0;
}