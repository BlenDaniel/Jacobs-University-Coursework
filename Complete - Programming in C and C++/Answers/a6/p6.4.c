/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INTERMEDIATE

int main() {

    int k;
    int result = 0;
    int size;

    /* Prompting user to input the size of the vector and assigning it to the variable size */
    scanf("%d", &size);

    int* vector_1 = (int *) malloc(sizeof(int) * size);
    int* vector_2 = (int *) malloc(sizeof(int) * size);

    /* Prompting user to input three integer values for the first vector */
    for (size_t i = 0; i < size; i++) {
        scanf("%d", &k);
        vector_1[i] = k;
    }

    /* Prompting user to input three integer values for the first vector */
    for (size_t i = 0; i < size; i++) {
        scanf("%d", &k);
        vector_2[i] = k;
    }

    /* Checking if INTERMEDIATE is defined to print the intermediate values */
    #ifdef INTERMEDIATE
        printf("The intermediate product values are:\n");
        for (size_t i = 0; i < size; i++) {
            printf("%d\n", vector_1[i] * vector_2[i]);
        }        
    #endif

    /* Calculating the vector */
    for (size_t i = 0; i < size; i++) {
            result = result + (vector_1[i] * vector_2[i]);
    }

    /* Printing the scalar product of the vector */ 
    printf("The scalar product is: %d", result);

    return 0;
}