/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


//For prompting the user to enter values into the first and second array
void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst_rowSecond, int columnSecond){

	for(int i = 0; i < rowFirst; ++i){
		for(int j = 0; j < columnFirst_rowSecond; ++j){
			scanf("%d", &firstMatrix[i][j]);
		}
	}

    printf("\n");

	for(int i = 0; i < columnFirst_rowSecond; ++i){
		for(int j = 0; j < columnSecond; ++j){
			scanf("%d", &secondMatrix[i][j]);
		}
	}
}

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst_rowSecond, int columnSecond){
	// Initializing elements of matrix mult to 0.
	for(int i = 0; i < rowFirst; ++i){
		for(int j = 0; j < columnSecond; ++j){
			mult[i][j] = 0;
		}
	}

	// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
	for(int i = 0; i < rowFirst; ++i){
		for(int j = 0; j < columnSecond; ++j){
			for(int k = 0; k < columnFirst_rowSecond; ++k){
				mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
			}
		}
	}
}

void printMatrix(int mult[][10], int rowFirst, int columnSecond) {
	//To print the elements in matrix mult
	for(int i = 0; i < rowFirst; ++i){
		for(int j = 0; j < columnSecond; ++j){
			printf("%d  ", mult[i][j]);
		}        
		printf("\n");
	}
}

int main(){
	//Initalizing the matrixes using a 10 x 10 row and column width
	//Since for matrix multiplication, the column of the first array and the row of the second array must match, they are the same variable
	int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst_rowSecond, columnSecond;

	//Asking the user to input the row of the first matrix, the column of the first and the row of the second matrix, and the column of the matrix respectively
	scanf("%d %d %d", &rowFirst, &columnFirst_rowSecond, &columnSecond);

	// Function to take matrices data
	enterData(firstMatrix, secondMatrix, rowFirst, columnFirst_rowSecond, columnSecond);

	//Printing matrix A
	printf("Matrix A:\n");
	printMatrix(firstMatrix, rowFirst, columnFirst_rowSecond);

	//Printing matrix B
	printf("Matrix B:\n");
	printMatrix(secondMatrix, columnFirst_rowSecond, columnSecond);

	// Function to multiply two matrices.
	multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst_rowSecond, columnSecond);
	printf("The multiplication result AxB:\n");

	// Function to display resultant matrix after multiplication.
	printMatrix(mult, rowFirst, columnSecond);
	return 0;
}

