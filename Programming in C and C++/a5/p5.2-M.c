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
    for(int i= 0; i < 5; i++){      
        arr[i] = arr[i] / 5;
    }
}

void getFloatsFromUser(float *floatArrs){
    //To store a scanned input value
    float value;
    int i;
    for(i = 0; i < 5; i++){
        printf("Enter float number %d: ", i+1);  
        scanf("%f", &value); 
        floatArrs[i] = value;  
    }
    
}

int main(){
    //Define a float array
    float floatArrs[5];
    //Getting floats from user
    //This will update my floatArray
    getFloatsFromUser(floatArrs);

    //Printing elements of array before division
    printf("Before:\n");
    for(int i = 0; i < 5; i++){
        printf("%f, ", floatArrs[i]);
    }

    //Dividing the elements in the array function
    printf("\n");    
    divby5(floatArrs, 5);

    //Printing the elements of array after division
    printf("After:\n");
    for(int i = 0; i < 5; i++){
        printf("%f, ", floatArrs[i]);
    }
    return 0;
}