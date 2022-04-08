/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


void divby5(float arr[], int size) {
    //Iterating every element to divide it and assign the divided value according to the specific index
    for(int i= 0; i < size; i++){      
        arr[i] = arr[i] / 5;
    }
}


int main(){
    //Define a float array
    float floatArrs[6] = {5.500, 6.500, 7.750, 8.000, 9.600, 10.360};

    //Printing elements of array before division
    printf("Before:\n");
    for(int i = 0; i < 6; i++){
        printf("%.3f ", floatArrs[i]);
    }

    //Dividing the elements in the array function
    printf("\n");    
    divby5(floatArrs, 6);

    //Printing the elements of array after division
    printf("After:\n");
    for(int i = 0; i < 6; i++){
        printf("%.3f ", floatArrs[i]);
    }
    printf("\n");
    return 0;
}