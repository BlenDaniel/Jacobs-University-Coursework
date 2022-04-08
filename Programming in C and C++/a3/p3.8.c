/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>

float sum(float numbers[], int size);
float average(float numbers[], int size);

int main(){
    float nums[10];
    int i;
    for(i = 0; i < 10; i++){
        float f;
        scanf("%f", &f);
        if(f == -99.0){
            i--;
            break;
        }else{
            nums[i] = f;
        }
    }   
    printf("The sum of the numbers is %f\n", sum(nums, i+1));
    printf("The average of the numbers is %f", average(nums, i+1));
    return 0;
}

float sum(float numbers[], int size){
    int i = 0, sum = 0;
    while(i < size){
        sum += numbers[i];
        i++;
    }
    return sum;
}
float average(float numbers[], int size){
    return sum(numbers, size) / (float) size;
}