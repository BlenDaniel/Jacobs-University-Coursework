/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void lineTimesPrinter(int num, char char_value){
    for(int i = 0; i <= num; i++){
        printf("%c ",char_value);
    }
}

void printTriangleFunction(int num, char char_value){
    for(int i = 0; i <= num; i++){
        lineTimesPrinter(i, char_value);
    }
    printf("\n");
}



int main(){

    int num;
    char char_value;
    //Prompt the user to enter a number
    //Save it in the defined variable
    printf("Enter a number: ");    
    scanf("%d", &num);

    //Prompt the user to enter a single Character
    //Save it in the defined variable
    printf("Enter a single character: ");
    scanf("%c", &char_value);
    getchar();

    printTriangleFunction(num, char_value);
    return 0;

}