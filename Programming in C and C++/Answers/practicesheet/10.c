#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("matric.dat", "r");
    if(fptr == NULL){

    }

    int i;

    int f1;
    int s1;

    int mc, mr, mk;
    int mc, mr, mk;


    i = fscanf(fptr, "%d", &f1);
    while (i != EOF)
    {
        
    }
    

    fclose(fptr);
    return 0;
}