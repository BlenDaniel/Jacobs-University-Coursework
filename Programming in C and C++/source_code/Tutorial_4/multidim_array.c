# include <stdio.h>
int main () {
    int table [50][50];
    int i, j, row, col;
    scanf("%d", &row);
    scanf("%d", &col);
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            table[i][j] = i*j;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
            printf("%d ", table[i][j]);
        printf("\n");
    }
    return 0;
}