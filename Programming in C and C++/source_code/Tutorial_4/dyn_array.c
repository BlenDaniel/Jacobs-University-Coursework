# include <stdio.h>
# include <stdlib.h>
int main () {
    int * dyn_array, how_many, i;
    printf("How many elements? ");
    scanf("%d", &how_many);
    dyn_array = (int *) malloc(sizeof(int) * how_many);
    if (dyn_array == NULL) {
        printf("Memory allocation error!\n");
        exit(1);
    }
    // do something
    for(i = 0; i < how_many; i++) {
        printf("\nInput number %d: ", i);
        scanf("%d", &dyn_array[i]);
    }
    free(dyn_array);
    return 0;
}