/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int position(char string[], char c);
void correct(char string[]);

int main() {
    // creates variables for the 2 strings and 1 char
    char one[50];
    char two[50];
    char c;
    
    // reads the values of the 2 string and 1 char
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin); 
    scanf("%c", &c);

    correct(one);
    correct(two);

    // uses strlen to find length of the strings
    int length_one = strlen(one);
    int length_two = strlen(two);

    // compares the two strings
    int comparison = strcmp(one, two);
    
    // concatenates the strings
    strcat(one, two);

    // creates a string copy and copies the value of two to it
    char copy[50];
    strcpy(copy, two);

    // finds the position of c in two
    int pos = position(two, c);    

    // prints the results of the above to the screen
    printf("length1=%d\n", length_one);
    printf("length2=%d\n", length_two);
    printf("concatenation=%s\n", one);
    printf("copy=%s\n", copy);

    if (comparison == 0) {
        printf("one is equal to two\n");
    }
    else if (comparison < 0) {
        printf("one is smaller than two\n");
    }
    else {
        printf("one is larger than two\n");
    }

    if (pos == -1) {
        printf("The character is not in the string\n");
    }
    else {
        printf("position=%d\n", pos);
    }

    return 0;
}

/* iterates through the string to find the the char c and returns the index
if found, if not it returns -1*/
int position(char string[], char c) {
    int len = strlen(string);
    for (int i = 0; i < len; i++) {
        if (string[i] == c) {
            return i;
        }
    }
    return -1;
}

// replaces '\n' that fgets adds at the end with '\0'
void correct(char string[]) {
    int len = strlen(string);
    string[len - 1] = '\0';
}