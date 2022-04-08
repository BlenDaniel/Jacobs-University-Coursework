/*
CH-230-A
a4 p6.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void dynamic_memory_allocation(int sizeOfArr) {
    //Initiating variables 
    int high1, high2;
    int *arr_num = malloc(sizeof(int) * sizeOfArr);

    //Getting number inputs from user to store in the array arr_num
    for (int i = 0; i < sizeOfArr; i++) {
        int number;
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);
        arr_num[i] = number;
    }    

    //checking of the first and second values if they are greater or less than
    //This is to assign the first two numbers to the initiated variables.
    if (arr_num[0] > arr_num[1]) {
        high1 = arr_num[0];
        high2 = arr_num[1];    
    }
    else {
        high1 = arr_num[1];
        high2 = arr_num[0];
    }

    //Checking the rest of ther list if there are higher numbers
    for (int i = 2; i < sizeOfArr; i++) {
        if (arr_num[i] > high2) {
            if (arr_num[i] > high1) {
                high2 = high1;
                high1 = arr_num[i];
            }
            else {
                high2 = arr_num[i];
            }
        }
    }

    printf("The highest values from the list are %d and %d.\n", high1, high2);
    free(arr_num);

}

int main(){

    int sizeOfArr;
    printf("Enter size of array: ");
    scanf("%d", &sizeOfArr);    
    //Just to make sure the size is greater than two for comparison to work
    if(sizeOfArr > 2){
        //Function is called
       dynamic_memory_allocation(sizeOfArr); 
    }else{
        printf("List size needs to be greater than 2!");
    }
    
    return 1;
}