/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EXIT_FAILURE 1
#define MAX_LEN 25

int main() {

    /* Getting a line of length MAX_LEN */
    char buffer[MAX_LEN]; 

    FILE *fPtr1,  *fPtr2, *fPout; 

    fPtr1 = fopen("text1.txt", "r");

    fPtr2 = fopen("text2.txt", "r");

    fPout = fopen("merge12.txt", "w");

    if(fPtr1 == NULL || fPtr2 == NULL || fPout == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }

    /* Getting data line by line */
    while (fgets(buffer, MAX_LEN, fPtr1)){
        fputs(buffer, fPout);
    } 
    while (fgets(buffer, MAX_LEN, fPtr2)){
        fprintf(fPout, buffer);
    }       
    
    /* Closing the files */
    fclose(fPout);
    fclose(fPtr2);
    fclose(fPtr1);    
}
