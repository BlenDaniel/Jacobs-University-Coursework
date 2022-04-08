/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_matric(int **matrix, int size_i, int size_j)
{

    /*
    *(myMatrix[i] + j)
    (*(myMatrix + i))[j]
    *((*(myMatrix myMatrix + i)) + j)
    *(&myMatrix[0][0] + 4*i + j)
    */
    for (int i = 0; i < size_i; i++)
    {
        for (int j = 0; j < size_j; j++)
        {
            printf("%d ", *(*(matrix + i) + j));
            // printf("%d ", *(p + (i * size_j + j)));
        }
        printf("\n");
    }
}

// function to multiply two matrices
void multiplyMatrices(int **firstMatrix, int **secondMatrix, int **mult, int rowFirst, int columnFirst_rowSecond, int columnSecond)
{
    int i, j;

    // Initializing elements of matrix mult to 0.
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {
            *((mult[i]) + j) = 0;
        }
    }

    // Multiplying matrix firstMatrix and secondMatrix and storing in array mult.

    printf("The multiplication result AxB:\n");

    int sum;
    for (int i = 0; i < rowFirst; i++)
    {

        for (int j = 0; j < columnFirst_rowSecond; j++)
        {

            sum = 0;

            /*
             * Find sum of product of each elements of 
             * rows of first matrix and columns of second 
             * matrix.
             */
            for (int k = 0; k < columnSecond; k++)
            {
                sum += (*(*(firstMatrix + i) + k)) * (*(*(secondMatrix + k) + j));
            }

            /* 
             * Store sum of product of row of first matrix 
             * and column of second matrix to resultant matrix.
             */
            *(*(mult + i) + j) = sum;
        }
    }

    print_matric(mult, rowFirst, columnSecond);
}

void enterData(int **firstMatrix, int **secondMatrix, int r1, int c1_r2, int c2)
{
    int i, j;
    printf("\nEnter elements of matrix 1:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1_r2; j++)
        {
            printf("Enter elements a%d%d: ", i + 1, j + 1);
            scanf("%d", firstMatrix[i] + j);
        }
    }

    printf("\nEnter elements of matrix 2:\n");
    for (i = 0; i < c1_r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter elements b%d%d: ", i + 1, j + 1);
            scanf("%d", secondMatrix[i] + j);
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1_r2; j++)
        {
            printf("%d\n", *(firstMatrix[i] + j));
        }
    }

    for (i = 0; i < c1_r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\n", *(secondMatrix[i] + j));
        }
    }
}

int main()
{
    int r1;
    printf("Enter size of matrix in the i's: ");
    scanf("%d", &r1);
    int c1_r2;
    printf("Enter size of matrix in the j's: ");
    scanf("%d", &c1_r2);
    int c2;
    printf("Enter size of matrix in the k's: ");
    scanf("%d", &c2);

    //Initiating first matrix
    int **matrix_f;

    matrix_f = (int **)malloc(sizeof(int *) * r1);
    for (int i = 0; i < r1; i++)
    {
        matrix_f[i] = (int *)malloc(sizeof(int) * c1_r2);
    }

    //Initiating first matrix
    int **matrix_s;

    matrix_s = (int **)malloc(sizeof(int *) * c1_r2);
    for (int i = 0; i < c1_r2; i++)
    {
        matrix_s[i] = (int *)malloc(sizeof(int) * c2);
    }

    //Initiating answer matrix
    int **matrix_a;
    matrix_a = (int **)malloc(sizeof(int *) * r1);
    for (int i = 0; i < r1; i++)
    {
        matrix_a[i] = (int *)malloc(sizeof(int) * c2);
    }

    // Function to take matrices data
    enterData(matrix_f, matrix_s, r1, c1_r2, c2);

    printf("Matrix A:\n");
    print_matric(matrix_f, r1, c1_r2);
    printf("Matrix B:\n");
    print_matric(matrix_s, c1_r2, c2);
    multiplyMatrices(matrix_f, matrix_s, matrix_a, r1, c1_r2, c2);

    for (int i = 0; i < r1; i++)
    {
        free(matrix_f[i]);
    }
    free(matrix_f);

    for (int i = 0; i < c1_r2; i++)
    {
        free(matrix_s[i]);
    }
    free(matrix_s);

    for (int i = 0; i < r1; i++)
    {
        free(matrix_a[i]);
    }
    free(matrix_a);

    return 0;
}