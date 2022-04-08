/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Printing the array */
void print_array(int *arr, int n){
    int *a = arr;
    for(int i = 0; i < n; i++){
        printf("%d ", *a);
        a++;
    }
}

/* For sorting the array in an ascending order */
int ascending(const void * a, const void * b) {
   return (*(int*)a - *(int*)b);
}
/* For sorting the array in an decending order */
int decending(const void * a, const void * b) {
   return (*(int*)b - *(int*)a);
}

int main(){
    int n, i, *ptr;
    char val; 

    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int)); 

    /* if memory cannot be allocated */
    if(ptr == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }
    /* Inputing the values for the array */
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    do{
        /* Getting the character for choosing which function to use for the qsorting */
        
        scanf("%c",&val);     
        getchar();
           
        val == 'a' ? qsort(ptr, n, sizeof(int), ascending) : qsort(ptr, n, sizeof(int), decending);    
        
        /* As long as e is not entered the loop will hold and will print the array */
        if(val != 'e'){
            print_array(ptr, n);
            printf("\n");
        }
            
    }
    while (val != 'e');  

    /* deallocating the memory */ 
    free(ptr);

    return 0;
}