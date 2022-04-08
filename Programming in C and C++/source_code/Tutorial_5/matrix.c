#include <stdio.h>
#include "matrix.h"

void set_all_elements(int ** arr, int numrow, int numcol) {
    int r, c;
    for(r = 0; r < numrow; r++)
        for(c = 0; c < numcol; c++)
            arr[r][c] = r * c ; // some value ...
}
void print_matrix(int ** arr, int numrow, int numcol) {
    int row, col;
    for(row = 0; row < numrow; row++) {
        for(col = 0; col < numcol; col++)
            printf("%d ", arr[row][col]);
        printf("\n");
    }
}