/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getDoublesFromUser(double *vector, int size){
    //To store a scanned input value
    double value;
    int i;
    for(i = 0; i < size; i++){
        //printf("Enter double number %d: ", i+1);  
        scanf("%lf", &value); 
        vector[i] = value;  
    }
    
}

double computeTheVector(double *i_vector, double *j_vector, int size){
    double result = 0.0;
    for(int i = 0; i < size; i++){
        result = result + i_vector[i] * j_vector[i];
    }
    return result;
}


int main(){
    //Defining my variables
    int num = 0;
    //printf("Enter the size of your scalars: ");
    scanf("%d", &num);
    double * d_num1;
    d_num1 = (double *) malloc(sizeof(double) * num);
    double * d_num2;
    d_num2 = (double *) malloc(sizeof(double) * num);

    //Prompt user to enter values for vector v
    getDoublesFromUser(d_num1, num);

    //Prompt user to enter values for vector w
    getDoublesFromUser(d_num2, num);

    //Printing the values
    printf("Scalar product=%f\n", computeTheVector(d_num1, d_num2, num));

    //printing the largest and smallest number of vector i
    double min_i = d_num1[0];
    double max_i = d_num1[0];
    
    //Storing the index
    int max_index_i = 0;
    int min_index_i = 0;

    for(int k = 0; k < num; k++){
        if(d_num1[k] > max_i){
            max_i = d_num1[k];
            max_index_i = k;
        }else if(d_num1[k] < min_i){
            min_i = d_num1[k];
            min_index_i = k;
        }
    }

    printf("The smallest = %f\n", min_i);
    printf("Position of smallest = %d\n", min_index_i);
    printf("The largest = %f\n", max_i);
    printf("Position of largest = %d\n", max_index_i);


    //printing the largest and smallest number of vector j
    double max_j = d_num2[0];
    double min_j = d_num2[0];
    //Storing the index
    int max_index_j = 0;
    int min_index_j = 0;

    for(int k = 0; k < num; k++){
        if(d_num2[k] > max_j){
            max_j = d_num2[k];
            max_index_j = k;
        }else if(d_num2[k] < min_j){
            min_j = d_num2[k];
            min_index_j = k;
        }
    }

    printf("The smallest = %f\n", min_j);
    printf("Position of smallest = %d\n", min_index_j);
    printf("The largest = %f\n", max_j);
    printf("Position of largest = %d\n", max_index_j);

    return 0;
}