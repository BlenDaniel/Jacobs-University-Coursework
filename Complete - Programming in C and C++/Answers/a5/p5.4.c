/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void divby5(float arr[], int size) {
    //Iterating every element to divide it and assign the divided value according to the specific index
    for(int i= 0; i < size; i++){      
        arr[i] = arr[i] / 5;
    }
}

void getFloatsFromUser(float *floatArrs, int size){
    //To store a scanned input value
    float value;
    int i;
    for(i = 0; i < size; i++){
        printf("Enter float number %d: ", i+1);  
        scanf("%f", &value); 
        floatArrs[i] = value;  
    }
    
}

int main(){

    //Get size of the array (n)
    int size = 0;
    printf("Enter the size of your list: ");
    scanf("%d", &size);

    //Define a float array
    float *floatArrs;

    floatArrs = (float *) malloc(sizeof(float) * size);

    //Getting floats from user
    //This will update my floatArray
    getFloatsFromUser(floatArrs, size);

    //Printing elements of array before division
    printf("Before:\n");
    for(int i = 0; i < size; i++){
        printf("%.3f ", floatArrs[i]);
    }

    //Dividing the elements in the array function
    printf("\n");    
    divby5(floatArrs, size);

    //Printing the elements of array after division
    printf("After:\n");
    for(int i = 0; i < size; i++){
        printf("%.3f ", floatArrs[i]);
    }

    free(floatArrs);
    return 0;
}