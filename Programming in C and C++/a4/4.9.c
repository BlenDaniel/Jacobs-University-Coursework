/*
CH-230-A
a4 p9.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//To get the product of the maximum and minmum number in an array
int prodminmax(int arr[], int n) {
    int min = arr[0];
    int max = arr[0];
    
    //to iterate through the array of integers to get the max and min numbers
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    //Return their multiplication
    return min * max;
}

int main() {
    int sizeOfArr;
    printf("Enter size of array: ");
    scanf("%d", &sizeOfArr);
    //Initiating the array with given size
    int* arr = malloc(sizeof(int) * sizeOfArr);

    if(arr == NULL){
        exit(1);
    }
    //To get the values of the array from user
    for(int i = 0; i < sizeOfArr; i++) {
        int num;
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        arr[i] = num;
    }

    
    printf("The product of the maximun and minimum numbers: %d\n", prodminmax(arr, sizeOfArr));
    //To free memory
    free(arr);
}


