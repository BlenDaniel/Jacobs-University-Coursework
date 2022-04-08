/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printZigZag(char str[]);

int main(){
    //Start of my program
    char value[50];
    //I get a string input from user
    fgets(value, sizeof(value), stdin);
    //Calls the printZigZag function using the inputed string(char array)
    printZigZag(value);
    return 0;
}


void printZigZag(char str[])
{

    //This is where I will get the length of the list
    int length = strlen(str);

    for(int i = 0; i < length-1; i++){
        if(i % 2 == 0){
            //This is where I will print the even indexed character
            printf("%c", str[i]);
        }else{
            //This is where I will print the odd indexed character
            printf("  %c", str[i]);
        }
        printf("\n");
    }
}