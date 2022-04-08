/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

/* Function to return the difference between second and first number */
int mycount(int first, int second){
    return second - first;
}

int mycount(char n, string value){
    int count = 0;
    /* Check to see if there is a character in the string value */
    for(unsigned int i = 0; i < value.length(); i++){
       if(value[i] == n){
           /* To add one into the count when the character is in the string */
           count+=1;
       }
    }    
    return count;
}

int main(){    
    /* Printing out the result by calling mycount for counting the character in a string value */
    cout << "this is a string " << mycount('i',"this is a string") << endl;
    /*
        Printing out the result by calling mycount function for calculating 
        the difference between two values
    */
    cout << "this is a int " << mycount(7, 3) << endl;
    return 0;
}