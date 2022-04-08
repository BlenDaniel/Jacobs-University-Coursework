/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//to store all my lower case letters
void append(char* s, char c) {
    int len = strlen(s);
    s[len] = c;
    s[len + 1] = '\0';
}

//To count the lower case letters
int count_lower(char* str, char* lower){
    int count = 0;

    while(*str != '\n') { 
        //Check if *str is lower case letter or not  
        if (*str >= 'a' && *str <= 'z'){
            //apped it used to concatinate the lower case letters
            append(lower, *str);
            //counting the lower case letters in the given string
            count++;  
        }                 
        str++;
    }    
   return count;
        
} 

int main(){
    char char_arr[50];
    char lower_arr[50];   
    while(1){      

        printf("Enter your string: ");

        //Get user input
        fgets(char_arr, sizeof(char_arr), stdin); 

        //check if its "\n". If it is, exit program
        if(!(strcmp(char_arr, "\n"))){
            break;
        }
        int count = count_lower(char_arr, lower_arr);
        printf("There are %d lower case letters in the string.\n", count);    
    }

    return 0;
}