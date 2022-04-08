#include <stdio.h>
#include <stdlib.h>
void set_all_elements(int ** arr, int numrow, int numcol) {
    int r, c;
    int count = 1;
    for(r = 0; r < numrow; r++)    // 0, 1
        for(c = 0; c < numcol; c++) {  // 0, 1, 2, 3, 0, 1, 2, 3
            arr[r][c] = count ; // some value ...
            count++;
        }
}
void print_matrix(int ** arr, int numrow, int numcol) {
    int row, col;
    for(row = 0; row < numrow; row++) {
        for(col = 0; col < numcol; col++) {
            printf("%5d", arr[row][col]);
        }
        printf("\n");
    }
}
int main () {
    int **table, row;
    table = (int **)malloc(sizeof(int *) * 3);
    if (table == NULL) {
        printf("Memory could not be allocated\n");
        exit(1);
    }
    for(row = 0; row < 3; row++) {
        table[row] = (int *)malloc(sizeof(int) * 4);
        if (table[row] == NULL) {
            printf("Memory could not be allocated\n");
            exit(1);
        }
    }
    set_all_elements(table, 3, 4);
    print_matrix(table, 3, 4);
    for (row = 0; row < 3; row++)
        free(table[row]);
    free(table);
    return 0;
}
