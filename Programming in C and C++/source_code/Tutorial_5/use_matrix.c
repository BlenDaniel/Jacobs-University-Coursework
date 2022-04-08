#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main () {
    int **table, row;
    table = (int **)malloc(sizeof(int *) * 3);
    if (table == NULL)
        exit(1);
    for(row = 0; row < 3; row++) {
        table[row] = (int *)malloc(sizeof(int) * 4);
        if (table[row] == NULL)
            exit(1);
    }
    set_all_elements(table, 3, 4);
    print_matrix(table, 3, 4);
    for (row = 0; row < 3; row++)
        free(table[row]);
    free(table);
    return 0;
}