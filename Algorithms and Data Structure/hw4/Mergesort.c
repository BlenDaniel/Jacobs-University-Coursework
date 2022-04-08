/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <string.h>
#include <sys/time.h>

#define SIZE 1000

void bestCasePrint();
void aveCasePrint();

void worstCasePrint();
void merge(int *arr, int l, int m, int r);
void mergeSort(int *arr, int l, int r);
void mergeSortVariant(int *array, int l, int r, int k);
void inserstionSort(int *array, int l, int r);
int *randomCase(int size);
int *worstCase(int size);
int *bestCase(int size);
int getRandomNumber(int upperLimit);

int main()
{
    srand(time(NULL));
    bestCasePrint();
    aveCasePrint();
    worstCasePrint();
}

void bestCasePrint()
{

    struct timeval stop, start;

    FILE *fPout;
    /* Opening the output file */
    fPout = fopen("file_1.txt", "wb");

    if (fPout == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }

    for (int k = 0; k < SIZE; k += 10)
    {

        for (int j = 0; j < SIZE; j++)
        {

            int *best = (int *)malloc(j * sizeof(int));

            best = bestCase(j);

            gettimeofday(&start, NULL);

            mergeSortVariant(best, 0, j - 1, k);

            gettimeofday(&stop, NULL);

            free(best);
        }

        fprintf(fPout, "%d", k);

        fputs(" ", fPout);

        fprintf(fPout, "%ld", (stop.tv_sec - start.tv_sec) * 1000000 + (stop.tv_usec - start.tv_usec));

        fputs("\n", fPout);
    }

    fclose(fPout);
}

void aveCasePrint()
{
    struct timeval stop, start;

    FILE *fPout;
    /* Opening the output file */
    fPout = fopen("file_2.txt", "wb");

    if (fPout == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }

    for (int k = 0; k < SIZE; k += 10)
    {

        for (int j = 0; j < SIZE; j++)
        {

            int *ave = (int *)malloc(j * sizeof(int));

            ave = randomCase(j);

            gettimeofday(&start, NULL);

            mergeSortVariant(ave, 0, j - 1, k);

            gettimeofday(&stop, NULL);

            free(ave);
        }
        fprintf(fPout, "%d", k);

        fputs(" ", fPout);

        fprintf(fPout, "%ld", (stop.tv_sec - start.tv_sec) * 1000000 + (stop.tv_usec - start.tv_usec));

        fputs("\n", fPout);
    }

    fclose(fPout);
}

void worstCasePrint()
{
    struct timeval stop, start;

    FILE *fPout;
    /* Opening the output file */
    fPout = fopen("file_3.txt", "wb");

    if (fPout == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }

    for (int k = 0; k < SIZE; k += 10)
    {

        for (int j = 0; j < SIZE; j++)
        {

            int *worst = (int *)malloc(j * sizeof(int));

            worst = worstCase(j);

            gettimeofday(&start, NULL);

            mergeSortVariant(worst, 0, j - 1, k);

            gettimeofday(&stop, NULL);

            free(worst);
        }

        fprintf(fPout, "%d", k);

        fputs(" ", fPout);

        fprintf(fPout, "%ld", (stop.tv_sec - start.tv_sec) * 1000000 + (stop.tv_usec - start.tv_usec));

        fputs("\n", fPout);
    }

    fclose(fPout);
}

void merge(int *arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int *L, *R;
    L = (int *)malloc(n1 * sizeof(int));
    R = (int *)malloc(n2 * sizeof(int));

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

void mergeSort(int *arr, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void mergeSortVariant(int *array, int l, int r, int k)
{
    if ((r - l) <= k)
    {
        inserstionSort(array, l, r);
    }
    else if (l < r)
    {
        mergeSort(array, l, r);
    }
}

void inserstionSort(int *array, int l, int r)
{
    int i, key;
    for (int j = l + 1; j <= r; j++)
    {
        key = array[j];
        i = j - 1;
        while (i > 0 && array[i] > key)
        {
            array[i + 1] = array[i];
            i = i - 1;
        }
        array[i + 1] = key;
    }
}

int *randomCase(int size)
{
    int *randomArray = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
        randomArray[i] = getRandomNumber(size);
    return randomArray;
}

int *worstCase(int size)
{
    int *worstCaseArray = (int *)malloc(size * sizeof(int));
    int j = 0;
    for (int i = size; i > 0; i--)
    {
        worstCaseArray[j] = i;
        j++;
    }
    return worstCaseArray;
}

int *bestCase(int size)
{
    int *bestCaseArray = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
        bestCaseArray[i] = i + 1;
    return bestCaseArray;
}

int getRandomNumber(int upperLimit)
{
    int r = 1 + rand() % (upperLimit);
    return r;
}