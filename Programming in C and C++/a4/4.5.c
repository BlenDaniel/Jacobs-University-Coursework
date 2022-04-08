/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//To count consonants
void count_consonants(char str[]){ 
    int count = 0;
    char *arr = str;

    while(*arr != '\n') { 
        //Check if *arr is consonant or not
        if(*arr != 'a' && *arr !='e'&& *arr !='i'&& *arr !='o'&& *arr !='u'&& *arr !='A'&& *arr !='E'&& *arr !='I'&& *arr !='O'&& *arr !='U' ){
            if (*arr != ' ')
            count ++;
        }        
        arr++;
    }

    printf("There are %d consonant in the string.\n", count);
}

int main(){   
    while (1)
    {
        char value[100];

        printf("Enter your string: "); 
        //Gets string from user
        fgets(value, sizeof(value), stdin);

        if (!(strcmp(value, "\n"))) {
            break;
        }
        //count consonants is called
        count_consonants(value);
        //To free memory
    }
    return 0;
}

