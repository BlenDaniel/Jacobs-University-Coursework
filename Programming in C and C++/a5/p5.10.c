/*
CH-230-A
a4 p10.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Function to print the numbers below the inputed numbers*/

void printAllNumbersBelow(int num){
    if(num >= 0){
        printf("%d \n", num);
        /*Recursively calling the function to print number until the number is 0*/
        printAllNumbersBelow(num - 1);
    }    
}

int main(){
    /*Prompt the user to input a number*/
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    /*Calling function to print the numbers below the inputed number*/
    printAllNumbersBelow(num);
    return 0;
}