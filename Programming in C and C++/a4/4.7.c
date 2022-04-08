/*
CH-230-A
a4 p7.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//To print the matric
void print_matric(int matric[30][30], int size){

    for(int i = 0; i < size; i ++){
        for(int j = 0; j < size; j ++){

            printf("%d ", matric[i][j]);
        }

        printf("\n");
    }

}

//To print the values that are under the main diagonal
void print_under_main_diagonal(int matric[30][30], int size){
    for(int i = 0; i < size; i ++){
        for(int j = 0; j < size; j ++){
            if(i > j){
                printf("%d ", matric[i][j]);
            }            
        }
    }
}

int main(){
    //To get size of matrix
    int sizeOfArr;
    printf("Enter size of matrix: ");
    scanf("%d", &sizeOfArr);
    //Initiating matrix
    int matrix[30][30];
    //Getting values of matrix
    for (int i = 0; i < sizeOfArr; i++) {
        for (int j = 0; j < sizeOfArr; j++) {
            int value;
            printf("Enter row number %d values: ", i + 1);
            scanf("%d", &value);
            matrix[i][j] = value;
        }
    }

    //Printing matric
    printf("Print out of the matric is: \n");    
    print_matric(matrix, sizeOfArr);

    //Printing the values of under the main diagonal
    printf("Under the main diagonal: \n");
    print_under_main_diagonal(matrix, sizeOfArr);
    return 0;
}