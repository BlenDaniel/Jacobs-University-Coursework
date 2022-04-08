/*
CH-230-A
a4 p3.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//This is to change the value of a given integer 'size' with a new value called 'newValue'
void changeSize(int *size, int newValue);
//This is to change the value of a given float 'size' with a new value called 'newValue'
void changeFloat(float *size, float newValue);
//This is to calculate the mean of an array of floats and size called 'count'
float geometric_mean(float arr[], int count);
//This is to get the highest number from the list of float number
float get_highest_number(float arr[], int count);
//This is to get the lowest number
void get_lowest_number(float arr[], int count);
//This is to get the sum of all the numbers in the list of floats
void get_sum(float arr[], int count);

int main()
{
    float float_arr[15];
    //This is to get the actual size of the list;
    int size;
    printf("Starting Program\n");
    for (int i = 0; i < 15; i++)
    {
        float value;
        //Askes user to enter float
        printf("Enter float number %d: ", i + 1);
        scanf("%f", &value);
        if (value >= 0)
        {
            float_arr[i] = value;
            size = i + 1;
        }
        else
        {
            break;
        }
    }


    printf("\nHint:\n'm' to calculate the mean\n'h' to get the highest number\n'l' to get the lowest number\n's' to get the sum of the array\nEnter choice:  ");
    char value;
    //To get a choice
    scanf("%c", &value);
    getchar();
    // Switch statments to switch between choices
    // Since its in a while loop, this is called indefinitely
    while (1)
    {
        switch (value)
        {
        case 'm':
            //To calculate geometric mean
             printf("Geometric mean is: %f\n", geometric_mean(float_arr, size)); 
            break;
        case 'h':
            //To get the highest number
            printf("Highest entered number is: %f\n", get_highest_number(float_arr, size));
            break;
        case 'l':
            //To get the lowest number
            get_lowest_number(float_arr, size);
            break;
        case 's':
            //To get sum of all numbers
            get_sum(float_arr, size);
            break;
        default:
            break;
        }
    }
}

//This is to change the value of a given integer 'size' with a new value called 'newValue'
void changeSize(int *size, int newValue)
{
    *size = newValue;
}

//This is to change the value of a given float 'size' with a new value called 'newValue'
void changeFloat(float *size, float newValue)
{
    *size = newValue;
}

//This is to calculate the mean of an array of floats and size called 'count'
float geometric_mean(float arr[], int count)
{
    //The sum and the avarage are initiated here
    float prod;
    for (int x = 0; x < count; x++)
    {
        prod = prod * arr[x];
    }
   
    return  pow(prod, 1./count);
}

//This is to get the highest number from the list of float number
float get_highest_number(float arr[], int count)
{
    //The highest and the firstNumber are initiated here
    float high;
    float firstNumber = arr[0];
    for (int x = 1; x < count; x++)
    {
        //Chech if the first number of array is less than the second number in the array
        if (firstNumber < arr[x])
        {
            high = arr[x];
        }
    }
    
    return high;
}

//This is to get the lowest number
void get_lowest_number(float arr[], int count)
{
    //The lowest and the firstNumber are initiated here
    float lowest;
    float firstNumber = arr[0];
    for (int x = 1; x < count; x++)
    {
        //Chech if the first number of array is greater than the second number in the array
        if (firstNumber > arr[x])
        {
            changeFloat(&lowest, arr[x]);
        }
    }
    printf("Lowest entered number is: %f\n", lowest);
}

//This is to get the sum of all the numbers in the list of floats
void get_sum(float arr[], int count)
{
    //The Sum is initiated here
    float sum;
    for (int x = 0; x < count; x++)
    {
        //This is to add the new number to the sum
        sum = sum + arr[x];
    }
    printf("Sum of entered number is: %f\n", sum);
}
