/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void getFloatsFromUser(float *floatArray, int size){
    //To store a scanned input value
    float value;
    int i;
    for(i = 0; i < size; i++){
        printf("Enter float number %d: ", i+1);  
        scanf("%f", &value); 
        floatArray[i] = value;  
    }
    
}

int main(){

    int size = 0;
    printf("Enter the size of your list: ");
    scanf("%d", &size);

    //Define a float array
    float *floatArray = (float *) malloc(sizeof(float) * size);

    //Getting floats from user
    //This will update my floatArray
    getFloatsFromUser(floatArray, size);

    //counting the number of array before the negative value
    for(int i = 0; i < size; i++){
        if(floatArray[i] < 0){
            printf("Before the first negative value: %d elements", i);
            break;
        }
        
    }

    free(floatArray);
    return 0;
}