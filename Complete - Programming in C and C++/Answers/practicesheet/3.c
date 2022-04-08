#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int *number;
    number = (int *) malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (number + i));
        /* code */
    }

    FILE *fout;

    fout = fopen("squares.txt", "w");
    if(fout == NULL){

    }

    for(int i = 1; i <= n; i++){
        fprintf(fout, "%d  %d\n", i, i*i);
    }
    
    fclose(fout);
    return 0;
}